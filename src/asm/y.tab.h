/* A Bison parser, made from asm662.y, by GNU bison 1.75.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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

#ifndef BISON_Y_TAB_H
# define BISON_Y_TAB_H

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
     NL = 262,
     ORG = 263,
     DB = 264,
     DW = 265,
     EQU = 266,
     ROMSIZE = 267,
     PRELOAD = 268,
     SYMBOL = 269,
     OFFSET = 270,
     DOT0 = 271,
     DOT1 = 272,
     DOT2 = 273,
     DOT3 = 274,
     DOT4 = 275,
     DOT5 = 276,
     DOT6 = 277,
     DOT7 = 278,
     R_A = 279,
     R_C = 280,
     R_DP = 281,
     R_X1 = 282,
     R_X2 = 283,
     R_USP = 284,
     R_SSP = 285,
     R_LRB = 286,
     R_PSWH = 287,
     R_PSWL = 288,
     R_er0 = 289,
     R_er1 = 290,
     R_er2 = 291,
     R_er3 = 292,
     R_r0 = 293,
     R_r1 = 294,
     R_r2 = 295,
     R_r3 = 296,
     R_r4 = 297,
     R_r5 = 298,
     R_r6 = 299,
     R_r7 = 300,
     ADC = 301,
     ADCB = 302,
     ADD = 303,
     ADDB = 304,
     AND = 305,
     ANDB = 306,
     BRK = 307,
     CAL = 308,
     CLR = 309,
     CLRB = 310,
     CMP = 311,
     CMPB = 312,
     CMPC = 313,
     CMPCB = 314,
     DAA = 315,
     DAS = 316,
     DEC = 317,
     DECB = 318,
     DIV = 319,
     DIVB = 320,
     EXTND = 321,
     INC = 322,
     INCB = 323,
     J = 324,
     JBR = 325,
     JBS = 326,
     JEQ = 327,
     JGE = 328,
     JGT = 329,
     JLE = 330,
     JLT = 331,
     JNE = 332,
     JRNZ = 333,
     L = 334,
     LB = 335,
     LC = 336,
     LCB = 337,
     MB = 338,
     MBR = 339,
     MOV = 340,
     MOVB = 341,
     MUL = 342,
     MULB = 343,
     NOP = 344,
     OR = 345,
     ORB = 346,
     POPS = 347,
     PUSHS = 348,
     RB = 349,
     RBR = 350,
     RC = 351,
     ROL = 352,
     ROLB = 353,
     ROR = 354,
     RORB = 355,
     RT = 356,
     RTI = 357,
     SB = 358,
     SBC = 359,
     SBCB = 360,
     SBR = 361,
     SC = 362,
     SCAL = 363,
     SJ = 364,
     SLL = 365,
     SLLB = 366,
     SRA = 367,
     SRAB = 368,
     SRL = 369,
     SRLB = 370,
     ST = 371,
     STB = 372,
     SUB = 373,
     SUBB = 374,
     SWAP = 375,
     SWAPB = 376,
     TRB = 377,
     VCAL = 378,
     XCHG = 379,
     XCHGB = 380,
     XNBL = 381,
     XOR = 382,
     XORB = 383
   };
#endif
#define SHIFTR 258
#define SHIFTL 259
#define UMINUS 260
#define NUMBER 261
#define NL 262
#define ORG 263
#define DB 264
#define DW 265
#define EQU 266
#define ROMSIZE 267
#define PRELOAD 268
#define SYMBOL 269
#define OFFSET 270
#define DOT0 271
#define DOT1 272
#define DOT2 273
#define DOT3 274
#define DOT4 275
#define DOT5 276
#define DOT6 277
#define DOT7 278
#define R_A 279
#define R_C 280
#define R_DP 281
#define R_X1 282
#define R_X2 283
#define R_USP 284
#define R_SSP 285
#define R_LRB 286
#define R_PSWH 287
#define R_PSWL 288
#define R_er0 289
#define R_er1 290
#define R_er2 291
#define R_er3 292
#define R_r0 293
#define R_r1 294
#define R_r2 295
#define R_r3 296
#define R_r4 297
#define R_r5 298
#define R_r6 299
#define R_r7 300
#define ADC 301
#define ADCB 302
#define ADD 303
#define ADDB 304
#define AND 305
#define ANDB 306
#define BRK 307
#define CAL 308
#define CLR 309
#define CLRB 310
#define CMP 311
#define CMPB 312
#define CMPC 313
#define CMPCB 314
#define DAA 315
#define DAS 316
#define DEC 317
#define DECB 318
#define DIV 319
#define DIVB 320
#define EXTND 321
#define INC 322
#define INCB 323
#define J 324
#define JBR 325
#define JBS 326
#define JEQ 327
#define JGE 328
#define JGT 329
#define JLE 330
#define JLT 331
#define JNE 332
#define JRNZ 333
#define L 334
#define LB 335
#define LC 336
#define LCB 337
#define MB 338
#define MBR 339
#define MOV 340
#define MOVB 341
#define MUL 342
#define MULB 343
#define NOP 344
#define OR 345
#define ORB 346
#define POPS 347
#define PUSHS 348
#define RB 349
#define RBR 350
#define RC 351
#define ROL 352
#define ROLB 353
#define ROR 354
#define RORB 355
#define RT 356
#define RTI 357
#define SB 358
#define SBC 359
#define SBCB 360
#define SBR 361
#define SC 362
#define SCAL 363
#define SJ 364
#define SLL 365
#define SLLB 366
#define SRA 367
#define SRAB 368
#define SRL 369
#define SRLB 370
#define ST 371
#define STB 372
#define SUB 373
#define SUBB 374
#define SWAP 375
#define SWAPB 376
#define TRB 377
#define VCAL 378
#define XCHG 379
#define XCHGB 380
#define XNBL 381
#define XOR 382
#define XORB 383




#ifndef YYSTYPE
#line 31 "asm662.y"
typedef union {
	int value;
	struct symbol *sym;
} yystype;
/* Line 1281 of /usr/local/share/bison/yacc.c.  */
#line 301 "y.tab.h"
# define YYSTYPE yystype
#endif

extern YYSTYPE yylval;


#endif /* not BISON_Y_TAB_H */

