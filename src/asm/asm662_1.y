%{
/* build with yacc -d */
#include <stdio.h>
#include "asm662.h"
#define _LO(x) (x&0xff)
#define _HI(x) ((x>>8)&0xff)
#define _SET16(instr,n,val) instr[n]=_LO(val); instr[n+1]=_HI(val); 
unsigned char _REL8(int instr_siz, int val) 
{ 
	signed int x = (val-get_pc()-instr_siz);
	if(x<-128 || x>127)
		emit_warning("jump target %X out of range", x);
	x &= 0xff;
	return (unsigned char)x;
}

static unsigned char _valbytes[256];
static unsigned short _valwords[256];
static int _val_n;

%}

%start ROOT

%left SHIFTL SHIFTR
%left '&' '|' '^'
%left '-' '+'
%left '*' '/' '%'
%nonassoc UMINUS

%union {
	int value;
	struct symbol *sym;
}

%type <value> expr

/* primitives */
%token <value> NUMBER
%token NL /* newline */

/* assembler directives */
%token ORG DB DW EQU ROMSIZE PRELOAD
%token <sym> SYMBOL

/* instruction tokens */
%token OFFSET   /* "off" */
%token DOT0 DOT1 DOT2 DOT3 DOT4 DOT5 DOT6 DOT7 /* .n */

/* expression tokens */
%token SHIFTL SHIFTR

/* registers */
%token R_A R_C R_DP R_X1 R_X2 R_USP R_SSP R_LRB R_PSWH R_PSWL
%token R_er0 R_er1 R_er2 R_er3
%token R_r0 R_r1 R_r2 R_r3 R_r4 R_r5 R_r6 R_r7

/* instructions */
