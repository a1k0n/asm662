#!/usr/bin/perl -w

use strict;

my %baseop;
sub add_instr($$$$$)
{
	my ($opc, $params, $instr, $dd, $actions) = @_;
	my @opc = @$opc;
	my $op0 = hex($opc[0]);
	if(!defined $baseop{$op0}) {
		$baseop{$op0} = [];
	}
	my $rec = { 
			opcodes => $opc,
			instr => $instr,
			params => $params,
			dd => $dd,
			actions => $actions};
	push @{$baseop{$op0}}, $rec;
}

sub idx_of($$)
{
	my ($aref, $srch) = @_;
	for(my $i=0;$i<=$#$aref;$i++) {
		if($aref->[$i] eq $srch) {
			return $i;
		}
	}
	return 'missing';
}

sub prettify($)
{
	my ($ins) = @_;
	if($ins =~ /^([^ ]*) (.*)$/) {
		$ins = sprintf("%-7s %s", $1, $2);
	}
	return $ins;
}

my @matchclause1;
my @matchclause2;
my %mnemonicops;
sub gen_code()
{
	open ML, "<op.ml";
	open OUT, ">opcode.ml";
	while(<ML>) {
		print OUT;
		if(/---generate---/) {
#			print OUT "type opcode = OP_Invalid of int\n";
#			foreach my $m (keys %mnemonicops) {
#				print OUT "    | OP_$m ";
#				print OUT "of operand * operand\n" if($mnemonicops{$m} == 2);
#				print OUT "of operand\n" if($mnemonicops{$m} == 1);
#				print OUT "\n" if($mnemonicops{$m} == 0);
#			}
#			print OUT ";;\n\n
			print OUT "let get_op_name = function\n";
			print OUT "    OP_Invalid (n) -> Printf.sprintf \"?UNK#%02x\" n\n";
			foreach my $m (keys %mnemonicops) {
				print OUT "    | OP_$m (o1,o2) -> Printf.sprintf \"%-8s%s, %s\" \"$m\" (oprname o1) (oprname o2)\n" if($mnemonicops{$m} == 2); 
				print OUT "    | OP_$m (o1) -> Printf.sprintf \"%-8s%s\" \"$m\" (oprname o1)\n" if($mnemonicops{$m} == 1);
				print OUT "    | OP_$m -> \"$m\"\n" if($mnemonicops{$m} == 0);
			}
			# print OUT "    | OP_XXX (op1,op2) -> "XXX " ^ (oprname op1) ...
			print OUT ";;\n
let get_op (buf:string) (addr:int) (dd:int) =
    let op = (dd,
    int_of_char buf.[addr],
    int_of_char buf.[addr+1],
    int_of_char buf.[addr+2],
    int_of_char buf.[addr+3],
    int_of_char buf.[addr+4],
    int_of_char buf.[addr+5]) in
	match op with
";
			foreach my $m (@matchclause1) {
				print OUT "    $m\n";
			}
			foreach my $m (@matchclause2) {
				print OUT "    $m\n";
			}
#    match op with
#      (_,0xB5,n8,0x15,_,_,_) -> (OP_CLR (ZeroPage n8), Simple (addr+3), dd)
#    | (_,_n,n8,rel8,_,_,_) when (_n >= 0xd8 && _n < 0xe0) -> let n=(_n-0xd8) in
#        (OP_JBR (Bit ((OffPage (n8), n)), ROMRel8 (rel8)),
#        Conditional ((addr+3), (addr+3+rel8)), dd)
#    | (_,n,_,_,_,_,_) -> (OP_Invalid (n), Halt, dd)

			# print OUT "| (_,_,...)"; when clauses last
			print OUT "    |(_,n,_,_,_,_,_) -> (OP_Invalid (n), Halt, dd)\n;;\n";
			print OUT "\n(* --- end of generated functions --- *)\n\n";
		}
	}
	close ML;
	close OUT;
}

