my %hi;

while(<>) {
	next if /^;/;
	next if /^$/;
	next if /-..M/;
	if(s/^[^ ]+ (.*)-.*$/$1/) {
		chomp;
		s/\s*$//;
		my @duh = split /, */;
		map { $hi{$_} = 1; } @duh;
	}
}

map { print "\"$_\" => \"\"\n"; } (sort keys %hi);
