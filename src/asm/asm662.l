%{
/* build with lex -i */
#include "y.tab.h"
#include "asm662.h"
%}

%%

[0-9][0-9a-f]*h		{ sscanf(yytext, "%xh", &yylval.value);  return NUMBER; }
0x[0-9a-f]+			{ sscanf(yytext+2, "%x", &yylval.value); return NUMBER; }
[0-9]+				{ yylval.value = atoi(yytext); return NUMBER; }
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

ADC     	return ADC;
ADCB    	return ADCB;
ADD     	return ADD;
ADDB    	return ADDB;
AND     	return AND;
ANDB    	return ANDB;
BRK     	return BRK;
CAL     	return CAL;
CLR     	return CLR;
CLRB    	return CLRB;
CMP     	return CMP;
CMPB    	return CMPB;
CMPC    	return CMPC;
CMPCB   	return CMPCB;
DAA     	return DAA;
DAS     	return DAS;
DEC     	return DEC;
DECB    	return DECB;
DIV     	return DIV;
DIVB    	return DIVB;
EXTND   	return EXTND;
INC     	return INC;
INCB    	return INCB;
J       	return J;
JBR     	return JBR;
JBS     	return JBS;
JEQ     	return JEQ;
JGE     	return JGE;
JGT     	return JGT;
JLE     	return JLE;
JLT     	return JLT;
JNE     	return JNE;
JRNZ    	return JRNZ;
L       	return L;
LB      	return LB;
LC      	return LC;
LCB     	return LCB;
MB      	return MB;
MBR     	return MBR;
MOV     	return MOV;
MOVB    	return MOVB;
MUL     	return MUL;
MULB    	return MULB;
NOP     	return NOP;
OR      	return OR;
ORB     	return ORB;
POPS    	return POPS;
PUSHS   	return PUSHS;
RB      	return RB;
RBR     	return RBR;
RC      	return RC;
ROL     	return ROL;
ROLB    	return ROLB;
ROR     	return ROR;
RORB    	return RORB;
RT      	return RT;
RTI     	return RTI;
SB      	return SB;
SBC     	return SBC;
SBCB    	return SBCB;
SBR     	return SBR;
SC      	return SC;
SCAL    	return SCAL;
SJ      	return SJ;
SLL     	return SLL;
SLLB    	return SLLB;
SRA     	return SRA;
SRAB    	return SRAB;
SRL     	return SRL;
SRLB    	return SRLB;
ST      	return ST;
STB     	return STB;
SUB     	return SUB;
SUBB    	return SUBB;
SWAP    	return SWAP;
SWAPB   	return SWAPB;
TRB     	return TRB;
VCAL    	return VCAL;
XCHG    	return XCHG;
XCHGB   	return XCHGB;
XNBL    	return XNBL;
XOR     	return XOR;
XORB    	return XORB;
[A-Za-z_][A-Za-z0-9_]*	{ yylval.sym = get_symbol(yytext); return SYMBOL; }
[ \t\r]				;
;.*$				;
\n					{ lineno++; return NL; }
.					return yytext[0];

%%

