#!/usr/bin/perl -w

use strict;

my %instr_names;
my @instr_code;
sub add_instr($$$$$)
{
	my ($args, $opc, $actions, $dd, $cond) = @_;

	my $rec = { 
			args => $args,
			opcodes => $opc,
			actions => $actions,
			dd => $dd,
			cond => $cond};

	push @instr_code, $rec;
}

sub idx_of($$)
{
	my ($aref, $srch) = @_;
	for(my $i=0;$i<=$#$aref;$i++) {
		if($aref->[$i] eq $srch) {
			return $i;
		}
	}
	my @instr = @$aref;
	die "$srch not found in @instr\n";
	return 'missing';
}

sub gen_snippet($)
{
	my ($href) = @_;
	my $args = $href->{args};
	my $opc = $href->{opcodes};
	my $actions = $href->{actions};

	print INSTR "\t| @$args { ";

	print INSTR "u8 instr[".($#$opc+1)."] = {";
	for(my $i=0;$i<=$#$opc;$i++) {
		if($i>0) { print INSTR ","; }
		if($opc->[$i] !~ '^[0-9A-F][0-9A-F]$') {
			print INSTR "0";
		} else {
			print INSTR "0x".$opc->[$i];
		}
	}
	print INSTR ("}; ");

	print INSTR "@$actions ";
	print INSTR "emit(instr,".($#$opc+1)."); }\n";
}

sub gen_code()
{
	my @instrs = sort keys(%instr_names);

	# dump the list of instruction names to our parser
	open LEX, ">opcode.l";
	open Y1, ">tokens.y";
	for(my $i=0;$i<=$#instrs;$i++) {
		print Y1  "%token $instrs[$i]\n";
		printf LEX "%-8s\treturn $instrs[$i];\n", $instrs[$i];
	}
	close LEX;
	close Y1;

	# now generate the actual assembler
	open INSTR, ">instrs.y";
	for(my $i=0;$i<=$#instr_code;$i++) {
		gen_snippet($instr_code[$i]);
	}
	print INSTR "\t;\n";
	close INSTR;
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
		my (@args, @actions);
		$instr =~ s/^([^ ]+)(.*?)$/$2/;
		my $insname = $1;
		$instr_names{$insname} = 1;
		if($insname eq 'VCAL') {
			# this will be special-cased
			return;
		}
		push @args, $insname;
		while($instr =~ s/(,|#|A|C|er[0-3]|r[0-7]|DP|X[12]|[US]SP|LRB|PSW[LH]|off|\[|\]|[NS]'?8|N'?16|rel8|addr16|\.[0-7])(.*)/$2/) {
			my $arg = $1;
			my $argidx = $#args + 2;
			if($arg =~ /^[,#\[\]]$/) {
				push @args, "'$arg'";
			} elsif($arg eq 'off') {
				push @args, "OFFSET";
			} elsif($arg =~ /\.([0-7])/) {
				push @args, "DOT$1";
			} elsif($arg =~ /[SN]'?8/) {
				push @args, "expr";
				push @actions, "instr[".idx_of(\@opc, $arg)."] = \$$argidx;";
			} elsif($arg =~ /N16/) {
				push @args, "expr";
				push @actions, "_SET16(instr,".idx_of(\@opc, "NL").
					",\$$argidx);";
			} elsif($arg =~ /N'16/) {
				push @args, "expr";
				push @actions, "_SET16(instr,".idx_of(\@opc, "N'L").
					",\$$argidx);";
			} elsif($arg =~ /rel8/) {
				push @args, "expr";
				push @actions, "instr[".idx_of(\@opc, $arg).
					"] = _REL8(".($#opc+1).",\$$argidx);";
			} elsif($arg =~ /addr16/) {
				push @args, "expr";
				push @actions, "_SET16(instr,".idx_of(\@opc, "addrl").
					",\$$argidx);";
			} elsif($arg =~ /(A|C|er[0-3]|r[0-7]|DP|X[12]|[US]SP|LRB|PSW[LH])/) {
				push @args, "R_$arg";
			} else {
				die "what the fuck?: $arg";
			}
		}
		push @args, "NL";
		add_instr(\@args, \@opc, \@actions, $dd, $cond);
		#print "@args - @actions\n";
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

