/* A Bison parser, made by GNU Bison 1.875b.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SHIFTR = 258,
     SHIFTL = 259,
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
     RB = 350,
     RBR = 351,
     RC = 352,
     ROL = 353,
     ROLB = 354,
     ROR = 355,
     RORB = 356,
     RT = 357,
     RTI = 358,
     SB = 359,
     SBC = 360,
     SBCB = 361,
     SBR = 362,
     SC = 363,
     SCAL = 364,
     SJ = 365,
     SLL = 366,
     SLLB = 367,
     SRA = 368,
     SRAB = 369,
     SRL = 370,
     SRLB = 371,
     ST = 372,
     STB = 373,
     SUB = 374,
     SUBB = 375,
     SWAP = 376,
     SWAPB = 377,
     TRB = 378,
     VCAL = 379,
     XCHG = 380,
     XCHGB = 381,
     XNBL = 382,
     XOR = 383,
     XORB = 384
   };
#endif
#define SHIFTR 258
#define SHIFTL 259
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
#define RB 350
#define RBR 351
#define RC 352
#define ROL 353
#define ROLB 354
#define ROR 355
#define RORB 356
#define RT 357
#define RTI 358
#define SB 359
#define SBC 360
#define SBCB 361
#define SBR 362
#define SC 363
#define SCAL 364
#define SJ 365
#define SLL 366
#define SLLB 367
#define SRA 368
#define SRAB 369
#define SRL 370
#define SRLB 371
#define ST 372
#define STB 373
#define SUB 374
#define SUBB 375
#define SWAP 376
#define SWAPB 377
#define TRB 378
#define VCAL 379
#define XCHG 380
#define XCHGB 381
#define XNBL 382
#define XOR 383
#define XORB 384




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 31 "asm662.y"
typedef union YYSTYPE {
	int value;
	struct symbol *sym;
	char *string;
} YYSTYPE;
/* Line 1252 of yacc.c.  */
#line 301 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



