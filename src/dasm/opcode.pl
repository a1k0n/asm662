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

sub gen_snippet($)
{
	my ($href) = @_;
	my $opc = $href->{opcodes};
	my $ins = prettify($href->{instr});
	my $params = $href->{params};
	my $actions = $href->{actions};

	# generate 'if' statement
	if($href->{dd} eq '0' || $href->{dd} eq '1') {
		print("\tif(D->dd == ".$href->{dd});
	} else {
		print("\tif(1");
	}

	for(my $i=1;$i<=$#$opc;$i++) {
		next if($opc->[$i] !~ '^[0-9A-F][0-9A-F]$');
		print(" && op[$i]==0x".$opc->[$i]);
	}
	print(") {\n");

	# generate printf
	print("\t\tsprintf(buf, \"".$ins."\"");
	for(my $i=0;$i<=$#$params;$i++) {
		print(", ".$params->[$i]);
	}
	print(");\n");

	# generate actions
	for(my $i=0;$i<=$#$actions;$i++) {
		print("\t\t".$actions->[$i]."\n");
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
		my @param;
		my @actions;
		my $n16;
		while($instr =~ /(off N'?8|#N'?8|[SN]'?8|N'?16|rel8|addr16).*/) {
			my $arg = $1;
			if($arg =~ /off (N'?8)/) {
				# offset address: off N8
				my $idx = idx_of(\@opc, $1);
				$instr =~ s/off N'?8(.*)/off(%s)$1/;
				push @param, "get_ram_label(((D->lrb>>5)<<8)|op[$idx], 4)";
			} elsif($arg =~ /#(N'?8)/) {
				# immediate: #N8
				my $idx = idx_of(\@opc, $1);
				$instr =~ s/N'?8(.*)/0%02xh$1/;
				push @param, "op[$idx]";
			} elsif($arg =~ /(N'?8)/) {
				# zero-page: N8
				my $idx = idx_of(\@opc, $1);
				$instr =~ s/N'?8(.*)/%s$1/;
				push @param, "get_ram_label(op[$idx], 2)";
			} elsif($arg =~ /(S8)/) {
				# USP-relative: N8[USP]
				my $idx = idx_of(\@opc, $1);
				$instr =~ s/S8(.*)/(%s-0%04xh)$1/;
				push @param, 'get_ram_label(D->usp+((signed char)op['.$idx.']), 4), D->usp';
			} elsif($arg =~ /N16/) {
				# 16-bit immediates and offsets
				my $idx = idx_of(\@opc, "NL");
				$n16 = "(op[".($idx+1)."]<<8)|op[".$idx."]";
				$instr =~ s/N16(.*)/%s$1/;
				push @param, "get_romtable_label($n16)";
			} elsif($arg =~ /N'16/) {
				# 16-bit immediates and offsets
				my $idx = idx_of(\@opc, "N'L");
				$n16 = "(op[".($idx+1)."]<<8)|op[".$idx."]";
				$instr =~ s/N'16(.*)/%s$1/;
				push @param, "get_romtable_label($n16)";
			} elsif($arg =~ /(rel8)/) {
				# relative branches and calls
				my $idx = idx_of(\@opc, $1);
				my $reladdr = "D->pc+((signed char)op[".$idx."])".
					"+".($#opc+1);
				$instr =~ s/rel8(.*)/%s$1/;
				push @param, "get_rom_label($reladdr)";
			} elsif($arg =~ /addr16/) {
				# absolute branches and calls
				my $idx = idx_of(\@opc, "addrl");
				$n16 = "(op[".($idx+1)."]<<8)|op[".$idx."]";
				$instr =~ s/addr16(.*)/%s$1/;
				push @param, "get_rom_label($n16)";
			} else {
				# what the fuck?
				die "what the fuck?";
			}
		}

		# track DD changes
		if($dd eq 'S') { push @actions, "D->dd = 1;"; }
		elsif($dd eq 'R') { push @actions, "D->dd = 0;"; }

		# track LRB usage using MOV LRB, #N16
		if($instr =~ /MOV LRB, #/) {
			push @actions, "D->lrb = $n16;";
		}

		# track USP using MOV USP, $#n16
		if($instr =~ /MOV USP, #/) {
			push @actions, "D->usp = $n16;";
		}
		
		# track VCALs
		if($instr =~ /VCAL ([0-9])/) {
			push @actions, "do_vcal($1);\n";
		}

		# decide whether or not to update the program counter
		if($cond eq 'I' || $cond eq 'J') {
			# indirect jump.. we have no idea what to do here, so leave PC
			# alone and allow the front end to figure it out
			# for direct jumps, we already created a label, so follow it later.
		} else {
			# everything else - increment PC as normal
			push @actions, "D->pc += ".($#opc+1).";";
		}

		add_instr(\@opc, \@param, $instr, $dd, \@actions);
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