my %addressmode_ram = (
	"#N16" => "Imm16 (make16 nl nh)", "#N8" => "Imm8 (n8)",
	"A" => "Acc", "C" => "Carry", "DP" => "DP", "LRB" => "LRB",
	"N'16[X1]" => "X1Rel (make16 n'l n'h)",
	"N'16[X2]" => "X2Rel (make16 n'l n'h)",
	"N'8" => "ZeroPage (n'8)", "N16[X1]" => "X1Rel (make16 nl nh)",
	"N16[X1].n" => "Bit (X1Rel (make16 nl nh), b)",
	"N16[X2]" => "X2Rel (make16 nl nh)",
	"N16[X2].n" => "Bit (X2Rel (make16 nl nh), b)",
	"N8" => "ZeroPage (n8)", "N8.n" => "Bit (ZeroPage (n8), b)",
	"PSW" => "PSW", "PSWH" => "PSWH", "PSWH.n" => "Bit (PSWH, b)",
	"PSWL" => "PSWL", "PSWL.n" => "Bit (PSWL, b)",
	"S8[USP]" => "USPRel (makes8 s8)",
	"S8[USP].n" => "Bit (USPRel (makes8 s8), b)",
	"SSP" => "SSP", "USP" => "USP", "X1" => "X1", "X2" => "X2",
	"[DP]" => "DPRel", "[DP].n" => "Bit (DPRel, b)",
	"erM" => "ERn (m)", "erM'" => "ERn (m')",
	"off N'8" => "OffPage (n'8)", "off N8" => "OffPage (n8)",
	"off N8.n" => "Bit (OffPage (n8), b)", "rN" => "Rn (n)",
	"rN'" => "Rn (n')", "rN.n" => "Bit (Rn (n), b)",
	"rel8" => "ROMRel8 (makes8 rel8)");

my %addressmode_rom = (
	"A" => "Acc", "N16" => "ROMAddr16 (make16 nl nh)",
	"N16[DP]" => "ROMOffsetIndirect (DP, make16 nl nh)",
	"N16[N8]" => "ROMOffsetIndirect (ZeroPage (n8), make16 nl nh)",
	"N16[USP]" => "ROMOffsetIndirect (USP, make16 nl nh)",
	"N16[X1]" => "ROMOffsetIndirect (X1, make16 nl nh)",
	"N16[X2]" => "ROMOffsetIndirect (X2, make16 nl nh)",
	"N16[off N8]" => "ROMOffsetIndirect (OffPage (n8), make16 nl nh)",
	"[DP]" => "ROMIndirect (DP)", "[LRB]" => "ROMIndirect (LRB)",
	"[N16[X1]]" => "ROMIndirect (X1Rel (make16 nl nh))",
	"[N16[X2]]" => "ROMIndirect (X2Rel (make16 nl nh))",
	"[N8]" => "ROMIndirect (ZeroPage (n8))",
	"[S8[USP]]" => "ROMIndirect (USPRel (makes8 s8))",
	"[SSP]" => "ROMIndirect (SSP)", "[USP]" => "ROMIndirect (USP)",
	"[X1]" => "ROMIndirect (X1)", "[X2]" => "ROMIndirect (X2)",
	"[[DP]]" => "ROMIndirect (DPRel)", "[erM]" => "ROMIndirect (ERn (m))",
	"[off N8]" => "ROMIndirect (OffPage (n8))");

sub camlify_operand($$)
{
	my ($addrmode, $opr) = @_;
	if($addrmode eq 'C') {
		return $addressmode_rom{$opr};
	} else {
		return $addressmode_ram{$opr};
	}
}

