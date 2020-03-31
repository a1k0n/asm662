/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SHIFTL = 258,
    SHIFTR = 259,
    UMINUS = 260,
    NUMBER = 261,
    SYMBOL = 262,
    STRING = 263,
    NL = 264,
    ORG = 265,
    DB = 266,
    DW = 267,
    EQU = 268,
    ROMSIZE = 269,
    PRELOAD = 270,
    OFFSET = 271,
    DOT0 = 272,
    DOT1 = 273,
    DOT2 = 274,
    DOT3 = 275,
    DOT4 = 276,
    DOT5 = 277,
    DOT6 = 278,
    DOT7 = 279,
    R_A = 280,
    R_C = 281,
    R_DP = 282,
    R_X1 = 283,
    R_X2 = 284,
    R_USP = 285,
    R_SSP = 286,
    R_LRB = 287,
    R_PSWH = 288,
    R_PSWL = 289,
    R_er0 = 290,
    R_er1 = 291,
    R_er2 = 292,
    R_er3 = 293,
    R_r0 = 294,
    R_r1 = 295,
    R_r2 = 296,
    R_r3 = 297,
    R_r4 = 298,
    R_r5 = 299,
    R_r6 = 300,
    R_r7 = 301,
    ADC = 302,
    ADCB = 303,
    ADD = 304,
    ADDB = 305,
    AND = 306,
    ANDB = 307,
    BRK = 308,
    CAL = 309,
    CLR = 310,
    CLRB = 311,
    CMP = 312,
    CMPB = 313,
    CMPC = 314,
    CMPCB = 315,
    DAA = 316,
    DAS = 317,
    DEC = 318,
    DECB = 319,
    DIV = 320,
    DIVB = 321,
    EXTND = 322,
    INC = 323,
    INCB = 324,
    J = 325,
    JBR = 326,
    JBS = 327,
    JEQ = 328,
    JGE = 329,
    JGT = 330,
    JLE = 331,
    JLT = 332,
    JNE = 333,
    JRNZ = 334,
    L = 335,
    LB = 336,
    LC = 337,
    LCB = 338,
    MB = 339,
    MBR = 340,
    MOV = 341,
    MOVB = 342,
    MUL = 343,
    MULB = 344,
    NOP = 345,
    OR = 346,
    ORB = 347,
    POPS = 348,
    PUSHS = 349,
    PUSHU = 350,
    RB = 351,
    RBR = 352,
    RC = 353,
    ROL = 354,
    ROLB = 355,
    ROR = 356,
    RORB = 357,
    RT = 358,
    RTI = 359,
    SB = 360,
    SBC = 361,
    SBCB = 362,
    SBR = 363,
    SC = 364,
    SCAL = 365,
    SJ = 366,
    SLL = 367,
    SLLB = 368,
    SMOVI = 369,
    SRA = 370,
    SRAB = 371,
    SRL = 372,
    SRLB = 373,
    ST = 374,
    STB = 375,
    SUB = 376,
    SUBB = 377,
    SWAP = 378,
    SWAPB = 379,
    TBR = 380,
    VCAL = 381,
    XCHG = 382,
    XCHGB = 383,
    XNBL = 384,
    XOR = 385,
    XORB = 386
  };
#endif
/* Tokens.  */
#define SHIFTL 258
#define SHIFTR 259
#define UMINUS 260
#define NUMBER 261
#define SYMBOL 262
#define STRING 263
#define NL 264
#define ORG 265
#define DB 266
#define DW 267
#define EQU 268
#define ROMSIZE 269
#define PRELOAD 270
#define OFFSET 271
#define DOT0 272
#define DOT1 273
#define DOT2 274
#define DOT3 275
#define DOT4 276
#define DOT5 277
#define DOT6 278
#define DOT7 279
#define R_A 280
#define R_C 281
#define R_DP 282
#define R_X1 283
#define R_X2 284
#define R_USP 285
#define R_SSP 286
#define R_LRB 287
#define R_PSWH 288
#define R_PSWL 289
#define R_er0 290
#define R_er1 291
#define R_er2 292
#define R_er3 293
#define R_r0 294
#define R_r1 295
#define R_r2 296
#define R_r3 297
#define R_r4 298
#define R_r5 299
#define R_r6 300
#define R_r7 301
#define ADC 302
#define ADCB 303
#define ADD 304
#define ADDB 305
#define AND 306
#define ANDB 307
#define BRK 308
#define CAL 309
#define CLR 310
#define CLRB 311
#define CMP 312
#define CMPB 313
#define CMPC 314
#define CMPCB 315
#define DAA 316
#define DAS 317
#define DEC 318
#define DECB 319
#define DIV 320
#define DIVB 321
#define EXTND 322
#define INC 323
#define INCB 324
#define J 325
#define JBR 326
#define JBS 327
#define JEQ 328
#define JGE 329
#define JGT 330
#define JLE 331
#define JLT 332
#define JNE 333
#define JRNZ 334
#define L 335
#define LB 336
#define LC 337
#define LCB 338
#define MB 339
#define MBR 340
#define MOV 341
#define MOVB 342
#define MUL 343
#define MULB 344
#define NOP 345
#define OR 346
#define ORB 347
#define POPS 348
#define PUSHS 349
#define PUSHU 350
#define RB 351
#define RBR 352
#define RC 353
#define ROL 354
#define ROLB 355
#define ROR 356
#define RORB 357
#define RT 358
#define RTI 359
#define SB 360
#define SBC 361
#define SBCB 362
#define SBR 363
#define SC 364
#define SCAL 365
#define SJ 366
#define SLL 367
#define SLLB 368
#define SMOVI 369
#define SRA 370
#define SRAB 371
#define SRL 372
#define SRLB 373
#define ST 374
#define STB 375
#define SUB 376
#define SUBB 377
#define SWAP 378
#define SWAPB 379
#define TBR 380
#define VCAL 381
#define XCHG 382
#define XCHGB 383
#define XNBL 384
#define XOR 385
#define XORB 386

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "asm662.y" /* yacc.c:1913  */

	int value;
	struct symbol *sym;
	char *string;

#line 322 "y.tab.h" /* yacc.c:1913  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
