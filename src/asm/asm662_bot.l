[A-Za-z_][A-Za-z0-9_]*	{ yylval.sym = get_symbol(yytext); return SYMBOL; }
[ \t\r]				;
;.*$				;
\n					{ lineno++; return NL; }
.					return yytext[0];

%%