sub process
{
	my ($instr, $dd, $cond, $addrmode, @opc) = @_;

	if($instr eq 'RB PSWH.4') { $dd = 'R'; }
	elsif($instr eq 'SB PSWH.4') { $dd = 'S'; }

	my ($mnemonic, @operands);
	# parse out the instruction and the operands
	# add instruction to instruction hash; keep track of #args
	if($instr =~ /(\S+)\s+([^,]+),\s*(.*)$/) {
		# two operands
		$mnemonic = $1;
		@operands = (camlify_operand($addrmode, $2), 
			camlify_operand($addrmode, $3));
		$mnemonicops{$mnemonic} = 2;
	} elsif($instr =~ /(\S+)\s+(.*)$/) {
		# one operand
		$mnemonic = $1;
		@operands = (camlify_operand($addrmode, $2));
		$mnemonicops{$mnemonic} = 1;
	} else {
		# no operands
		$mnemonic = $instr;
		$mnemonicops{$mnemonic} = 0;
	}

	# do some replacements on the opcodes:
	#  - N'8/N8 -> n'8/n8
	#  - N'L/N'H -> n'l/n'h
	#  - NL/NH -> nl/nh
	#  - XX+N/XX+n -> __1 ... when __1 >= XX && __1 < (XX+8) ... 
	#                 let N=__1-XX in
	#  - XX+M -> __1 ... when __1 >= XX && __1 < (XX+4) ...
	#                 let M=__1-XX in
	my $_n=1;
	my @when;
	my @let;
	my $has_guard = 0;
	for(my $i=0;$i<=$#opc;$i++) {
		$_ = $opc[$i];
		if($_ eq "N'8") { $opc[$i] = "n'8"; next; }
		if($_ eq "N8") { $opc[$i] = "n8"; next; }
		if($_ eq "S8") { $opc[$i] = "s8"; next; }
		if($_ eq "S'8") { $opc[$i] = "s'8"; next; }
		if($_ eq "N'L") { $opc[$i] = "n'l"; next; }
		if($_ eq "N'H") { $opc[$i] = "n'h"; next; }
		if($_ eq "NL") { $opc[$i] = "nl"; next; }
		if($_ eq "NH") { $opc[$i] = "nh"; next; }
		next if($_ eq "rel8");
		next if($_ eq "addr16");
		if(/(.*)\+([NMn]'?)/) { 
			my $arg = "arg_".$_n;
			my $opcode = hex($1);
			my $range = 8;
			if(($2 eq 'M') or ($2 eq "M'")) {$range = 4;}
			my %xlation = ( 
				'M' => 'm', 'N' => 'n', 'n' => 'b',
				"M'" => "m'", "N'" => "n'", "n'" => "b'");
			$opc[$i] = $arg; $_n++; 
			push @when, "$arg >= $opcode && $arg < ".($opcode + $range);
			push @let, "let ".($xlation{$2})."=$arg-$opcode in";
			$has_guard = 1;
			next;
		}
		$opc[$i] = "0x$_";
	}

	# generate (dd,i1,i2,i3,i4,i5,i6) [when] -> [let] OP_X (op1, op2)

	my $match = "    | (".($dd eq "1" ? "1" : $dd eq "0" ? "0" : "_");
	for(my $i=0;$i<6;$i++) {
		if($opc[$i]) {
			$match .= ",$opc[$i]";
		} else {
			$match .= ",_";
		}
	}
	$match .= ")";
	
	if($#when >= 0) {
		$match .= " when ";
		$match .= join(" && ", @when);
	}

	my $newdd = "dd";
	# track DD changes
	if($dd eq 'S') { $newdd = "1"; }
	if($dd eq 'R') { $newdd = "0"; }

	my $isize = $#opc + 1;
	my $itype = "Simple ($isize)";

	if($cond eq 'I' || $cond eq 'J') {
		# indirect jump.. we have no idea what to do here, so simply
		# halt "execution"
		if($#operands == 1) {
			$itype = "Jump ($isize, ".$operands[1].")";
		} elsif($#operands == 0) {
			$itype = "Jump ($isize, ".$operands[0].")";
		} else {
			#print("warning: $mnemonic is jump with no operands?\n");
			$itype = "Halt";
		}
	} elsif($cond eq 'C') {
		if($#operands == 1) {
			$itype = "Conditional ($isize, ".$operands[1].")";
		} elsif($#operands == 0) {
			$itype = "Conditional ($isize, ".$operands[0].")";
		} else {
			print("warning: $mnemonic is a condjump with no operands?\n");
			$itype = "Halt";
		}
	} elsif($cond eq 'L') {
		if($#operands == 1) {
			$itype = "Call ($isize, ".$operands[1].")";
		} elsif($#operands == 0) {
			$itype = "Call ($isize, ".$operands[0].")";
		} else {
			print("warning: $mnemonic is a call with no operands?\n");
			$itype = "Halt";
		}
	} elsif($cond eq 'R') {
		$itype = "Return";
	}

	# TODO : match VCALn

	if($#operands >= 0) {
		$match .= " -> @let (OP_$mnemonic (".join(", ", @operands)."), $itype, $newdd)";
	} else {
		$match .= " -> @let (OP_$mnemonic , $itype, $newdd)";
	}

	if($has_guard == 1) {
		push (@matchclause2, $match)
	} else {
		push (@matchclause1, $match)
	}

#	# track LRB usage using MOV LRB, #N16
#	if($instr =~ /MOV LRB, #/) {
#		push @actions, "D->lrb = $n16;";
#	}

#	# track USP using MOV USP, $#n16
#	if($instr =~ /MOV USP, #/) {
#		push @actions, "D->usp = $n16;";
#	}
#	
#	# track VCALs
#	if($instr =~ /VCAL ([0-9])/) {
#		push @actions, "do_vcal($1);";
#	}

#	add_instr(\@opc, \@param, $instr, $dd, \@actions);
}

open OP, "<66207.op";
while(<OP>) {
	next if /^;/;
	if(/^([^-]*)-(.)(.)(.) (.*)$/) {
		my ($instr, $dd, $cond, $addrmode, $opcodes) = ($1,$2,$3,$4,$5);
		my @crap = split /,/, $opcodes;
		$instr =~ s/\s+$//;
		process($instr, $dd, $cond, $addrmode, @crap);
	}
}
close OP;
gen_code();

