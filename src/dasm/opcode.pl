#!/usr/bin/perl -w

use strict;

my %baseop;
sub add_instr($$$$$)
{
	my ($opc, $args, $instr, $dd, $cond) = @_;
	my @opc = @$opc;
	my @args = @$args;
	#print("@opc: [$dd$cond] \"$instr\" @args\n");
	my $op0 = hex($opc[0]);
	if(!defined $baseop{$op0}) {
		$baseop{$op0} = [];
	}
	my $rec = { 
			opcodes => \@opc,
			instr => $instr,
			args => \@args,
			dd => $dd,
			cond => $cond};
	push @{$baseop{$op0}}, $rec;
}

sub gen_snippet($)
{
	my ($href) = @_;
	if($href->{dd} eq '0' || $href->{dd} eq '1') {
		print("\tif(D->dd == ".$href->{dd});
	} else {
		print("\tif(1");
	}
	my $opc = $href->{opcodes};
	for(my $i=1;$i<=$#$opc;$i++) {
		next if($opc->[$i] !~ '^[0-9A-F][0-9A-F]$');
		print(" && op[$i]==0x".$opc->[$i]);
	}
	print(") {\n");
	print("\t\tsprintf(buf, \"".$href->{instr}."\"");
	my $args = $href->{args};
	my ($reladdr, $n16);
	for(my $i=0;$i<=$#$args;$i++) {
		my $type = $opc->[$args->[$i]];
		if($type eq 'rel8') {
			$reladdr = "D->pc+((signed char)op[".$args->[$i]."])".
				"+".($#$opc+1);
			print(", get_label($reladdr)");
		} elsif($type eq 'addrl' || $type eq 'NL' || $type eq "N'L") {
			$n16 = "(op[".($args->[$i]+1)."]<<8)|op[".$args->[$i]."]";
			if($type eq 'addrl') {
				print(", get_label($n16)");
			} else {
				print(", $n16");
			}
		} elsif($type eq 'S8') {
			print(", ((signed char)op[".$args->[$i]."]) < 0 ? '-':' ', ".
				"_abs((signed char)op[".$args->[$i]."])");
		} else {
			print(", op[".$args->[$i]."]");
		}
	}
	print(");\n");

	# track DD changes
	if($href->{dd} eq 'S') { print("\t\tD->dd = 1;\n"); }
	elsif($href->{dd} eq 'R') { print("\t\tD->dd = 0;\n"); }

	# track LRB usage using MOV LRB, #N16
	if($href->{instr} =~ /MOV LRB, #/) {
		print("\t\tD->lrb = $n16;\n");
	}

	# track VCALs
	if($href->{instr} =~ /VCAL ([0-9])/) {
		printf("\t\tdo_vcal($1);\n");
	}

	# decide whether or not to update the program counter
	if($href->{cond} eq 'I' || $href->{cond} eq 'J') {
		# indirect jump.. we have no idea what to do here, so leave PC
		# alone and allow the front end to figure it out
		# for direct jumps, we already created a label, so follow it later.
	} else {
		# everything else - increment PC as normal
		print("\t\tD->pc += ".($#$opc+1).";\n");
	}

	print("\t\treturn ".($#$opc+1).";\n\t}\n");
}

sub gen_func($$)
{
	my ($aref, $idx) = @_;
	printf("int dasmfunc_%02x(dasm_state *D, char *buf) {\n", $idx);
	print("\tunsigned char *op = D->rom+D->pc;\n");
	for(my $i=0;$i<=$#$aref;$i++) {
		gen_snippet($aref->[$i]);
	}
	printf("\treturn -1;\n");
	printf("}\n\n");
}

sub gen_code()
{
	print("#include \"dasm.h\"\n");
	my $table = "dasmfunc dasmtable[256] = {\n";
	for(my $i=0;$i<256;$i++) {
		my $comma = $i == 255 ? "};\n\n" : ",";
		if(!defined $baseop{$i}) {
			$table .= sprintf("\tNULL%s /* nothing for %02x */\n", $comma, $i);
		} else {
			$table .= sprintf("\tdasmfunc_%02x%s\n", $i, $comma, $i);
			gen_func($baseop{$i}, $i);
		}
	}
	print($table);
}

sub process
{
	my ($instr, $dd, $cond, @opc) = @_;
	# first, some code transformations:
	if($instr =~ /^(.*)erN'(.*)$/) {
		# erN/XY+N -> er0..er3
		my ($i0, $i1) = ($1, $2);
		for(my $j=0;$j<=$#opc;$j++) {
			if($opc[$j] =~ /([0-9A-F][0-9A-F])\+N'/) {
				my $o0 = hex($1);
				for(my $i=0;$i<4;$i++) {
					$opc[$j] = sprintf("%02X", $o0+$i);
					process($i0."er".$i.$i1, $dd, $cond, @opc);
				}
			}
		}
	} elsif($instr =~ /^(.*)erN(.*)$/) {
		# erN/XY+N -> er0..er3
		my ($i0, $i1) = ($1, $2);
		for(my $j=0;$j<=$#opc;$j++) {
			if($opc[$j] =~ /([0-9A-F][0-9A-F])\+N/) {
				my $o0 = hex($1);
				for(my $i=0;$i<4;$i++) {
					$opc[$j] = sprintf("%02X", $o0+$i);
					process($i0."er".$i.$i1, $dd, $cond, @opc);
				}
			}
		}
	} elsif($instr =~ /^(.*)rN'(.*)$/) {
		# rN/XY+N  -> r0..r8
		my ($i0, $i1) = ($1, $2);
		for(my $j=0;$j<=$#opc;$j++) {
			if($opc[$j] =~ /([0-9A-F][0-9A-F])\+N'/) {
				my $o0 = hex($1);
				for(my $i=0;$i<8;$i++) {
					$opc[$j] = sprintf("%02X", $o0+$i);
					process($i0."r".$i.$i1, $dd, $cond, @opc);
				}
			}
		}
	} elsif($instr =~ /^(.*)rN(.*)$/) {
		# rN/XY+N  -> r0..r8
		my ($i0, $i1) = ($1, $2);
		for(my $j=0;$j<=$#opc;$j++) {
			if($opc[$j] =~ /([0-9A-F][0-9A-F])\+N/) {
				my $o0 = hex($1);
				for(my $i=0;$i<8;$i++) {
					$opc[$j] = sprintf("%02X", $o0+$i);
					process($i0."r".$i.$i1, $dd, $cond, @opc);
				}
			}
		}
	} elsif($instr =~ /^(.*)\.n(.*)$/) {
		# rN.n  -> .0 .. .7
		my ($i0, $i1) = ($1, $2);
		for(my $j=0;$j<=$#opc;$j++) {
			if($opc[$j] =~ /([0-9A-F][0-9A-F])\+n/) {
				my $o1 = hex($1);
				for(my $i=0;$i<8;$i++) {
					$opc[$j] = sprintf("%02X", $o1+$i);
					process($i0.".".$i.$i1, $dd, $cond, @opc);
				}
			}
		}
	} else {
		if($instr eq 'RB PSWH.4') { $dd = 'R'; }
		elsif($instr eq 'SB PSWH.4') { $dd = 'S'; }
		# replace NL, NH, N'L, N'H, N8, address with %s.. hmm, we need to
		# know what order they're in in the final instruction...
		my @args;
		while($instr =~ /([SN]'?8|N'?16|rel8|addr16).*/) {
			my $arg = $1;
			if($arg =~ /N'?8/) {
				push @args, $arg;
				$instr =~ s/N'?8(.*)/%03xh$1/;
			} elsif($arg =~ /S8/) {
				push @args, $arg;
				$instr =~ s/S8(.*)/%c%03xh$1/;
			} elsif($arg =~ /N16/) {
				push @args, "NL";
				$instr =~ s/N16(.*)/%05xh$1/;
			} elsif($arg =~ /N'16/) {
				push @args, "N'L";
				$instr =~ s/N'16(.*)/%05xh$1/;
			} elsif($arg =~ /rel8/) {
				push @args, "rel8";
				$instr =~ s/rel8(.*)/%s$1/;
			} elsif($arg =~ /addr16/) {
				push @args, "addrl";
				$instr =~ s/addr16(.*)/%s$1/;
			} else {
				die "what the fuck?";
			}
		}
		# translate args into the indices in the opcode they appear
		for(my $i=1;$i<=$#opc;$i++) {
			for(my $j=0;$j<=$#args;$j++) {
				if($args[$j] eq $opc[$i]) {
					$args[$j] = $i;
				}
			}
		}
		add_instr(\@opc, \@args, $instr, $dd, $cond);
	}
}

open OP, "<../66207.op";
while(<OP>) {
	next if /^;/;
	if(/^([^-]*)-(.)(.) (.*)$/) {
		my ($instr, $dd, $cond, $opcodes) = ($1,$2,$3,$4);
		my @crap = split /,/, $opcodes;
		$instr =~ s/\s+$//;
		process($instr, $dd, $cond, @crap);
	}
}
close OP;
gen_code();

