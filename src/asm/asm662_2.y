
%%

label:
	SYMBOL ':' { set_symbol_value($1, get_pc()); }
	;

equate:
	SYMBOL EQU expr { set_symbol_value($1, $3); }
	;

origin:
	ORG NUMBER   { set_pc($2); }
	;

preload:
	PRELOAD STRING	{ preload_bin($2); }

directive:
	equate
	| origin
	| preload
	;

statement: label
	| directive
	| instruction
	;

expr: expr '+' expr { $$ = $1 + $3; }
	| expr '-' expr { $$ = $1 - $3; }
	| expr '*' expr { $$ = $1 * $3; }
	| expr '/' expr { $$ = $1 / $3; }
	| expr '%' expr { $$ = $1 % $3; }
	| expr '&' expr { $$ = $1 & $3; }
	| expr '|' expr { $$ = $1 | $3; }
	| expr '^' expr { $$ = $1 ^ $3; }
	| expr SHIFTL expr { $$ = $1 << $3; }
	| expr SHIFTR expr { $$ = $1 >> $3; }
	| '-' expr %prec UMINUS { $$ = -$2; }
	| '(' expr ')'  { $$ = $2; }
	| NUMBER
	| '$'		 { $$ = get_pc(); }
	| SYMBOL 	 { $$ = get_symbol_value($1); }
	;

exprlist: expr		{ _val_n=1; _valbytes[0] = $1; _valwords[0] = $1; }
	| exprlist ',' expr	{ 
			if(_val_n > 255) 
				emit_error("expression lists can only be 256 long"); 
			else {
				_valbytes[_val_n] = $3; 
				_valwords[_val_n] = $3; 
				++_val_n;
			}
		}
	;

statements:
	| statements statement
	;

ROOT:
	statements
	;

instruction: NL
	| DB exprlist NL { emit(_valbytes, _val_n); _val_n=0; }
	| DW exprlist NL { emit_words(_valwords, _val_n); _val_n=0; }
	| VCAL expr NL { u8 instr[1]={0x10}; instr[0] += $2; if(instr[0] > 0x17) emit_error("invalid VCAL"); else emit(instr, 1); }
