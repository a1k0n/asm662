%{
/* build with lex -i */
#include "y.tab.h"
#include "asm662.h"
%}

%%

[0-9][0-9a-f]*h		{ sscanf(yytext, "%xh", &yylval.value);  return NUMBER; }
0x[0-9a-f]+			{ sscanf(yytext+2, "%x", &yylval.value); return NUMBER; }
[0-9]+				{ yylval.value = atoi(yytext); return NUMBER; }
\"[^"]*\"				{ yylval.string = strdup(yytext+1); yylval.string[strlen(yylval.string)-1] = 0; return STRING; }
preload	return PRELOAD;
romsize return ROMSIZE;
[<][<]	return SHIFTL;
[>][>]	return SHIFTR;
dw		return DW;
db		return DB;
org		return ORG;
equ		return EQU;
off		return OFFSET;
A		return R_A;
C		return R_C;
DP		return R_DP;
X1		return R_X1;
X2		return R_X2;
USP		return R_USP;
SSP		return R_SSP;
LRB		return R_LRB;
PSWH	return R_PSWH;
PSWL	return R_PSWL;
er0		return R_er0;
er1		return R_er1;
er2		return R_er2;
er3		return R_er3;
r0		return R_r0;
r1		return R_r1;
r2		return R_r2;
r3		return R_r3;
r4		return R_r4;
r5		return R_r5;
r6		return R_r6;
r7		return R_r7;
\.0		return DOT0;
\.1		return DOT1;
\.2		return DOT2;
\.3		return DOT3;
\.4		return DOT4;
\.5		return DOT5;
\.6		return DOT6;
\.7		return DOT7;

