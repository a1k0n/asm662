/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "asm662.y" /* yacc.c:339  */

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


#line 88 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 31 "asm662.y" /* yacc.c:355  */

	int value;
	struct symbol *sym;
	char *string;

#line 396 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 413 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  101
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   17571

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  2650
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  7753

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   386

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   145,   143,    12,     5,     2,
     141,   142,    10,     9,   144,     8,     2,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   140,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   146,     2,   147,     7,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     6,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   149,   149,   153,   157,   161,   164,   165,   166,   169,
     170,   171,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   191,   192,   203,
     204,   208,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,   587,   588,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   683,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,   701,   702,   703,   704,   705,   706,   707,   708,
     709,   710,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
     779,   780,   781,   782,   783,   784,   785,   786,   787,   788,
     789,   790,   791,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   803,   804,   805,   806,   807,   808,
     809,   810,   811,   812,   813,   814,   815,   816,   817,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     829,   830,   831,   832,   833,   834,   835,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,   850,   851,   852,   853,   854,   855,   856,   857,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   880,   881,   882,   883,   884,   885,   886,   887,   888,
     889,   890,   891,   892,   893,   894,   895,   896,   897,   898,
     899,   900,   901,   902,   903,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   932,   933,   934,   935,   936,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,
    1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,
    1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,  1118,
    1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1128,
    1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,  1137,  1138,
    1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
    1159,  1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1183,  1184,  1185,  1186,  1187,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,
    1209,  1210,  1211,  1212,  1213,  1214,  1215,  1216,  1217,  1218,
    1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  1227,  1228,
    1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,
    1239,  1240,  1241,  1242,  1243,  1244,  1245,  1246,  1247,  1248,
    1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,
    1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,
    1279,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,  1288,
    1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,
    1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,
    1319,  1320,  1321,  1322,  1323,  1324,  1325,  1326,  1327,  1328,
    1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,
    1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,
    1359,  1360,  1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,
    1369,  1370,  1371,  1372,  1373,  1374,  1375,  1376,  1377,  1378,
    1379,  1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,
    1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1400,  1401,  1402,  1403,  1404,  1405,  1406,  1407,  1408,
    1409,  1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,
    1419,  1420,  1421,  1422,  1423,  1424,  1425,  1426,  1427,  1428,
    1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,  1438,
    1439,  1440,  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,
    1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,  1458,
    1459,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,  1468,
    1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,
    1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,  1488,
    1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,  1498,
    1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,  1508,
    1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,
    1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,
    1529,  1530,  1531,  1532,  1533,  1534,  1535,  1536,  1537,  1538,
    1539,  1540,  1541,  1542,  1543,  1544,  1545,  1546,  1547,  1548,
    1549,  1550,  1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,
    1559,  1560,  1561,  1562,  1563,  1564,  1565,  1566,  1567,  1568,
    1569,  1570,  1571,  1572,  1573,  1574,  1575,  1576,  1577,  1578,
    1579,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,  1588,
    1589,  1590,  1591,  1592,  1593,  1594,  1595,  1596,  1597,  1598,
    1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1607,  1608,
    1609,  1610,  1611,  1612,  1613,  1614,  1615,  1616,  1617,  1618,
    1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1628,
    1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,  1637,  1638,
    1639,  1640,  1641,  1642,  1643,  1644,  1645,  1646,  1647,  1648,
    1649,  1650,  1651,  1652,  1653,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,  1661,  1662,  1663,  1664,  1665,  1666,  1667,  1668,
    1669,  1670,  1671,  1672,  1673,  1674,  1675,  1676,  1677,  1678,
    1679,  1680,  1681,  1682,  1683,  1684,  1685,  1686,  1687,  1688,
    1689,  1690,  1691,  1692,  1693,  1694,  1695,  1696,  1697,  1698,
    1699,  1700,  1701,  1702,  1703,  1704,  1705,  1706,  1707,  1708,
    1709,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,
    1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,
    1729,  1730,  1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,
    1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,
    1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,  1757,  1758,
    1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,
    1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,
    1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,
    1789,  1790,  1791,  1792,  1793,  1794,  1795,  1796,  1797,  1798,
    1799,  1800,  1801,  1802,  1803,  1804,  1805,  1806,  1807,  1808,
    1809,  1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,  1818,
    1819,  1820,  1821,  1822,  1823,  1824,  1825,  1826,  1827,  1828,
    1829,  1830,  1831,  1832,  1833,  1834,  1835,  1836,  1837,  1838,
    1839,  1840,  1841,  1842,  1843,  1844,  1845,  1846,  1847,  1848,
    1849,  1850,  1851,  1852,  1853,  1854,  1855,  1856,  1857,  1858,
    1859,  1860,  1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,
    1869,  1870,  1871,  1872,  1873,  1874,  1875,  1876,  1877,  1878,
    1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,  1887,  1888,
    1889,  1890,  1891,  1892,  1893,  1894,  1895,  1896,  1897,  1898,
    1899,  1900,  1901,  1902,  1903,  1904,  1905,  1906,  1907,  1908,
    1909,  1910,  1911,  1912,  1913,  1914,  1915,  1916,  1917,  1918,
    1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,  1927,  1928,
    1929,  1930,  1931,  1932,  1933,  1934,  1935,  1936,  1937,  1938,
    1939,  1940,  1941,  1942,  1943,  1944,  1945,  1946,  1947,  1948,
    1949,  1950,  1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,
    1959,  1960,  1961,  1962,  1963,  1964,  1965,  1966,  1967,  1968,
    1969,  1970,  1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,
    1979,  1980,  1981,  1982,  1983,  1984,  1985,  1986,  1987,  1988,
    1989,  1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,
    1999,  2000,  2001,  2002,  2003,  2004,  2005,  2006,  2007,  2008,
    2009,  2010,  2011,  2012,  2013,  2014,  2015,  2016,  2017,  2018,
    2019,  2020,  2021,  2022,  2023,  2024,  2025,  2026,  2027,  2028,
    2029,  2030,  2031,  2032,  2033,  2034,  2035,  2036,  2037,  2038,
    2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,  2047,  2048,
    2049,  2050,  2051,  2052,  2053,  2054,  2055,  2056,  2057,  2058,
    2059,  2060,  2061,  2062,  2063,  2064,  2065,  2066,  2067,  2068,
    2069,  2070,  2071,  2072,  2073,  2074,  2075,  2076,  2077,  2078,
    2079,  2080,  2081,  2082,  2083,  2084,  2085,  2086,  2087,  2088,
    2089,  2090,  2091,  2092,  2093,  2094,  2095,  2096,  2097,  2098,
    2099,  2100,  2101,  2102,  2103,  2104,  2105,  2106,  2107,  2108,
    2109,  2110,  2111,  2112,  2113,  2114,  2115,  2116,  2117,  2118,
    2119,  2120,  2121,  2122,  2123,  2124,  2125,  2126,  2127,  2128,
    2129,  2130,  2131,  2132,  2133,  2134,  2135,  2136,  2137,  2138,
    2139,  2140,  2141,  2142,  2143,  2144,  2145,  2146,  2147,  2148,
    2149,  2150,  2151,  2152,  2153,  2154,  2155,  2156,  2157,  2158,
    2159,  2160,  2161,  2162,  2163,  2164,  2165,  2166,  2167,  2168,
    2169,  2170,  2171,  2172,  2173,  2174,  2175,  2176,  2177,  2178,
    2179,  2180,  2181,  2182,  2183,  2184,  2185,  2186,  2187,  2188,
    2189,  2190,  2191,  2192,  2193,  2194,  2195,  2196,  2197,  2198,
    2199,  2200,  2201,  2202,  2203,  2204,  2205,  2206,  2207,  2208,
    2209,  2210,  2211,  2212,  2213,  2214,  2215,  2216,  2217,  2218,
    2219,  2220,  2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,
    2229,  2230,  2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,
    2239,  2240,  2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,
    2249,  2250,  2251,  2252,  2253,  2254,  2255,  2256,  2257,  2258,
    2259,  2260,  2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,
    2269,  2270,  2271,  2272,  2273,  2274,  2275,  2276,  2277,  2278,
    2279,  2280,  2281,  2282,  2283,  2284,  2285,  2286,  2287,  2288,
    2289,  2290,  2291,  2292,  2293,  2294,  2295,  2296,  2297,  2298,
    2299,  2300,  2301,  2302,  2303,  2304,  2305,  2306,  2307,  2308,
    2309,  2310,  2311,  2312,  2313,  2314,  2315,  2316,  2317,  2318,
    2319,  2320,  2321,  2322,  2323,  2324,  2325,  2326,  2327,  2328,
    2329,  2330,  2331,  2332,  2333,  2334,  2335,  2336,  2337,  2338,
    2339,  2340,  2341,  2342,  2343,  2344,  2345,  2346,  2347,  2348,
    2349,  2350,  2351,  2352,  2353,  2354,  2355,  2356,  2357,  2358,
    2359,  2360,  2361,  2362,  2363,  2364,  2365,  2366,  2367,  2368,
    2369,  2370,  2371,  2372,  2373,  2374,  2375,  2376,  2377,  2378,
    2379,  2380,  2381,  2382,  2383,  2384,  2385,  2386,  2387,  2388,
    2389,  2390,  2391,  2392,  2393,  2394,  2395,  2396,  2397,  2398,
    2399,  2400,  2401,  2402,  2403,  2404,  2405,  2406,  2407,  2408,
    2409,  2410,  2411,  2412,  2413,  2414,  2415,  2416,  2417,  2418,
    2419,  2420,  2421,  2422,  2423,  2424,  2425,  2426,  2427,  2428,
    2429,  2430,  2431,  2432,  2433,  2434,  2435,  2436,  2437,  2438,
    2439,  2440,  2441,  2442,  2443,  2444,  2445,  2446,  2447,  2448,
    2449,  2450,  2451,  2452,  2453,  2454,  2455,  2456,  2457,  2458,
    2459,  2460,  2461,  2462,  2463,  2464,  2465,  2466,  2467,  2468,
    2469,  2470,  2471,  2472,  2473,  2474,  2475,  2476,  2477,  2478,
    2479,  2480,  2481,  2482,  2483,  2484,  2485,  2486,  2487,  2488,
    2489,  2490,  2491,  2492,  2493,  2494,  2495,  2496,  2497,  2498,
    2499,  2500,  2501,  2502,  2503,  2504,  2505,  2506,  2507,  2508,
    2509,  2510,  2511,  2512,  2513,  2514,  2515,  2516,  2517,  2518,
    2519,  2520,  2521,  2522,  2523,  2524,  2525,  2526,  2527,  2528,
    2529,  2530,  2531,  2532,  2533,  2534,  2535,  2536,  2537,  2538,
    2539,  2540,  2541,  2542,  2543,  2544,  2545,  2546,  2547,  2548,
    2549,  2550,  2551,  2552,  2553,  2554,  2555,  2556,  2557,  2558,
    2559,  2560,  2561,  2562,  2563,  2564,  2565,  2566,  2567,  2568,
    2569,  2570,  2571,  2572,  2573,  2574,  2575,  2576,  2577,  2578,
    2579,  2580,  2581,  2582,  2583,  2584,  2585,  2586,  2587,  2588,
    2589,  2590,  2591,  2592,  2593,  2594,  2595,  2596,  2597,  2598,
    2599,  2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,
    2609,  2610,  2611,  2612,  2613,  2614,  2615,  2616,  2617,  2618,
    2619,  2620,  2621,  2622,  2623,  2624,  2625,  2626,  2627,  2628,
    2629,  2630,  2631,  2632,  2633,  2634,  2635,  2636,  2637,  2638,
    2639,  2640,  2641,  2642,  2643,  2644,  2645,  2646,  2647,  2648,
    2649,  2650,  2651,  2652,  2653,  2654,  2655,  2656,  2657,  2658,
    2659,  2660,  2661,  2662,  2663,  2664,  2665,  2666,  2667,  2668,
    2669,  2670,  2671,  2672,  2673,  2674,  2675,  2676,  2677,  2678,
    2679,  2680,  2681,  2682,  2683,  2684,  2685,  2686,  2687,  2688,
    2689,  2690,  2691,  2692,  2693,  2694,  2695,  2696,  2697,  2698,
    2699,  2700,  2701,  2702,  2703,  2704,  2705,  2706,  2707,  2708,
    2709,  2710,  2711,  2712,  2713,  2714,  2715,  2716,  2717,  2718,
    2719,  2720,  2721,  2722,  2723,  2724,  2725,  2726,  2727,  2728,
    2729,  2730,  2731,  2732,  2733,  2734,  2735,  2736,  2737,  2738,
    2739,  2740,  2741,  2742,  2743,  2744,  2745,  2746,  2747,  2748,
    2749,  2750,  2751,  2752,  2753,  2754,  2755,  2756,  2757,  2758,
    2759,  2760,  2761,  2762,  2763,  2764,  2765,  2766,  2767,  2768,
    2769,  2770,  2771,  2772,  2773,  2774,  2775,  2776,  2777,  2778,
    2779,  2780,  2781,  2782,  2783,  2784,  2785,  2786,  2787,  2788,
    2789,  2790,  2791,  2792,  2793,  2794,  2795,  2796,  2797,  2798,
    2799,  2800,  2801,  2802,  2803,  2804,  2805,  2806,  2807,  2808,
    2809,  2810,  2811,  2812,  2813,  2814,  2815,  2816,  2817,  2818,
    2819,  2820,  2821,  2822,  2823,  2824,  2825,  2826,  2827,  2828,
    2829
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SHIFTL", "SHIFTR", "'&'", "'|'", "'^'",
  "'-'", "'+'", "'*'", "'/'", "'%'", "UMINUS", "NUMBER", "SYMBOL",
  "STRING", "NL", "ORG", "DB", "DW", "EQU", "ROMSIZE", "PRELOAD", "OFFSET",
  "DOT0", "DOT1", "DOT2", "DOT3", "DOT4", "DOT5", "DOT6", "DOT7", "R_A",
  "R_C", "R_DP", "R_X1", "R_X2", "R_USP", "R_SSP", "R_LRB", "R_PSWH",
  "R_PSWL", "R_er0", "R_er1", "R_er2", "R_er3", "R_r0", "R_r1", "R_r2",
  "R_r3", "R_r4", "R_r5", "R_r6", "R_r7", "ADC", "ADCB", "ADD", "ADDB",
  "AND", "ANDB", "BRK", "CAL", "CLR", "CLRB", "CMP", "CMPB", "CMPC",
  "CMPCB", "DAA", "DAS", "DEC", "DECB", "DIV", "DIVB", "EXTND", "INC",
  "INCB", "J", "JBR", "JBS", "JEQ", "JGE", "JGT", "JLE", "JLT", "JNE",
  "JRNZ", "L", "LB", "LC", "LCB", "MB", "MBR", "MOV", "MOVB", "MUL",
  "MULB", "NOP", "OR", "ORB", "POPS", "PUSHS", "PUSHU", "RB", "RBR", "RC",
  "ROL", "ROLB", "ROR", "RORB", "RT", "RTI", "SB", "SBC", "SBCB", "SBR",
  "SC", "SCAL", "SJ", "SLL", "SLLB", "SMOVI", "SRA", "SRAB", "SRL", "SRLB",
  "ST", "STB", "SUB", "SUBB", "SWAP", "SWAPB", "TBR", "VCAL", "XCHG",
  "XCHGB", "XNBL", "XOR", "XORB", "':'", "'('", "')'", "'$'", "','", "'#'",
  "'['", "']'", "$accept", "label", "equate", "origin", "preload",
  "directive", "statement", "expr", "exprlist", "statements", "ROOT",
  "instruction", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    38,   124,    94,    45,    43,
      42,    47,    37,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
      58,    40,    41,    36,    44,    35,    91,    93
};
# endif

#define YYPACT_NINF -28

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-28)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,  7406,    12,    -8,   -28,     0,   300,   300,     4,  4416,
    4470,  4528,  4536,  4585,  4642,    -2,   268,  4673,  4706,  4728,
    4776,     8,     9,     7,    34,  6267,  6284,    39,    55,    73,
    6333,  6341,   633,    33,    57,   300,   300,   300,   300,   300,
     300,   -10,    61,    62,    65,    70,  4831,  4852,  3435,  4899,
      80,    87,    99,  4968,  5002,     3,    40,    84,  6570,  6589,
     113,  5024,  5084,  5136,  5144,   114,   169,  6620,  5200,  5247,
    6639,   170,   300,   300,  5294,  5350,   174,  5410,  5456,  5503,
    5563,   199,   200,  5615,  5623,   231,   262,  6695,   300,   247,
     253,   257,  5654,  5687,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   300,   -28,   -28,   300,   -28,   -28,   300,   -28,
    5923,     1,     2,   -28,   300,   149,   177,   191,   205,   220,
     233,   234,   236,   237,   239,   264,   281,   426,   300,   269,
     282,   283,   296,   310,   311,   316,   317,   322,   324,   325,
     299,   441,   300,   339,   341,   368,   396,   402,   418,   422,
     425,   440,   444,   455,   313,   469,   300,   457,   458,   468,
     482,   501,   502,   506,   509,   510,   512,   525,   359,   483,
     300,   529,   531,   532,   545,   569,   590,   591,   593,   612,
     618,   621,   360,   511,   300,   631,   634,   636,   638,   649,
     651,   661,   690,   692,   704,   725,   377,   526,   -28,  6757,
    4635,   300,   301,   522,   743,   760,   783,   863,   865,   866,
     869,   880,   881,   882,   544,   300,   901,   904,   945,   967,
     979,   984,   999,  1011,  1012,  1014,  1026,  1009,   586,   300,
     902,   922,   925,   927,   935,   942,   943,   947,   990,  1033,
    1065,  1054,   613,   300,  1080,  1100,  1105,  1120,  1132,  1134,
    1164,  1166,  1211,  1240,  1251,  1070,   627,  1279,  1290,   -28,
     -28,   300,  1161,  1175,  1222,  1336,  1418,  1420,  1422,  1423,
    1435,  1436,  1433,   735,   300,  1438,  1453,  1459,  1463,  1465,
    1467,  1468,  1509,  1516,  1536,  1442,   780,   -28,   -28,   -28,
     300,  1538,  1539,  1546,  1548,  1559,  1564,  1565,  1571,  1582,
    1584,  1502,   884,   300,  1587,  1589,  1609,  1611,  1614,  1626,
    1628,  1630,  1645,  1647,  1551,   899,  6775,  5557,   300,   300,
    6041,  6057,  6247,  6411,  6553,  6717,  1523,  1528,  1531,  1534,
    1537,   300,  1545,   579,   801,  1361,  2293,  5757,  5790,  5870,
    6149,  6406,  6477,  1660,   656,   300,  1553,  1557,  1560,  1562,
    1570,  1574,  1597,  1600,  1605,  1612,  1617,  1668,   856,   300,
    1623,  1634,  1640,  1648,  1656,  1658,  1676,  1677,  1688,  1694,
    1700,  6808,  1672,   924,   300,  1706,  1708,  1710,  1729,  1737,
    1745,  1748,  1751,  1754,  1757,  1759,  1723,   934,   -28,   -28,
     -28,   300,  1772,  1779,  1782,  1785,  1788,  1791,  1794,  1797,
    1800,  1809,  1811,  1734,   944,   300,  1813,  1828,  1848,  1853,
    1856,  1861,  1870,  1879,  1887,  1893,  1894,  1874,   960,  1755,
    1896,  2018,  2035,  2046,   300,  6495,  6513,  6669,  6975,  7143,
    7205,  7256,  7354,  7571, 17251,  2034,   689,   300,  2055,  2058,
    2061,  2066,  2068,  2070,  2079,  2082,  2084,  2086,  2095,  1000,
     -28,   300,  2114,  2127,  2129,  2135,  2144,  2157,  2159,  2160,
    2162,  2164,  2165,  2112,  1015,   300,  2180,  2194,  2210,  2225,
    2231,  2257,  2259,  2263,  2265,  2267,  2284,  2120,  1030,   300,
    2296,  2299,  2309,  2312,  2324,  2339,  2354,  2374,  2389,  2391,
    2392,  2122,  1045,   300,  2394,  2395,  2399,  2400,  2402,  2415,
    2444,  2452,  2453,  2469,  2470,  2124,  1148,   -28,   -28,   300,
   17259, 17267, 17275, 17283, 17291, 17299, 17307, 17315, 17323, 17331,
    2359,   812,   300,  1937,  2253,  2254,  2303,  2328,  2345,  2365,
    2376,  2379,  2384,  2396,  2478,  1104,   300,  2397,  2416,  2418,
    2427,  2429,  2433,  2435,  2436,  2456,  2474,  2476,  2524,  1133,
     300,  2504,  2580,  2586,  2613,  2616,  2628,  2651,  2653,  2654,
    2661,  2550,  1163,   -28,  6747,  6868,   300,  2662,  2664,  2673,
    2679,  2688,  2694,  2701,  2716,  2717,  2722,  2725,  2556,  1178,
     300,  2746,  2748,  2750,  2759,  2761,  2787,  2789,  2790,  2802,
    2804,  2805,  2611,  1193,   -28,   300,  2820,  2835,  2847,  2849,
    2850,  2863,  2865,  2866,  2881,  2883,  2897,  2884,  1208,   300,
    2899,  2900,  2901,  2903,  2904,  2906,  2907,  2918,  2919,  2921,
    2933,  2916,  1223,   300,  2936,  2948,  2949,  2961,  2962,  2963,
    2964,  2976,  2977,  2978,  2979,  2975,  1248,   300,  2994,  3002,
    3005,  3014,  3017,  3020,  3031,  3034,  3035,  3036,  3037,  3007,
    1263,  2607,  2610,   300,  2896,  2913,  2915,  2927,  2930,  2942,
    2950,  2954,  2991,  2995,  2997,  3027,  1278,   300,  2998,  3010,
    3032,  3041,  3047,  3050,  3053,  3055,  3059,  3060,  3061,  3028,
    1292,   -28,   -28,   300,  3043,  3048,  3075,  3103,  3104,  3105,
    3106,  3121,  3189,  3203,  3042,  1308,  7427,  3093,  3099,  3102,
     300,  3109,  3111,  3112,  3113,  3114,  3115,  3117,  3123,  3128,
    3130,  3131,  3214,  1323,   300,  3134,  3136,  3137,  3138,  3139,
    3140,  3142,  3143,  3144,  3146,  3148,  3230,  1337,  5923,   -28,
     570,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   -28,   300,   -28,   498,  5707,    43,    58,   438,   534,
     535,   -27,   616,   619,   734,   739,   504,   770,    -3,  1806,
    2574,   774,   775,   777,  1034,  1048,  1049,  1397,  1503,  1505,
    1507,  1566,  1508,    64,  1858,  5766,  1554,  1578,  1618,  1625,
    1636,    -1,  1659,  1678,  1684,  1696,  1615,  1702,   181,  2601,
    5817,  1714,  1727,  1762,  1765,  1802,  1851,  1854,  1881,  1884,
    1888,  3152,  1891,   209,  2952,  5799,  1984,  1987,  2027,  2033,
    2064,    13,  2065,  2067,  2130,  2134,  3158,  2136,   251,  2965,
    5832,  2138,  2140,  2142,  2362,  2363,  2366,  2369,  2377,  2380,
    2381,  3161,  2438,   275,   300,  3164,  3167,  3170,  3173,  3176,
    3182,  3184,  3190,  3191,  3194,  3258,   103,   -28,  7613,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
    3197,   -28,   421,  7628,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,  3200,   -28,   427,  2980,  5879,
    2441,  2486,  2531,  2532,  2537,  2557,  2568,  2660,  2675,  2724,
    3204,  2736,   461,  2996,  5940,  2992,  3022,  3023,  3025,  3056,
    3149,  3155,  3195,  3198,  3201,  3207,  3236,   488,   663,  1464,
    7643,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,  3213,   -28,   507,  7658,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,  3219,   -28,   527,  7673,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,  3222,
     -28,   666,  7688,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,  3228,   -28,   670,   300,  3231,  3241,  3298,
    3301,  3304,  3306,  3308,  3311,  3315,  3316,  3260,   117,   -28,
    6441,  7019,   -28,   -28,   -28,   -28,   -28,   -28,   300,  5058,
    6932,  1520,  1569,  7387,  6816,  3208,  3243,  3320,  3333,  3338,
    3342,  3349,  3350,  3359,  3360,  3368,  3369,  3376,  3377,  3378,
    3379,  3382,  3389,  3397,  3399,  3401,  3402,  3403,  3406,  3412,
    3413,  3414,  3416,  3418,  3419,  3423,  3424,  3425,  3426,  3427,
    3436,  3438,  3439,  3441,  3455,  3458,  3460,  3461,  3462,  3463,
    3473,  3483,  3488,  3495,  3496,  3497,  3498,  3500,  3508,  3521,
    3522,  3525,  3526,  3527,  3533,  3541,  3546,  3547,  3567,  3579,
    3580,  3581,  3584,  3592,  3600,  3601,  3602,  3603,  3608,  3616,
    3617,  3618,  3619,  3621,  3631,  3336,  3634,  3635,  3638,  3639,
    3647,  3648,  3649,  3651,   673,  3096,  6924,  3262,  3268,  3538,
    3562,  3594,  3625,  3678,  3680,  3686,  3720,  3640,  3763,   712,
    3107,  7080,  3452,  3492,  3576,  3610,  3643,  3660,  3694,  3817,
    3859,  3942,   300,  3655,  3783,  3785,  3787,  3792,  3793,  3794,
    3806,  3809,  3812,  3795,  1353,  3687,    14,   717,  3122,  7098,
    3766,  3975,  4006,  4028,  4081,  4142,  4190,  4221,  4276,  4330,
    3691,    15,   732,  3141,  5971,  3238,  3240,  3244,  3246,  3302,
    3309,  3312,  3324,  3339,  3428,  3695,  3432,   776,  3153,  5988,
    3478,  3481,  3484,  3485,  3486,  3491,  3515,  3516,  3518,  3528,
    3696,  3568,   809,   -28,   -28,   -28,   -28,   -28,  7543,  3827,
    3828,  3829,  3831,  3832,  3841,  3842,  3847,  3851,  3852,  3867,
    3869,  3870,  3873,  3876,  3883,  3884,  3891,  3893,  3914,  3915,
    3917,  3923,  3924,  3929,  3930,  3932,  3937,  3944,  3947,  3950,
    3951,  3954,  3955,  3956,  3959,  3977,  3978,  3979,  3980,  3992,
    3993,  3994,  3995,  3996,  4001,  4002,  4014,  4017,  4018,  4021,
    4027,  4045,  4049,  4050,  4051,  4054,  4055,  4056,  4057,  4075,
    4076,  4084,  4085,  4087,  4091,  4092,  4093,  4094,  4095,  4098,
    4100,  4107,  4108,  4109,  4121,  4123,  4124,  4125,  4126,  3729,
    4127,  4137,  4143,  4145,  4146,  4148,  4150,  4163,   876,  7703,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
    3789,   -28,   887,  7718,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,  3790,   -28,   923,  7733,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
    3886,   -28,   937,  7748,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,  3898,   -28,   940,  7763,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
    4023,   -28,   950,  7553,  4165,  4170,  4180,  4182,  4183,  4184,
    4185,  4186,  4189,  4199,  4200,  4203,  4211,  4216,  4217,  4229,
    4231,  4232,  4233,  4234,  4236,  4238,  4242,  4247,  4248,  4249,
    4250,  4260,  4261,  4262,  4264,  4265,  4272,  4279,  4284,  4297,
    4298,  4299,  4302,  4315,  4317,  4322,  4324,  4331,  4332,  4333,
    4336,  4338,  4340,  4342,  4378,  4386,  4393,  4395,  4406,  4409,
    4412,  4421,  4422,  4433,  4440,  4448,  4449,  4460,  4464,  4471,
    4478,  4480,  4481,  4482,  4483,  4484,  4491,  4493,  4496,  4497,
    4498,  4509,  4510,  4511,  4034,  4512,  4513,  4516,  4517,  4531,
    4537,  4539,  4541,   953,  3205,  6063,  3570,  3677,  3683,  3702,
    3726,  3733,  3740,  3743,  3744,  3761,  4139,  3788,   957,  3390,
    6096,  3800,  3803,  3846,  3848,  3858,  3905,  3906,  3918,  3919,
    3920,  4159,  3941,   961,  7778,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,  4193,   -28,   977,   -28,   -28,
    7793,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,  4320,   -28,  1023,  7808,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,  4362,   -28,  1027,
    7823,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,  4384,   -28,  1038,  7838,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,  4398,   -28,  1047,
    7853,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,  4423,   -28,  1081,  7868,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,  4428,   -28,  1095,
    4164,  7314,  3400,  6127,  3968,  3974,  3982,  4008,  4013,  4016,
    4066,  4067,  4070,  4073,  4429,  4074,  1111,  3410,  6144,  4112,
    4113,  4115,  4131,  4135,  4152,  4153,  4197,  4223,  4228,  4432,
    4269,  1126,  7883,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,  4434,   -28,  1170,   -28,  7119,  7152,  3911,
    3420,  7214,  4270,  4271,  4275,  4287,  4288,  4289,  4313,  4319,
    4323,  4327,  4445,  4337,  1185,  3430,  6175,  4341,  4404,  4450,
    4456,  4472,  4492,  4508,  4514,  4522,  4558,  4457,  4570,  1200,
     -28,  4381,  4381,    77,    77,    77,  1231,  1231,   -28,   -28,
     -28,  5923,  4582,   300,  4563,  4580,  4588,  4590,  4595,  4597,
    4602,  4609,  4610,  4615,   300,  4257,  1368,   300,  4616,   300,
     300,  4617,   300,   300,  4618,   300,   300,  4619,   300,   300,
    4631,   300,  4634,   300,   300,  4638,   300,   300,  4643,   300,
     300,  4645,   300,   300,  4647,   300,  3815,   300,  4651,   300,
    4507,  4525,  4526,  4625,   300,  4661,  4663,  4669,  4681,  4682,
    4683,  4684,  4685,  4687,  4688,   300,  4376,  1393,   300,  4690,
     300,   300,  4705,   300,   300,  4707,   300,   300,  4708,   300,
     300,  4712,   300,   300,  4716,   300,   300,  4717,   300,   300,
    4721,   300,   300,  4723,   300,   300,  4724,   300,  3940,   300,
    4732,   300,  4598,  4603,  4604,  4637,   300,  4745,  4752,  4758,
    4762,  4764,  4784,  4785,  4790,  4793,  4794,   300,  4452,  1408,
     300,  4796,   300,   300,  4803,   300,   300,  4805,   300,   300,
    4815,   300,   300,  4819,   300,  4820,   300,   300,  4821,   300,
     300,  4836,   300,   300,  4837,   300,   300,  4840,   300,  4214,
     300,  4853,   300,  4633,  4646,  4658,  4652,   300,  4858,  4860,
    4870,  4872,  4873,  4874,  4875,  4878,  4879,  4894,   300,  4518,
    1439,   300,  4907,   300,   300,  4908,   300,   300,  4911,   300,
     300,  4912,   300,   300,  4913,   300,   300,  4914,   300,   300,
    4920,   300,   300,  4921,   300,   300,  4922,   300,   300,  4925,
     300,  4458,   300,  4926,   300,  4696,  4701,  4797,  4699,   300,
    4928,  4937,  4939,  4941,  4943,  4944,  4948,  4956,  4964,  4969,
     300,  4757,  1454,   300,  4970,   300,   300,  4971,   300,   300,
    4973,   300,   300,  4979,   300,   300,  4980,   300,  4982,   300,
     300,  4983,   300,   300,  4985,   300,   300,  4998,   300,   300,
    5004,   300,  4691,   300,  5005,   300,  4876,  4877,  4884,  4711,
     300,  5019,  5020,  5029,  5041,  5048,  5054,  5067,  5068,  5069,
    5070,   300,  5006,  1483,   300,  5072,   300,   300,  5088,   300,
     300,  5095,   300,   300,  5098,   300,   300,  5101,   300,   300,
    5104,   300,   300,  5106,   300,   300,  5107,   300,   300,  5110,
     300,   300,  5125,   300,  4834,   300,  5132,   300,  4927,  4953,
    5014,   190,  5161,  5166,  5167,  5170,  5171,  5172,  5173,  5188,
    5189,  5193,  5053,  1209,  5195,   -28,  5201,  5073,  5074,  5075,
     -28,  5202,  5079,  5082,  5105,  4713,   300,  5242,  5248,  5250,
    5253,  5255,  5264,  5266,  5274,  5275,  5276,   300,  5040,  1498,
     300,  5295,   300,   300,  5296,   300,   300,  5305,   300,   300,
    5307,   300,   300,  5308,   300,   300,  5331,   300,   300,  5332,
     300,   300,  5333,   300,   300,  5337,   300,   300,  5338,   300,
    5109,   300,  5352,   300,  5156,  5157,  5213,  4753,   300,  5355,
    5360,  5362,  5367,  5369,  5370,  5372,  5378,  5392,  5398,   300,
    5182,  1513,   300,  5406,   300,   300,  5412,   300,   300,  5413,
     300,   300,  5416,   300,   300,  5419,   300,   300,  5422,   300,
     300,  5424,   300,   300,  5442,   300,   300,  5448,   300,   300,
    5449,   300,  5191,   300,  5455,   300,  5219,  5259,  5315,  7172,
    1540,  7232,  1563,   -28,  5458,  5335,  5336,  5340,   -28,  5459,
    5348,  5353,  5365,   -28,  5467,  5368,  5373,  5377,   -28,  5468,
    5390,  5397,  5403,   204,  5473,  5482,  5485,  5499,  5502,  5508,
    5513,  5518,  5528,  5535,  5407,  1225,  5538,  5414,  5415,  5426,
    5431,  5432,  5436,  5437,  5438,  5439,  5440,  5441,  5444,  5447,
    5450,  5451,  5457,  7898,   300,  5540,  5572,  5575,  5576,  5583,
    5586,  5590,   300,  5573,  1586,   300,  5592,  5601,  5602,  5603,
    5604,  5605,  5607,  5608,   300,  5591,  1613,  7265,  1629,  7306,
    1956,  5483,  5484,  5488,  5492,  5496,  5497,  5498,  5501,   300,
   17339, 17347, 17355, 17363, 17371, 17379, 17387, 17395, 17403, 17411,
    5598,   846,  5609,  5629,  5632,  5633,  5645,  5646,  5647,  5648,
    5649,  5650,  5651,  5652,  5662,  5669,  5671,  5673,  5674,  5676,
    5678,  5679,  5680,  5682,  5683,  5684,  5685,  5689,  5690,  5691,
    5692,  5693,  5696,  5698,  5699,  5714,  5715,  5720,  5721,  5723,
    5725,  5726,  5728,  5729,  5731,  5733,  5734,  5736,  5737,  5738,
    5739,  5741,  5742,  5743,  5744,  5745,  5758,  5759,  5760,  5762,
    5764,  5765,  5774,  5792,  5793,  5795,  5815,  5820,  5821,  5823,
    5826,  5827,  5828,  5829,  5838,  5841,  5842,  5843,  5844,  5854,
    5855,  5856, 17419,  5857,  5858,  5871,  5872,  5874,  5876,  5886,
    5887,  5510,  5541,  5644,  5903,   300,  5807,  5834,  5896,  5921,
    5922,  5924,  5926,  5929,  5930,  5932,  5869,  1971,  5933,  5934,
    5935,  5936,  5939,  5942,  5944,  5948,  5949,  5950,  5813,  5951,
    5822,  5824,  5825,  4361,   300,  5953,  5957,  5959,  5963,  5966,
    5967,  5980,  5981,  5982,  5983,  5969,  2037,   300,  5984,  5996,
    6001,  6002,  6004,  6009,  6010,  6011,  6014,  6015,  6016,   300,
    5970,  2101,   300,  6017,  6026,  6037,  6038,  6039,  6053,  6055,
    6056,  6058,  6059,  6062,   300,  6045,  2116,   300,  6065,  6067,
    6071,  6072,  6073,  6074,  6075,  6076,  6078,  6080,  6088,   300,
    6083,  2131,   300,  6098,  6102,  6104,  6105,  6106,  6107,  6108,
    6109,  6110,  6111,  6113,   300,  6097,  2181,   300,  6119,  6122,
    6123,  6136,  6137,  6138,  6139,  6140,  6143,  6152,  6165,   300,
    6126,  2196,   300,  6167,  6170,  6171,  6183,  6184,  6185,  6186,
    6188,  6190,  6194,  6196,   300,  6179,  2211,   300,  6198,  6201,
    6202,  6203,  6204,  6213,  6214,  6215,  6216,  6217,  6218,   300,
    6205,  2226,   300,  6219,  6221,  6226,  6227,  6228,  6229,  6231,
    6243,  6244,  6245,  6246,   300,  6230,  2246,   300,  6249,  6250,
    6252,  6254,  6257,  6259,  6260,  6261,  6262,  6263,  6266,   300,
    6251,  2261,   300,  6271,  6276,  6277,  6278,  6279,  6280,  6283,
    6292,  6297,  6302,  6305,   300,  6288,  2285,  7913,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,  6154,   -28,
    1255,  6180,  6310,   300,  6181,  6182,  6192,  4394,   300,  6313,
    6323,  6325,  6326,  6327,  6328,  6329,  6334,  6336,  6342,  6315,
    2300,   300,  6343,  6344,  6345,  6346,  6347,  6349,  6350,  6357,
    6358,  6363,  6364,   300,  6351,  2327,   300,  6367,  6368,  6370,
    6379,  6380,  6381,  6382,  6383,  6384,  6385,  6387,   300,  6371,
    2342,   300,  6390,  6392,  6394,  6395,  6407,  6409,  6412,  6422,
    6424,  6426,  6437,   300,  6420,  2357,   300,  6439,  6444,  6447,
    6468,  6469,  6471,  6472,  6473,  6474,  6475,  6480,   300,  6423,
    2372,   300,  6483,  6493,  6498,  6501,  6511,  6516,  6519,  6529,
    6531,  6534,  6537,   300,  6459,  2417,   300,  6549,  6550,  6551,
    6556,  6559,  6562,  6563,  6564,  6565,  6566,  6569,   300,  6561,
    2432,   300,  6571,  6574,  6581,  6582,  6583,  6584,  6585,  6588,
    6590,  6591,  6592,   300,  6575,  2447,   300,  6597,  6598,  6599,
    6608,  6609,  6610,  6612,  6615,  6616,  6628,  6629,   300,  6613,
    2473,   300,  6632,  6633,  6634,  6635,  6638,  6640,  6641,  6642,
    6643,  6647,  6648,   300,  6621,  2526,   300,  6649,  6658,  6659,
    6660,  6661,  6662,  6665,  6666,  6667,  6668,  6685,   300,  6670,
    2541,  6386,  6687,   300,  6211,  6365,  6560,  4763,   300,  6689,
    6691,  6697,  6698,  6700,  6701,  6714,  6716,  6721,  6722,   300,
    6677,  2631,   300,  6723,   300,   300,  6724,   300,   300,  6743,
     300,   300,  6745,   300,   300,  6750,   300,   300,  6751,   300,
     300,  6752,   300,   300,  6753,   300,   300,  6756,   300,   300,
    6758,   300,  6462,   300,  6759,   300,  6627,  6630,  6631,  4765,
     300,  6762,  6767,  6769,  6770,  6771,  6774,  6781,  6787,  6788,
    6789,   300,  6772,  2646,   300,  6791,   300,   300,  6792,   300,
     300,  6800,   300,   300,  6809,   300,   300,  6810,   300,   300,
    6811,   300,   300,  6812,   300,   300,  6817,   300,   300,  6825,
     300,   300,  6832,   300,  6681,   300,  6833,   300,  6686,  6708,
    6709,  6842,  6843,  6844,  6845,  6864,  6865,  6866,  6867,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 17427,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,  6739,  6740,
    6741,   -28,  6872,  6744,  6749,  6754,   -28,  6873,  6755,  6761,
    6764,   -28,  6875,  6773,  6776,  6777,   -28,  6877,  6779,  6782,
    6790,   -28,  6882,  6794,  6795,  6796,  6887,  6888,  6889,  6897,
    6900,  6902,  6905,  6917,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28, 17435,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,  6797,  6798,  6803,  4770,   300,  6918,  6919,
    6935,  6936,  6938,  6941,  6943,  6944,  6946,  6947,   300,  6933,
    2719,   300,  6950,   300,   300,  6952,   300,   300,  6953,   300,
     300,  6970,   300,   300,  6971,   300,   300,  6972,   300,   300,
    6973,   300,   300,  6978,   300,   300,  6981,   300,   300,  6991,
     300,  6848,   300,  6993,   300,  6869,  6871,  6874,  4771,   300,
    6996,  7002,  7003,  7015,  7016,  7017,  7022,  7025,  7035,  7037,
     300,  7001,  2776,   300,  7040,   300,   300,  7043,   300,   300,
    7045,   300,   300,  7046,   300,   300,  7047,   300,   300,  7049,
     300,   300,  7051,   300,   300,  7052,   300,   300,  7054,   300,
     300,  7055,   300,  6930,   300,  7059,   300,  6939,  6942,  6945,
     -28,  7063,  6949,  6951,  6954,   -28,  7066,  6960,  6961,  6962,
     -28,  7073,  6963,  6964,  6967,   -28,  7074,  6974,  6982,  6983,
     -28,  7076,  6984,  6985,  6988,   -28,  7111,  6989,  6990,  6994,
     -28,  7121,  6995,  6997,  7006,   300,  7144,  7160,  7161,  7162,
    7146,  2791,   300,  7165,  7166,  7167,  7168,  7171,  7173,  7174,
    7175,  7154,  2806,  4775,   300,  7178,  7180,  7181,  7196,  7197,
    7202,  7203,  7207,  7208,  7210,   300,  7213,  2821,   300,  7225,
     300,   300,  7226,   300,   300,  7228,   300,   300,  7238,   300,
     300,  7240,   300,   300,  7241,   300,   300,  7242,   300,   300,
    7244,   300,   300,  7246,   300,   300,  7247,   300,  7122,   300,
    7257,   300,  7145,  7147,  7149,  4782,   300,  7273,  7274,  7280,
    7282,  7289,  7290,  7295,  7299,  7300,  7302,   300,  7288,  2836,
     300,  7307,   300,   300,  7308,   300,   300,  7309,   300,   300,
    7310,   300,   300,  7315,   300,   300,  7316,   300,   300,  7317,
     300,   300,  7318,   300,   300,  7319,   300,   300,  7320,   300,
    7187,   300,  7322,   300,  7193,  7200,  7201,   -28,  7336,  7209,
    7211,  7222,   300,  7337,  7353,  7355,  7357,  7359,  7360,  7370,
    7371,  7372,  7383,  7366,  2851,   300,  7385,  7386,  7388,  7390,
    7392,  7393,  7403,  7405,  7410,  7411,  7369,  2867,   300,  4788,
     300,  7423,  7424,  7425,  7426,  7428,  7429,   300,  7413,  2882,
     300,  7433,   300,   300,  7434,   300,   300,  7436,   300,   300,
    7437,   300,   300,  7439,   300,   300,  7441,   300,   300,  7442,
     300,   300,  7549,   300,   300,  7550,   300,   300,  7559,   300,
    7227,   300,  7560,   300,  7457,  7458,  7459,  4818,   300,  7590,
    7609,  7610,  7611,  7612,  7624,  7625,  7626,  7627,  7639,   300,
    7622,  2898,   300,  7641,   300,   300,  7642,   300,   300,  7654,
     300,   300,  7655,   300,   300,  7656,   300,   300,  7657,   300,
     300,  7669,   300,   300,  7670,   300,   300,  7671,   300,   300,
    7672,   300,  7557,   300,  7685,   300,  7556,  7569,  7570,   300,
    7687,   300,  7928,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,  7943,  7572,   -28,  1269,  7958,   -28,  7973,
    7988,   -28,  8003,  8018,   -28,  8033,  8048,   -28,  8063,  8078,
     -28,  8093,   -28,  8108,  8123,   -28,  8138,  8153,   -28,  8168,
    8183,   -28,  8198,  8213,   -28,  8228,  4835,  8243,   -28,  8258,
    7574,  7587,  7588,   300,  7716,   300,  8273,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,  8288,  7599,   -28,
    1285,  8303,   -28,  8318,  8333,   -28,  8348,  8363,   -28,  8378,
    8393,   -28,  8408,  8423,   -28,  8438,  8453,   -28,  8468,  8483,
     -28,  8498,  8513,   -28,  8528,  8543,   -28,  8558,  8573,   -28,
    8588,  4864,  8603,   -28,  8618,  7603,  7604,  7605,   300,  7717,
     300,  8633,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,  8648,  7614,   -28,  1300,  8663,   -28,  8678,  8693,
     -28,  8708,  8723,   -28,  8738,  8753,   -28,  8768,  8783,   -28,
    8798,   -28,  8813,  8828,   -28,  8843,  8858,   -28,  8873,  8888,
     -28,  8903,  8918,   -28,  8933,  4885,  8948,   -28,  8963,  7618,
    7619,  7620,   300,  7759,   300,  8978,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,  8993,  7630,   -28,  1314,
    9008,   -28,  9023,  9038,   -28,  9053,  9068,   -28,  9083,  9098,
     -28,  9113,  9128,   -28,  9143,  9158,   -28,  9173,  9188,   -28,
    9203,  9218,   -28,  9233,  9248,   -28,  9263,  9278,   -28,  9293,
    4888,  9308,   -28,  9323,  7634,  7635,  7647,   300,  7775,   300,
    9338,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,  9353,  7646,   -28,  1330,  9368,   -28,  9383,  9398,   -28,
    9413,  9428,   -28,  9443,  9458,   -28,  9473,  9488,   -28,  9503,
     -28,  9518,  9533,   -28,  9548,  9563,   -28,  9578,  9593,   -28,
    9608,  9623,   -28,  9638,  4902,  9653,   -28,  9668,  7650,  7662,
    7663,   300,  7791,   300,  9683,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,  9698,  7674,   -28,  1345,  9713,
     -28,  9728,  9743,   -28,  9758,  9773,   -28,  9788,  9803,   -28,
    9818,  9833,   -28,  9848,  9863,   -28,  9878,  9893,   -28,  9908,
    9923,   -28,  9938,  9953,   -28,  9968,  9983,   -28,  9998,  4931,
   10013,   -28, 10028,  7665,  7678,  7679,  7807,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,  7689,  7690,  7691,
    7692,   -28,   -28,  7834,  7835,  7836,   -28,  7837,  7849,  7850,
     300,  7851,   300, 10043,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28, 10058,  7722,   -28,  1370, 10073,   -28,
   10088, 10103,   -28, 10118, 10133,   -28, 10148, 10163,   -28, 10178,
   10193,   -28, 10208, 10223,   -28, 10238, 10253,   -28, 10268, 10283,
     -28, 10298, 10313,   -28, 10328, 10343,   -28, 10358,  4933, 10373,
     -28, 10388,  7737,  7738,  7739,   300,  7867,   300, 10403,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 10418,
    7749,   -28,  1391, 10433,   -28, 10448, 10463,   -28, 10478, 10493,
     -28, 10508, 10523,   -28, 10538, 10553,   -28, 10568, 10583,   -28,
   10598, 10613,   -28, 10628, 10643,   -28, 10658, 10673,   -28, 10688,
   10703,   -28, 10718,  4935, 10733,   -28, 10748,  7753,  7754,  7755,
     300,  7764,  7765,  7766,  7767,  7779,  7780,  7781,  7782,  7794,
    7795,  7908,   131,   -28,  3551,   300,  7797,  7809,  7810,  7811,
    7812,  7824,  7825,  7826,  7827,  7839,  7952,   145,   -28,  3734,
     -28,  7971,  7972,  7984,   -28,  7985,  7986,  7987,   -28,  7999,
    8000,  8001,   -28,  8002,  8014,  8015,  8016,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,  7887,  7899,  7900,
    7901,   -28,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   -28, 10763,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 10778,  7902,   -28,
    1395, 10793,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
   10808,  7914,   -28,  1437,   300,  7915,  7916,  7917,  7929,  7930,
    7931,  7932,  7944,  7945,  7946,  8059,   159,   -28,  4455,   300,
    7959,  7960,  7961,  7962,  7974,  7975,  7976,  7977,  7989,  7990,
    8103,   173,   -28,  4826,  6079,  8105,  8117,  8118,  8119,  8120,
    8132,  8133,  7583,  8151,  8152,  8164,  8165,  8166,  8167,  8179,
    8180,  8181,  8182,  8194,  8195,  8196,  8197,  8209,  8210,  8211,
    8212,  8224,  8225,  8226,  8227,  8239,  8240,  8241,  8242,  8254,
    8255,  8256,  8257,  8269,  8270,  8271,  8272,  8284,  8285,  8286,
    8287,  8299,  8300,  8301,  8302,  8314,  8315,  8316,  8317,  8329,
    8330,  8331,  8332,  8344,  8345,  8346,  8347,  8359,  8360,  8361,
    8362,  8374,  8375,  8376,  8377,  8389,  8390,  8391,  8392,  8404,
    8405,  8406,  8407,  8419,  8420,  8421,  8422,  8434,  8435,  8436,
    8437,  8449,  8450,  8321,  8452,  8464,  8465,  8466,  8467,  8479,
    8480,  8481,  1460,  8482,  8494,  8495,  8496,  8497,  8509,  8510,
    8511,  8512,  8524,  8525,  8526,  8527,  8539,  8540,  8541,  8542,
    8554,  8555,  8556,  8557,  8569,  8570,  8571,  8572,  8584,  8585,
    8586,  8587,  8599,  8600,  8601,  8602,  8614,  8615,  8616,  8617,
    8629,  8630,  8631,  8632,  8644,  8645,  8646,  8647,  8659,  8660,
    8661,  8662,  8674,  8675,  8676,  8677,  8689,  8690,  8691,  8692,
    8704,  8705,  8706,  8707,  8719,  8720,  8721,  8722,  8734,  8735,
    8736,  8737,  8749,  8750,  8751,  8752,  8764,  8765,  8766,  8767,
    8779,  8780,  8781,  8655,  8667,  8668,  8669,  8670,  8682,  8683,
    8684,  8812,  8824,  8825,  8826,  8827,  8839,  8840,  8841, 17443,
   17451, 17459,  8842, 10823,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,  8724,   -28,  1475,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,  8838,   -28,  8729,
    8730,  8742,   300,  8870,  8871,  8872,  8884,  8885,  8886,  8887,
    8899,  8900,  8901,  8902,   300,  8896,  2922, 10838,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,  8785,   -28,
    1522, 10853,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28, 10868,  8786,   -28,  1577, 10883,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 10898,
    8787,   -28,  1619, 10913,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28, 10928,  8799,   -28,  1717, 10943,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28, 10958,  8800,   -28,  1728, 10973,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 10988,  8801,   -28,
    1769, 11003,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28, 11018,  8802,   -28,  1820, 11033,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 11048,
    8814,   -28,  1882, 11063,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28, 11078,  8815,   -28,  1933, 11093,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28, 11108,  8816,   -28,  1948, 11123,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 11138,  8817,   -28,
    1953,   -28,  8959,  8830,  8831,  8832,    29,   -28, 11153,  8847,
    8848,  8849,   300,  8977,  8989,  8990,  8991,  8992,  9004,  9005,
    9006,  9007,  9019,  9020,   300,  9003,  2937, 11168,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,  8892,   -28,
    1957, 11183,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28, 11198,  8904,   -28,  2057, 11213,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 11228,
    8905,   -28,  2078, 11243,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28, 11258,  8906,   -28,  2113, 11273,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28, 11288,  8907,   -28,  2158, 11303,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 11318,  8919,   -28,
    2188, 11333,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28, 11348,  8920,   -28,  2203, 11363,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 11378,
    8921,   -28,  2208, 11393,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28, 11408,  8922,   -28,  2223, 11423,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28, 11438,  8934,   -28,  2262, 11453,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 11468,  8935,   -28,
    2430,    44,   -28, 11483,  8939,  8940,  8952,   300,  9080,   300,
   11498,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28, 11513,  8951,   -28,  2455, 11528,   -28, 11543, 11558,   -28,
   11573, 11588,   -28, 11603, 11618,   -28, 11633, 11648,   -28, 11663,
   11678,   -28, 11693, 11708,   -28, 11723, 11738,   -28, 11753, 11768,
     -28, 11783, 11798,   -28, 11813,  4938, 11828,   -28, 11843,  8955,
    8967,  8968,   300,  9096,   300, 11858,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28, 11873,  8979,   -28,  2459,
   11888,   -28, 11903, 11918,   -28, 11933, 11948,   -28, 11963, 11978,
     -28, 11993, 12008,   -28, 12023, 12038,   -28, 12053, 12068,   -28,
   12083, 12098,   -28, 12113, 12128,   -28, 12143, 12158,   -28, 12173,
    4946, 12188,   -28, 12203,  8970,  8983,  8984,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,  9112,  9124,  9125,  9126,  9127,
    9139,  9140,  9141, 17467, 17475, 17483,   -28,  9142,  9154,  9155,
     -28,  9156,  9157,  9169,   -28,  9170,  9171,  9172,   -28,  9184,
    9185,  9186,   -28,  9187,  9199,  9200,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,  9201,  9202,  9214,  9215,  9216,  9217,
    9229,  9230, 17491, 17499, 17507,   300,  9231,   300, 12218,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 12233,
    9102,   -28,  2464, 12248,   -28, 12263, 12278,   -28, 12293, 12308,
     -28, 12323, 12338,   -28, 12353, 12368,   -28, 12383, 12398,   -28,
   12413, 12428,   -28, 12443, 12458,   -28, 12473, 12488,   -28, 12503,
   12518,   -28, 12533,  4951, 12548,   -28, 12563,  9117,  9118,  9119,
     300,  9247,   300, 12578,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28, 12593,  9129,   -28,  2468, 12608,   -28,
   12623, 12638,   -28, 12653, 12668,   -28, 12683, 12698,   -28, 12713,
   12728,   -28, 12743, 12758,   -28, 12773, 12788,   -28, 12803, 12818,
     -28, 12833, 12848,   -28, 12863, 12878,   -28, 12893,  4961, 12908,
     -28, 12923,  9133,  9134,  9135,   -28,  9274,  9275,  9276,   -28,
    9277,  9289,  9290,   -28,  9291,  9292,  9304,   -28,  9305,  9306,
    9307,   -28,  9319,  9320,  9321,   -28,  9322,  9334,  9335,   -28,
    9336,  9337,  9349, 12938,   -28,   -28,   -28,   -28,  9220,   -28,
    2479, 12953,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
    9221,   -28,  2530,   300,  9352,   300, 12968,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 12983,  9234,   -28,
    2538, 12998,   -28, 13013, 13028,   -28, 13043, 13058,   -28, 13073,
   13088,   -28, 13103, 13118,   -28, 13133, 13148,   -28, 13163, 13178,
     -28, 13193, 13208,   -28, 13223, 13238,   -28, 13253, 13268,   -28,
   13283,  4994, 13298,   -28, 13313,  9238,  9239,  9240,   300,  9379,
     300, 13328,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28, 13343,  9250,   -28,  2558, 13358,   -28, 13373, 13388,
     -28, 13403, 13418,   -28, 13433, 13448,   -28, 13463, 13478,   -28,
   13493, 13508,   -28, 13523, 13538,   -28, 13553, 13568,   -28, 13583,
   13598,   -28, 13613, 13628,   -28, 13643,  4995, 13658,   -28, 13673,
    9254,  9255,  9267,   -28,  9395,  9396,  9397, 13688,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,  9279,   -28,
    2624, 13703,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,  9280,   -28,  2629, 13718,   300,  9411,   300, 13733,
     -28,   -28,   -28,   -28,   -28,   -28, 13748,  9282,   -28,  2637,
   13763,   -28, 13778, 13793,   -28, 13808, 13823,   -28, 13838, 13853,
     -28, 13868, 13883,   -28, 13898, 13913,   -28, 13928, 13943,   -28,
   13958, 13973,   -28, 13988, 14003,   -28, 14018, 14033,   -28, 14048,
    4996, 14063,   -28, 14078,  9297,  9298,  9299,   300,  9427,   300,
   14093,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28, 14108,  9309,   -28,  2734, 14123,   -28, 14138, 14153,   -28,
   14168, 14183,   -28, 14198, 14213,   -28, 14228, 14243,   -28, 14258,
   14273,   -28, 14288, 14303,   -28, 14318, 14333,   -28, 14348, 14363,
     -28, 14378, 14393,   -28, 14408,  5001, 14423,   -28, 14438,  9313,
    9314,  9315, 14453,   -28, 14468,   -28,   -28,  9454,  9325,  9326,
    9327,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     300,  9469,   300,   -28,   -28,  5057,  5064,  5083, 14483,   -28,
   14498,   -28,   -28,  9470,  9341,  9342,  9354,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   300,  9485,   300,
     -28,   -28,  5086,  5089,  5096, 14513,   -28, 14528,   -28,   -28,
    9486,  9357,  9369,  9370,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   300,  9501,   300,   -28,   -28,  5123,  5129,
    5130, 14543,   -28, 14558,   -28,   -28,  9502,  9384,  9385,  9386,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     300,  9517,   300,   -28,   -28,  5131,  5133,  5183, 14573,   -28,
   14588,   -28,   -28,  9529,  9400,  9401,  9402,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   300,  9544,   300,   -28,
     -28,  5199,  5218,  5223, 14603,   -28, 14618,   -28,   -28,  9545,
    9416,  9417,  9429,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   300,  9560,   300,   -28,   -28,  5225,  5230,
    5233,   -28,  9561,  9432,  9444,  9445,   -28,   -28,   -28,   -28,
     -28,   -28, 14633,   -28, 14648,   -28,   -28,  9576,  9447,  9459,
    9460,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   300,  9591,   300,   -28,   -28,  5236,  5240,  5281, 14663,
     -28, 14678,   -28,   -28,  9592,  9474,  9475,  9476,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   300,  9607,
     300,   -28,   -28,  5282,  5283,  5286,   219,  9619,  9620,  9621,
    9622,  9634,  9635,  9636,  9637,  9649,  9650,  9521,  2737,  9652,
     300,  9534,  9535,  9536,  9537,   232,   250,  9679,  9680,  9681,
    9682,  9694,  9695,  9696,  9697,  9709,  9710,  9581,  2753,  9712,
     300,  9594,  9595,  9596,  9597,   263,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,  9739,
    9610,  9611,  9612, 14693, 14708, 14723, 14738, 14753, 14768, 14783,
   14798, 14813, 14828, 14843, 14858, 14873, 14888, 14903, 14918,   -28,
     -28,  9754,  9625,  9626,  9627,   -28,   -28,  9769,  9640,  9641,
    9642,   292,  9784,  9785,  9786,  9787,  9799,  9800,  9801,  9802,
    9814,  9815,  9686,  2798,  9817,   300,  9699,  9700,  9701,  9702,
     320,   335,  9844,  9845,  9846,  9847,  9859,  9860,  9861,  9862,
    9874,  9875,  9746,  2813,  9877,   300,  9759,  9760,  9761,  9762,
     349,  9904,  9905,  9906,  9907,  9919,  9920,  9921,  9922,  9934,
    9935,  9936,  9937,  9949,  9950,  9951,  9952,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 17515,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,  9834,  9835,  9836,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,  9962,
    9963,  9964,  9965,  9977,  9978,  9979,  9980,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,  9840,  9882,  9883,  9884,  9885,
    9897,  9898,  9899,  9900,  9912,  9913,  9914,  9915,  9927,  9928,
    9929,  9930,  9942,  9943,  9944,  9945,  9957,  9958,  9959,   -28,
     -28, 10087,  9969,  9970,  9971, 10102, 10097, 10098, 10099, 14933,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28, 14948,  9987,   -28,  2859,   -28, 10129, 10000, 10001, 10002,
     -28,   -28, 10144, 10015, 10016, 10017,   -28,   -28, 10159, 10030,
   10031, 10032,   -28,   -28, 10174, 10045, 10046, 10047,   -28,   -28,
   10189, 10060, 10061, 10062,   -28,   -28, 10204, 10075, 10076, 10077,
     -28,   -28, 10219, 10090, 10091, 10092,   -28,   -28, 10234, 10105,
   10106, 10107,   -28,   -28, 10249, 10120, 10121, 10122,   -28,   -28,
   10264, 10135, 10136, 10137,   -28,   -28, 10279, 10150, 10151, 10152,
     -28, 10294, 10295, 10296, 10297,   300,   -28,    59,   139,   140,
   14963,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28, 14978, 10179,   -28,  2875,   -28, 10310, 10181, 10182,
   10194,   -28,   -28, 10325, 10196, 10197, 10209,   -28,   -28, 10340,
   10211, 10212, 10224,   -28,   -28, 10355, 10226, 10227, 10239,   -28,
     -28, 10370, 10241, 10242, 10254,   -28,   -28, 10385, 10256, 10257,
   10269,   -28,   -28, 10400, 10271, 10272, 10284,   -28,   -28, 10415,
   10286, 10287, 10299,   -28,   -28, 10430, 10301, 10302, 10314,   -28,
     -28, 10445, 10316, 10317, 10329,   -28,   -28, 10460, 10331, 10332,
   10344, 10475,   300,   -28,   172,   188,   218, 14993,   -28, 15008,
     -28,   -28, 10476, 10347, 10359, 10360,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   300, 10491,   300,   -28,
     -28,  5287,  5293,  5312, 15023,   -28, 15038,   -28,   -28, 10492,
   10374, 10375, 10376,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   300, 10507,   300,   -28,   -28,  5318,  5323,
    5328,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 10519,
   10520, 10521, 10522, 10534, 10535, 10536, 10537, 10549, 10550, 10551,
   10552, 10564, 10565, 10566, 10567, 10579, 10580, 10581, 10582, 10594,
   10595, 10596, 10597,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28, 10609, 10610, 10611, 10612,
   10624, 10625, 10626, 10627, 10639, 10640, 10641, 10642, 10654, 10655,
   10656, 10657, 10669, 10670, 10671, 10672, 10684, 10685, 10686, 10687,
   15053,   -28, 15068,   -28,   -28, 10699, 10570, 10571, 10572,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   300,
   10714,   300,   -28,   -28,  5329,  5343,  5347, 15083,   -28, 15098,
     -28,   -28, 10715, 10586, 10587, 10599,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   300, 10730,   300,   -28,
     -28,  5349,  5381,  5383,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28, 10731, 10602, 10614, 10615,
     -28, 10746, 10617, 10629, 10630, 15113,   -28, 15128,   -28,   -28,
   10761, 10632, 10644, 10645,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   300, 10776,   300,   -28,   -28,  5384,
    5386,  5387, 15143,   -28, 15158,   -28,   -28, 10777, 10659, 10660,
   10661,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   300, 10792,   300,   -28,   -28,  5388,  5389,  5427,   -28,
     -28,   -28,   -28, 10804, 10675, 10676, 10677,   -28, 10819, 10690,
   10691, 10692,   -28, 15173,   -28, 15188,   -28,   -28, 10834, 10705,
   10706, 10707,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   300, 10849,   300,   -28,   -28,  5428,  5434,  5445,
   15203,   -28, 15218,   -28,   -28, 10850, 10721, 10722, 10734,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   300,
   10865,   300,   -28,   -28,  5453,  5489,  5490,   -28,   -28,   -28,
   10866, 10867, 10879, 15233,   -28, 15248,   300, 10880,   300,   300,
   10881,   300,   300, 10882,   300,   -28,   -28,   -28, 10894, 10895,
   10896, 15263,   -28, 15278,   300, 10897,   300,   300, 10909,   300,
     300, 10910,   300,   -28,   -28,   -28, 10911, 10912, 10924, 15293,
     -28, 15308,   300, 10925,   300,   300, 10926,   300,   300, 10927,
     300,   -28,   -28,   -28, 10939, 10940, 10941, 15323,   -28, 15338,
     300, 10942,   300,   300, 10954,   300,   300, 10955,   300,   -28,
     -28,   -28, 10956, 10957, 10969, 15353,   -28, 15368,   300, 10970,
     300,   300, 10971,   300,   300, 10972,   300,   -28,   -28,   -28,
   10984, 10985, 10986, 15383,   -28, 15398,   300, 10987,   300,   300,
   10999,   300,   300, 11000,   300,   -28, 11001, 11002, 11014,   -28,
     -28,   -28, 11015, 11016, 11017, 15413,   -28, 15428,   300, 11029,
     300,   300, 11030,   300,   300, 11031,   300,   -28,   -28,   -28,
   11032, 11044, 11045, 15443,   -28, 15458,   300, 11046,   300,   300,
   11047,   300,   300, 11059,   300, 11060,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28, 10931, 10932, 10944, 10945,
     -28,   364, 11076, 11077, 11089, 11090, 11091, 11092,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 10974, 10975,
   10976, 10977,   -28,   381, 11119, 11120, 11121, 11122, 11134,   -28,
   11135, 11136, 11137,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
   11149, 11150, 11151,   -28, 11152, 11164, 11165, 11166,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 11037, 11049,
   11050, 11051,   -28,   395, 11182, 11194, 11195, 11196, 11197, 11209,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
   11080, 11081, 11082, 11094,   -28,   413, 11225, 11226, 11227, 11239,
   11240,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 11241, 11242, 11254,
   11255, 11256, 11257, 11269, 11270, 17523, 17531, 17539, 11271, 11272,
   11284, 11285, 11286, 11287, 11299, 11300, 11297, 11298, 11312, 11313,
   11314, 11315, 11327, 11328, 11329, 11330, 11342, 11343, 11344, 11345,
   11357, 11358, 11359, 11360, 11372, 11373, 11374, 11375, 11387, 11388,
     -28, 11301, 11302, 11316,   -28, 11317, 11406, 11407,   -28,   -28,
   11419, 11290, 11291, 11292,   -28, 11434, 11435, 11436,   -28, 11437,
   11449, 11450,   -28, 11451, 11452, 11464,   -28, 11465, 11466, 11467,
     -28, 11479, 11480, 11481,   -28, 11482, 11494, 11495,   -28, 11496,
   11497, 11509,   -28, 11510, 11511, 11512,   -28, 11524, 11525, 11526,
     -28, 11527, 11539, 11540,   -28, 11541, 11542, 11554,   -28,   -28,
     -28,   -28, 15473, 11555,   300, 11556,   300, 11557,   300,   -28,
     -28, 11569, 11440, 11441, 11442,   -28, 11584, 11585, 11586,   -28,
   11587, 11599, 11600,   -28, 11601, 11602, 11614,   -28, 11615, 11616,
   11617,   -28, 11629, 11630, 11631,   -28, 11632, 11644, 11645,   -28,
   11646, 11647, 11659,   -28, 11660, 11661, 11662,   -28, 11674, 11675,
   11676,   -28, 11677, 11689, 11690,   -28, 11691, 11692, 11704,   -28,
   15488, 11705,   300, 11706,   300, 11707,   300,   -28,   -28,   -28,
   11719, 11720, 11721, 15503,   -28, 15518,   300, 11722,   300,   300,
   11734,   300,   300, 11735,   300,   -28,   -28,   -28, 11736, 11737,
   11749, 15533,   -28, 15548,   300, 11750,   300,   300, 11751,   300,
     300, 11752,   300,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28, 11764, 11765, 11766, 15563,   -28, 15578,
     300, 11767,   300,   300, 11779,   300,   300, 11780,   300,   -28,
     -28,   -28, 11781, 11782, 11794, 15593,   -28, 15608,   300, 11795,
     300,   300, 11796,   300,   300, 11797,   300,   -28, 11809, 11810,
   11811,   -28, 11812, 11824, 11825,   -28,   -28,   -28, 11826, 11827,
   11839, 15623,   -28, 15638,   300, 11840,   300,   300, 11841,   300,
     300, 11842,   300,   -28,   -28,   -28, 11854, 11855, 11856, 15653,
     -28, 15668,   300, 11857,   300,   300, 11869,   300,   300, 11870,
     300,   -28, 11871, 11872, 11884,   -28, 11885, 11886, 11887,   -28,
     -28,   -28, 11899, 11900, 11901, 15683,   -28, 15698,   300, 11902,
     300,   300, 11914,   300,   300, 11915,   300,   -28,   -28,   -28,
   11916, 11917, 11929, 15713,   -28, 15728,   300, 11930,   300,   300,
   11931,   300,   300, 11932,   300,   -28,   -28,   -28,   -28,   -28,
   15743,   -28, 15758, 15773,   -28, 15788, 15803,   -28, 15818,   -28,
     -28,   -28,   -28,   -28, 15833,   -28, 15848, 15863,   -28, 15878,
   15893,   -28, 15908,   -28,   -28,   -28,   -28,   -28, 15923,   -28,
   15938, 15953,   -28, 15968, 15983,   -28, 15998,   -28,   -28,   -28,
     -28,   -28, 16013,   -28, 16028, 16043,   -28, 16058, 16073,   -28,
   16088,   -28,   -28,   -28,   -28,   -28, 16103,   -28, 16118, 16133,
     -28, 16148, 16163,   -28, 16178,   -28,   -28,   -28,   -28,   -28,
   16193,   -28, 16208, 16223,   -28, 16238, 16253,   -28, 16268,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28, 16283,   -28, 16298,
   16313,   -28, 16328, 16343,   -28, 16358,   -28,   -28,   -28,   -28,
     -28, 16373,   -28, 16388, 16403,   -28, 16418, 16433,   -28, 16448,
     -28, 11944, 11815, 11816, 11817, 11959,   -28,   -28,   -28,   -28,
     -28,   -28, 11960, 11831, 11832, 11844, 11975,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28, 11976, 11847, 11859, 11860, 11991,   -28,   -28,   -28,
     -28,   -28,   -28, 11992, 11874, 11875, 11876, 12007,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28, 12019, 12020, 12021, 12022, 12034, 12035, 12036, 12037, 12049,
   12050, 12051, 12052, 12064, 12065, 12066, 12067, 12079, 12080, 12081,
   12082, 12094, 12095, 12096, 12097,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28, 12109, 12110, 12111, 12112, 12124, 12125, 12126,
   12127, 12139, 12140, 12141, 12142, 12154, 12155, 12156, 12157, 12169,
   12170, 12171, 12172, 12184, 12185, 12186, 12187,   -28,   -28,   -28,
     -28,   -28,   -28,   -28, 12199, 12200, 12201,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28, 16463,   -28, 16478,   -28, 16493,   -28, 12202, 12214,
   12215,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28, 16508,   -28, 16523,   -28,
   16538,   -28,   -28,   -28,   -28,   -28, 16553,   -28, 16568, 16583,
     -28, 16598, 16613,   -28, 16628,   -28,   -28,   -28,   -28,   -28,
   16643,   -28, 16658, 16673,   -28, 16688, 16703,   -28, 16718,   -28,
     -28,   -28,   -28,   -28, 16733,   -28, 16748, 16763,   -28, 16778,
   16793,   -28, 16808,   -28,   -28,   -28,   -28,   -28, 16823,   -28,
   16838, 16853,   -28, 16868, 16883,   -28, 16898,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28, 16913,   -28,
   16928, 16943,   -28, 16958, 16973,   -28, 16988,   -28,   -28,   -28,
     -28,   -28, 17003,   -28, 17018, 17033,   -28, 17048, 17063,   -28,
   17078,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28, 17093,   -28, 17108, 17123,   -28, 17138, 17153,   -28,
   17168,   -28,   -28,   -28,   -28,   -28, 17183,   -28, 17198, 17213,
     -28, 17228, 17243,   -28, 17258,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28, 12216, 12217, 12229,   -28,   -28, 12230,
   12231, 12232,   -28,   -28, 12244, 12245, 12246,   -28,   -28, 12247,
   12259, 12260,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      29,    31,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     6,     7,     8,    10,    30,
      11,     1,     0,     2,     4,     0,    24,    26,     0,    25,
      27,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   423,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   651,
     652,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   685,   686,   687,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1587,  1588,
    1589,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1869,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1938,  1939,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2650,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2473,  2474,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   424,     0,   441,
     446,   447,   448,   449,   450,   451,   442,   443,   444,   445,
       0,   453,     0,     0,   458,   467,   468,   459,   460,   461,
     462,   463,   464,   465,   466,     0,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   657,   658,   659,   660,   661,   662,   653,   654,   655,
     656,     0,   664,     0,     0,   677,   678,   669,   670,   671,
     672,   673,   674,   675,   676,     0,   680,     0,     0,   692,
     693,   694,   695,   696,   697,   688,   689,   690,   691,     0,
     699,     0,     0,   712,   713,   704,   705,   706,   707,   708,
     709,   710,   711,     0,   715,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   720,
       0,     0,   753,   758,   757,   756,   755,   754,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1720,  1721,  1722,  1723,  1724,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1861,  1862,  1853,  1854,  1855,  1856,  1857,  1858,  1859,  1860,
       0,  1864,     0,     0,  1870,  1875,  1876,  1877,  1878,  1879,
    1880,  1871,  1872,  1873,  1874,     0,  1882,     0,     0,  1887,
    1896,  1897,  1888,  1889,  1890,  1891,  1892,  1893,  1894,  1895,
       0,  1899,     0,     0,  1904,  1909,  1910,  1911,  1912,  1913,
    1914,  1905,  1906,  1907,  1908,     0,  1916,     0,     0,  1921,
    1930,  1931,  1922,  1923,  1924,  1925,  1926,  1927,  1928,  1929,
       0,  1933,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2206,  2207,  2198,  2199,  2200,
    2201,  2202,  2203,  2204,  2205,     0,  2209,     0,  2215,  2216,
       0,  2217,  2222,  2223,  2224,  2225,  2226,  2227,  2218,  2219,
    2220,  2221,     0,  2229,     0,     0,  2234,  2243,  2244,  2235,
    2236,  2237,  2238,  2239,  2240,  2241,  2242,     0,  2246,     0,
       0,  2251,  2256,  2257,  2258,  2259,  2260,  2261,  2252,  2253,
    2254,  2255,     0,  2263,     0,     0,  2268,  2277,  2278,  2269,
    2270,  2271,  2272,  2273,  2274,  2275,  2276,     0,  2280,     0,
       0,  2285,  2290,  2291,  2292,  2293,  2294,  2295,  2286,  2287,
    2288,  2289,     0,  2297,     0,     0,  2302,  2311,  2312,  2303,
    2304,  2305,  2306,  2307,  2308,  2309,  2310,     0,  2314,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2483,  2484,  2475,  2476,  2477,  2478,  2479,
    2480,  2481,  2482,     0,  2486,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    20,    21,    17,    18,    19,    13,    12,    14,    15,
      16,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   452,     0,     0,     0,     0,
     469,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   663,     0,     0,     0,     0,   679,     0,
       0,     0,     0,   698,     0,     0,     0,     0,   714,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1287,  1288,
    1289,  1290,  1291,  1292,  1283,  1284,  1285,  1286,     0,  1294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1789,
    1790,  1791,  1792,  1793,  1794,  1795,  1796,  1797,  1798,  1799,
    1800,  1801,  1802,  1803,  1804,  1725,  1726,  1727,  1728,  1729,
    1730,  1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,
    1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,
    1750,  1751,  1752,  1753,  1754,  1755,  1756,  1757,  1758,  1759,
    1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,  1769,
    1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,
    1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,     0,
    1813,  1814,  1815,  1816,  1817,  1818,  1819,  1820,     0,     0,
       0,  1863,     0,     0,     0,     0,  1881,     0,     0,     0,
       0,  1898,     0,     0,     0,     0,  1915,     0,     0,     0,
       0,  1932,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2004,  2005,  2006,  2007,  2008,  2009,
    2010,  2011,  2012,  2013,  2014,  2015,  2016,  2017,  2018,  2019,
    1940,  1941,  1942,  1943,  1944,  1945,  1946,  1947,  1948,  1949,
    1950,  1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,
    1960,  1961,  1962,  1963,  1964,  1965,  1966,  1967,  1968,  1969,
    1970,  1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1979,
    1980,  1981,  1982,  1983,  1984,  1985,  1986,  1987,  1988,  1989,
    1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,
    2000,  2001,  2002,  2003,     0,  2028,  2029,  2030,  2031,  2032,
    2033,  2034,  2035,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2208,     0,     0,     0,     0,  2228,     0,     0,     0,     0,
    2245,     0,     0,     0,     0,  2262,     0,     0,     0,     0,
    2279,     0,     0,     0,     0,  2296,     0,     0,     0,     0,
    2313,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2485,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,    43,    44,    45,    46,    37,
      38,    39,    40,     0,     0,    48,     0,     0,    57,     0,
       0,    58,     0,     0,    59,     0,     0,    60,     0,     0,
      61,     0,    62,     0,     0,    53,     0,     0,    54,     0,
       0,    55,     0,     0,    56,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   101,
     102,   103,   104,   105,   106,   107,   108,     0,     0,   112,
       0,     0,   125,     0,     0,   126,     0,     0,   117,     0,
       0,   118,     0,     0,   119,     0,     0,   120,     0,     0,
     121,     0,     0,   122,     0,     0,   123,     0,     0,   124,
       0,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0,     0,   170,   171,   172,   173,   174,   175,   166,   167,
     168,   169,     0,     0,   177,     0,     0,   186,     0,     0,
     187,     0,     0,   188,     0,     0,   189,     0,     0,   190,
       0,   191,     0,     0,   182,     0,     0,   183,     0,     0,
     184,     0,     0,   185,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,     0,     0,   238,   239,   230,   231,
     232,   233,   234,   235,   236,   237,     0,     0,   241,     0,
       0,   254,     0,     0,   255,     0,     0,   246,     0,     0,
     247,     0,     0,   248,     0,     0,   249,     0,     0,   250,
       0,     0,   251,     0,     0,   252,     0,     0,   253,     0,
       0,     0,   257,     0,     0,     0,     0,     0,     0,     0,
       0,   315,   316,   317,   318,   319,   320,   311,   312,   313,
     314,     0,     0,   322,     0,     0,   298,     0,     0,   299,
       0,     0,   300,     0,     0,   301,     0,     0,   302,     0,
     303,     0,     0,   294,     0,     0,   295,     0,     0,   296,
       0,     0,   297,     0,     0,     0,   305,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   368,   359,   360,   361,
     362,   363,   364,   365,   366,     0,     0,   370,     0,     0,
     383,     0,     0,   384,     0,     0,   375,     0,     0,   376,
       0,     0,   377,     0,     0,   378,     0,     0,   379,     0,
       0,   380,     0,     0,   381,     0,     0,   382,     0,     0,
       0,   386,     0,     0,     0,     0,     0,   429,   430,   431,
     432,   433,   434,   425,   426,   427,   428,     0,     0,     0,
       0,   436,   454,     0,     0,     0,   471,     0,     0,     0,
       0,     0,     0,     0,   480,   481,   482,   483,   484,   485,
     476,   477,   478,   479,     0,     0,   487,     0,     0,   496,
       0,     0,   497,     0,     0,   498,     0,     0,   499,     0,
       0,   500,     0,     0,   501,     0,     0,   492,     0,     0,
     493,     0,     0,   494,     0,     0,   495,     0,     0,     0,
     503,     0,     0,     0,     0,     0,     0,     0,     0,   549,
     550,   541,   542,   543,   544,   545,   546,   547,   548,     0,
       0,   552,     0,     0,   565,     0,     0,   566,     0,     0,
     557,     0,     0,   558,     0,     0,   559,     0,     0,   560,
       0,     0,   561,     0,     0,   562,     0,     0,   563,     0,
       0,   564,     0,     0,     0,   568,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   605,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   628,     0,
     665,     0,     0,     0,   681,     0,     0,     0,   700,     0,
       0,     0,   716,     0,     0,     0,     0,   725,   726,   727,
     728,   729,   730,   721,   722,   723,   724,     0,     0,     0,
       0,   732,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   759,     0,
     765,   766,   767,   761,   762,   763,   764,     0,     0,   769,
       0,     0,   775,   776,   777,   778,   779,   780,   781,   782,
       0,     0,   784,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   789,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   812,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1099,  1100,  1091,  1092,  1093,  1094,
    1095,  1096,  1097,  1098,     0,  1102,     0,  1115,  1116,  1107,
    1108,  1109,  1110,  1111,  1112,  1113,  1114,     0,  1118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1127,  1128,
    1129,  1130,  1131,  1132,  1123,  1124,  1125,  1126,     0,  1134,
       0,     0,  1139,  1145,  1146,  1147,  1148,  1149,  1150,  1141,
    1142,  1143,  1144,     0,     0,  1152,     0,     0,  1245,  1335,
    1336,  1337,  1338,  1339,  1340,  1331,  1332,  1333,  1334,     0,
       0,  1342,     0,     0,  1246,  1351,  1352,  1353,  1354,  1355,
    1356,  1347,  1348,  1349,  1350,     0,     0,  1358,     0,     0,
    1247,  1319,  1320,  1321,  1322,  1323,  1324,  1315,  1316,  1317,
    1318,     0,     0,  1326,     0,     0,  1248,  1303,  1304,  1305,
    1306,  1307,  1308,  1299,  1300,  1301,  1302,     0,     0,  1310,
       0,     0,  1249,  1233,  1234,  1235,  1236,  1237,  1238,  1229,
    1230,  1231,  1232,     0,     0,  1240,     0,     0,  1157,  1181,
    1185,  1189,  1193,  1197,  1201,  1165,  1169,  1173,  1177,     0,
       0,  1209,     0,     0,  1158,  1182,  1186,  1190,  1194,  1198,
    1202,  1166,  1170,  1174,  1178,     0,     0,  1210,     0,     0,
    1159,  1183,  1187,  1191,  1195,  1199,  1203,  1167,  1171,  1175,
    1179,     0,     0,  1211,     0,     0,  1160,  1184,  1188,  1192,
    1196,  1200,  1204,  1168,  1172,  1176,  1180,     0,     0,  1212,
       0,  1293,     0,     0,     0,     0,     0,  1251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1371,  1372,
    1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,     0,  1374,
       0,     0,  1387,  1435,  1436,  1427,  1428,  1429,  1430,  1431,
    1432,  1433,  1434,     0,     0,  1438,     0,     0,  1388,  1451,
    1452,  1443,  1444,  1445,  1446,  1447,  1448,  1449,  1450,     0,
       0,  1454,     0,     0,  1379,  1523,  1531,  1459,  1467,  1475,
    1483,  1491,  1499,  1507,  1515,     0,     0,  1547,     0,     0,
    1380,  1524,  1532,  1460,  1468,  1476,  1484,  1492,  1500,  1508,
    1516,     0,     0,  1548,     0,     0,  1381,  1525,  1533,  1461,
    1469,  1477,  1485,  1493,  1501,  1509,  1517,     0,     0,  1549,
       0,     0,  1382,  1526,  1534,  1462,  1470,  1478,  1486,  1494,
    1502,  1510,  1518,     0,     0,  1550,     0,     0,  1383,  1527,
    1535,  1463,  1471,  1479,  1487,  1495,  1503,  1511,  1519,     0,
       0,  1551,     0,     0,  1384,  1528,  1536,  1464,  1472,  1480,
    1488,  1496,  1504,  1512,  1520,     0,     0,  1552,     0,     0,
    1385,  1529,  1537,  1465,  1473,  1481,  1489,  1497,  1505,  1513,
    1521,     0,     0,  1553,     0,     0,  1386,  1530,  1538,  1466,
    1474,  1482,  1490,  1498,  1506,  1514,  1522,     0,     0,  1554,
       0,     0,  1390,     0,     0,     0,     0,     0,     0,     0,
       0,  1595,  1596,  1597,  1598,  1599,  1600,  1591,  1592,  1593,
    1594,     0,     0,  1602,     0,     0,  1611,     0,     0,  1612,
       0,     0,  1613,     0,     0,  1614,     0,     0,  1615,     0,
       0,  1616,     0,     0,  1607,     0,     0,  1608,     0,     0,
    1609,     0,     0,  1610,     0,     0,     0,  1618,     0,     0,
       0,     0,     0,     0,     0,     0,  1664,  1665,  1656,  1657,
    1658,  1659,  1660,  1661,  1662,  1663,     0,     0,  1667,     0,
       0,  1680,     0,     0,  1681,     0,     0,  1672,     0,     0,
    1673,     0,     0,  1674,     0,     0,  1675,     0,     0,  1676,
       0,     0,  1677,     0,     0,  1678,     0,     0,  1679,     0,
       0,     0,  1683,     0,     0,     0,     0,  1805,  1806,  1807,
    1808,  1809,  1810,  1811,  1812,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1865,     0,     0,     0,
    1883,     0,     0,     0,  1900,     0,     0,     0,  1917,     0,
       0,     0,  1934,     0,     0,     0,  2020,  2021,  2022,  2023,
    2024,  2025,  2026,  2027,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2073,
    2074,  2075,  2076,  2077,  2078,  2069,  2070,  2071,  2072,     0,
       0,  2080,     0,     0,  2089,     0,     0,  2090,     0,     0,
    2091,     0,     0,  2092,     0,     0,  2093,     0,     0,  2094,
       0,     0,  2085,     0,     0,  2086,     0,     0,  2087,     0,
       0,  2088,     0,     0,     0,  2096,     0,     0,     0,     0,
       0,     0,     0,     0,  2142,  2143,  2134,  2135,  2136,  2137,
    2138,  2139,  2140,  2141,     0,     0,  2145,     0,     0,  2158,
       0,     0,  2159,     0,     0,  2150,     0,     0,  2151,     0,
       0,  2152,     0,     0,  2153,     0,     0,  2154,     0,     0,
    2155,     0,     0,  2156,     0,     0,  2157,     0,     0,     0,
    2161,     0,     0,     0,     0,  2210,     0,     0,     0,  2230,
       0,     0,     0,  2247,     0,     0,     0,  2264,     0,     0,
       0,  2281,     0,     0,     0,  2298,     0,     0,     0,  2315,
       0,     0,     0,     0,  2319,  2320,  2321,  2322,     0,  2324,
       0,     0,  2329,  2330,  2331,  2332,  2333,  2334,  2335,  2336,
       0,  2338,     0,     0,     0,     0,     0,  2348,  2349,  2350,
    2351,  2352,  2353,  2344,  2345,  2346,  2347,     0,     0,  2355,
       0,     0,  2364,     0,     0,  2365,     0,     0,  2366,     0,
       0,  2367,     0,     0,  2368,     0,     0,  2369,     0,     0,
    2360,     0,     0,  2361,     0,     0,  2362,     0,     0,  2363,
       0,     0,     0,  2371,     0,     0,     0,     0,     0,     0,
       0,     0,  2417,  2418,  2409,  2410,  2411,  2412,  2413,  2414,
    2415,  2416,     0,     0,  2420,     0,     0,  2433,     0,     0,
    2434,     0,     0,  2425,     0,     0,  2426,     0,     0,  2427,
       0,     0,  2428,     0,     0,  2429,     0,     0,  2430,     0,
       0,  2431,     0,     0,  2432,     0,     0,     0,  2436,     0,
       0,     0,     0,  2487,     0,     0,     0,     0,  2495,  2496,
    2497,  2498,  2499,  2500,  2491,  2492,  2493,  2494,     0,  2502,
       0,     0,  2515,  2516,  2507,  2508,  2509,  2510,  2511,  2512,
    2513,  2514,     0,  2518,     0,     0,     0,     0,     0,     0,
    2525,  2526,  2527,  2528,  2529,  2530,     0,     0,  2532,     0,
       0,  2541,     0,     0,  2542,     0,     0,  2543,     0,     0,
    2544,     0,     0,  2545,     0,     0,  2546,     0,     0,  2537,
       0,     0,  2538,     0,     0,  2539,     0,     0,  2540,     0,
       0,     0,  2548,     0,     0,     0,     0,     0,     0,     0,
       0,  2594,  2595,  2586,  2587,  2588,  2589,  2590,  2591,  2592,
    2593,     0,     0,  2597,     0,     0,  2610,     0,     0,  2611,
       0,     0,  2602,     0,     0,  2603,     0,     0,  2604,     0,
       0,  2605,     0,     0,  2606,     0,     0,  2607,     0,     0,
    2608,     0,     0,  2609,     0,     0,     0,  2613,     0,     0,
       0,     0,     0,    63,     0,    47,    36,     0,     0,     0,
       0,    73,    88,    74,    89,    75,    90,    76,    91,    77,
      92,    93,    69,    84,    70,    85,    71,    86,    72,    87,
       0,     0,     0,    79,    95,     0,     0,     0,     0,   127,
       0,   111,   100,     0,     0,     0,     0,   141,   157,   142,
     158,   133,   149,   134,   150,   135,   151,   136,   152,   137,
     153,   138,   154,   139,   155,   140,   156,     0,     0,     0,
     144,   160,     0,     0,     0,     0,   192,     0,   176,   165,
       0,     0,     0,     0,   202,   217,   203,   218,   204,   219,
     205,   220,   206,   221,   222,   198,   213,   199,   214,   200,
     215,   201,   216,     0,     0,     0,   208,   224,     0,     0,
       0,     0,   256,     0,   240,   229,     0,     0,     0,     0,
     270,   286,   271,   287,   262,   278,   263,   279,   264,   280,
     265,   281,   266,   282,   267,   283,   268,   284,   269,   285,
       0,     0,     0,   273,   289,     0,     0,     0,     0,   304,
       0,   321,   310,     0,     0,     0,     0,   331,   346,   332,
     347,   333,   348,   334,   349,   335,   350,   351,   327,   342,
     328,   343,   329,   344,   330,   345,     0,     0,     0,   337,
     353,     0,     0,     0,     0,   385,     0,   369,   358,     0,
       0,     0,     0,   399,   415,   400,   416,   391,   407,   392,
     408,   393,   409,   394,   410,   395,   411,   396,   412,   397,
     413,   398,   414,     0,     0,     0,   402,   418,     0,     0,
       0,   435,     0,     0,     0,     0,   456,   457,   455,   473,
     474,   472,     0,   502,     0,   486,   475,     0,     0,     0,
       0,   512,   528,   513,   529,   514,   530,   515,   531,   516,
     532,   517,   533,   508,   524,   509,   525,   510,   526,   511,
     527,     0,     0,     0,   519,   535,     0,     0,     0,     0,
     567,     0,   551,   540,     0,     0,     0,     0,   581,   597,
     582,   598,   573,   589,   574,   590,   575,   591,   576,   592,
     577,   593,   578,   594,   579,   595,   580,   596,     0,     0,
       0,   584,   600,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   667,   668,   666,   683,
     684,   682,   702,   703,   701,   718,   719,   717,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   768,
     760,     0,     0,     0,     0,   783,   774,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,   910,   911,
     912,   913,   914,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   853,   854,   855,   856,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,   873,   874,   875,   876,   877,   878,   879,   880,   881,
     882,   883,   884,   885,   886,   887,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,     0,   923,   924,
     925,   926,   927,   928,   929,   930,     0,     0,     0,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,     0,
       0,     0,     0,     0,     0,     0,     0,  1051,  1052,  1053,
    1054,  1055,  1056,  1057,  1058,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1117,
    1101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1250,  1271,  1272,  1273,  1274,  1275,  1276,  1267,  1268,  1269,
    1270,     0,     0,  1278,     0,  1133,     0,     0,     0,     0,
    1151,  1140,     0,     0,     0,     0,  1341,  1256,     0,     0,
       0,     0,  1357,  1257,     0,     0,     0,     0,  1325,  1258,
       0,     0,     0,     0,  1309,  1259,     0,     0,     0,     0,
    1239,  1260,     0,     0,     0,     0,  1205,  1161,     0,     0,
       0,     0,  1206,  1162,     0,     0,     0,     0,  1207,  1163,
       0,     0,     0,     0,  1208,  1164,     0,     0,     0,     0,
    1295,     0,     0,     0,     0,     0,  1262,     0,     0,     0,
       0,  1389,  1403,  1404,  1395,  1396,  1397,  1398,  1399,  1400,
    1401,  1402,     0,     0,  1406,     0,  1373,     0,     0,     0,
       0,  1437,  1419,     0,     0,     0,     0,  1453,  1420,     0,
       0,     0,     0,  1539,  1411,     0,     0,     0,     0,  1540,
    1412,     0,     0,     0,     0,  1541,  1413,     0,     0,     0,
       0,  1542,  1414,     0,     0,     0,     0,  1543,  1415,     0,
       0,     0,     0,  1544,  1416,     0,     0,     0,     0,  1545,
    1417,     0,     0,     0,     0,  1546,  1418,     0,     0,     0,
       0,     0,     0,  1422,     0,     0,     0,     0,  1617,     0,
    1601,  1590,     0,     0,     0,     0,  1627,  1643,  1628,  1644,
    1629,  1645,  1630,  1646,  1631,  1647,  1632,  1648,  1623,  1639,
    1624,  1640,  1625,  1641,  1626,  1642,     0,     0,     0,  1634,
    1650,     0,     0,     0,     0,  1682,     0,  1666,  1655,     0,
       0,     0,     0,  1696,  1712,  1697,  1713,  1688,  1704,  1689,
    1705,  1690,  1706,  1691,  1707,  1692,  1708,  1693,  1709,  1694,
    1710,  1695,  1711,     0,     0,     0,  1699,  1715,     0,     0,
       0,  1821,  1822,  1823,  1824,  1825,  1826,  1827,  1828,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1867,  1868,  1866,  1885,  1886,  1884,  1902,
    1903,  1901,  1919,  1920,  1918,  1936,  1937,  1935,  2036,  2037,
    2038,  2039,  2040,  2041,  2042,  2043,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2095,     0,  2079,  2068,     0,     0,     0,     0,  2105,
    2121,  2106,  2122,  2107,  2123,  2108,  2124,  2109,  2125,  2110,
    2126,  2101,  2117,  2102,  2118,  2103,  2119,  2104,  2120,     0,
       0,     0,  2112,  2128,     0,     0,     0,     0,  2160,     0,
    2144,  2133,     0,     0,     0,     0,  2174,  2190,  2175,  2191,
    2166,  2182,  2167,  2183,  2168,  2184,  2169,  2185,  2170,  2186,
    2171,  2187,  2172,  2188,  2173,  2189,     0,     0,     0,  2177,
    2193,     0,     0,     0,  2212,  2213,  2211,  2232,  2233,  2231,
    2249,  2250,  2248,  2266,  2267,  2265,  2283,  2284,  2282,  2300,
    2301,  2299,  2317,  2318,  2316,  2323,     0,     0,     0,     0,
    2337,     0,     0,     0,     0,     0,  2370,     0,  2354,  2343,
       0,     0,     0,     0,  2380,  2396,  2381,  2397,  2382,  2398,
    2383,  2399,  2384,  2400,  2385,  2401,  2376,  2392,  2377,  2393,
    2378,  2394,  2379,  2395,     0,     0,     0,  2387,  2403,     0,
       0,     0,     0,  2435,     0,  2419,  2408,     0,     0,     0,
       0,  2449,  2465,  2450,  2466,  2441,  2457,  2442,  2458,  2443,
    2459,  2444,  2460,  2445,  2461,  2446,  2462,  2447,  2463,  2448,
    2464,     0,     0,     0,  2452,  2468,     0,     0,     0,  2489,
    2490,  2488,  2501,     0,     0,     0,     0,  2517,     0,     0,
       0,     0,  2523,     0,  2547,     0,  2531,  2524,     0,     0,
       0,     0,  2557,  2573,  2558,  2574,  2559,  2575,  2560,  2576,
    2561,  2577,  2562,  2578,  2553,  2569,  2554,  2570,  2555,  2571,
    2556,  2572,     0,     0,     0,  2564,  2580,     0,     0,     0,
       0,  2612,     0,  2596,  2585,     0,     0,     0,     0,  2626,
    2642,  2627,  2643,  2618,  2634,  2619,  2635,  2620,  2636,  2621,
    2637,  2622,  2638,  2623,  2639,  2624,  2640,  2625,  2641,     0,
       0,     0,  2629,  2645,     0,     0,     0,    78,    94,    49,
       0,     0,     0,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   159,   113,     0,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   207,   223,   178,     0,     0,     0,     0,
     194,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   272,   288,   242,     0,     0,     0,     0,   258,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   336,
     352,   323,     0,     0,     0,     0,   306,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,   417,   371,
       0,     0,     0,     0,   387,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   437,     0,     0,     0,   518,
     534,   488,     0,     0,     0,     0,   504,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   583,   599,   553,
       0,     0,     0,     0,   569,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   610,   611,   612,   613,
     614,   615,   606,   607,   608,   609,     0,     0,     0,     0,
     617,     0,     0,     0,     0,     0,     0,     0,   633,   634,
     635,   636,   637,   638,   629,   630,   631,   632,     0,     0,
       0,     0,   640,     0,     0,     0,     0,     0,     0,   733,
       0,     0,     0,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   770,
       0,     0,     0,   785,     0,     0,     0,     0,   794,   795,
     796,   797,   798,   799,   790,   791,   792,   793,     0,     0,
       0,     0,   801,     0,     0,     0,     0,     0,     0,     0,
     817,   818,   819,   820,   821,   822,   813,   814,   815,   816,
       0,     0,     0,     0,   824,     0,     0,     0,     0,     0,
       0,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,   915,
     916,   917,   918,   919,   920,   921,   922,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1103,     0,     0,     0,  1119,     0,     0,     0,  1277,  1261,
       0,     0,     0,     0,  1135,     0,     0,     0,  1153,     0,
       0,     0,  1343,     0,     0,     0,  1359,     0,     0,     0,
    1327,     0,     0,     0,  1311,     0,     0,     0,  1241,     0,
       0,     0,  1213,     0,     0,     0,  1214,     0,     0,     0,
    1215,     0,     0,     0,  1216,     0,     0,     0,  1297,  1298,
    1296,  1252,     0,     0,     0,     0,     0,     0,     0,  1405,
    1421,     0,     0,     0,     0,  1375,     0,     0,     0,  1439,
       0,     0,     0,  1455,     0,     0,     0,  1555,     0,     0,
       0,  1556,     0,     0,     0,  1557,     0,     0,     0,  1558,
       0,     0,     0,  1559,     0,     0,     0,  1560,     0,     0,
       0,  1561,     0,     0,     0,  1562,     0,     0,     0,  1391,
       0,     0,     0,     0,     0,     0,     0,  1633,  1649,  1603,
       0,     0,     0,     0,  1619,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1698,  1714,  1668,     0,     0,
       0,     0,  1684,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1837,  1838,  1839,  1840,  1841,  1842,  1843,
    1844,  1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,  1829,
    1830,  1831,  1832,  1833,  1834,  1835,  1836,  2052,  2053,  2054,
    2055,  2056,  2057,  2058,  2059,  2060,  2061,  2062,  2063,  2064,
    2065,  2066,  2067,  2044,  2045,  2046,  2047,  2048,  2049,  2050,
    2051,  2111,  2127,  2081,     0,     0,     0,     0,  2097,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2176,
    2192,  2146,     0,     0,     0,     0,  2162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2325,     0,     0,
       0,  2339,     0,     0,     0,  2386,  2402,  2356,     0,     0,
       0,     0,  2372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2451,  2467,  2421,     0,     0,     0,     0,
    2437,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2503,     0,     0,     0,  2519,     0,     0,     0,  2563,
    2579,  2533,     0,     0,     0,     0,  2549,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2628,  2644,  2598,
       0,     0,     0,     0,  2614,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    50,    80,    96,
       0,    67,     0,     0,    68,     0,     0,    66,     0,   115,
     116,   114,   145,   161,     0,   131,     0,     0,   132,     0,
       0,   130,     0,   180,   181,   179,   209,   225,     0,   196,
       0,     0,   197,     0,     0,   195,     0,   244,   245,   243,
     274,   290,     0,   260,     0,     0,   261,     0,     0,   259,
       0,   325,   326,   324,   338,   354,     0,   308,     0,     0,
     309,     0,     0,   307,     0,   373,   374,   372,   403,   419,
       0,   389,     0,     0,   390,     0,     0,   388,     0,   439,
     440,   438,   490,   491,   489,   520,   536,     0,   506,     0,
       0,   507,     0,     0,   505,     0,   555,   556,   554,   585,
     601,     0,   571,     0,     0,   572,     0,     0,   570,     0,
     616,     0,     0,     0,     0,     0,   622,   623,   624,   625,
     627,   639,     0,     0,     0,     0,     0,   645,   646,   647,
     648,   650,   735,   736,   734,   772,   773,   771,   787,   788,
     786,   800,     0,     0,     0,     0,     0,   806,   807,   808,
     809,   811,   823,     0,     0,     0,     0,     0,   829,   830,
     831,   832,   834,   931,   932,   933,   934,   935,   936,   937,
     938,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1059,  1060,  1061,  1062,  1063,
    1064,  1065,  1066,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1105,  1106,  1104,
    1121,  1122,  1120,  1279,     0,     0,     0,  1137,  1138,  1136,
    1155,  1156,  1154,  1345,  1346,  1344,  1361,  1362,  1360,  1329,
    1330,  1328,  1313,  1314,  1312,  1243,  1244,  1242,  1221,  1225,
    1217,  1222,  1226,  1218,  1223,  1227,  1219,  1224,  1228,  1220,
    1263,  1254,     0,  1255,     0,  1253,     0,  1407,     0,     0,
       0,  1377,  1378,  1376,  1441,  1442,  1440,  1457,  1458,  1456,
    1571,  1579,  1563,  1572,  1580,  1564,  1573,  1581,  1565,  1574,
    1582,  1566,  1575,  1583,  1567,  1576,  1584,  1568,  1577,  1585,
    1569,  1578,  1586,  1570,  1423,  1393,     0,  1394,     0,  1392,
       0,  1605,  1606,  1604,  1635,  1651,     0,  1621,     0,     0,
    1622,     0,     0,  1620,     0,  1670,  1671,  1669,  1700,  1716,
       0,  1686,     0,     0,  1687,     0,     0,  1685,     0,  2083,
    2084,  2082,  2113,  2129,     0,  2099,     0,     0,  2100,     0,
       0,  2098,     0,  2148,  2149,  2147,  2178,  2194,     0,  2164,
       0,     0,  2165,     0,     0,  2163,     0,  2327,  2328,  2326,
    2341,  2342,  2340,  2358,  2359,  2357,  2388,  2404,     0,  2374,
       0,     0,  2375,     0,     0,  2373,     0,  2423,  2424,  2422,
    2453,  2469,     0,  2439,     0,     0,  2440,     0,     0,  2438,
       0,  2505,  2506,  2504,  2521,  2522,  2520,  2535,  2536,  2534,
    2565,  2581,     0,  2551,     0,     0,  2552,     0,     0,  2550,
       0,  2600,  2601,  2599,  2630,  2646,     0,  2616,     0,     0,
    2617,     0,     0,  2615,     0,    82,    98,    83,    99,    81,
      97,   147,   163,   148,   164,   146,   162,   211,   227,   212,
     228,   210,   226,   276,   292,   277,   293,   275,   291,   340,
     356,   341,   357,   339,   355,   405,   421,   406,   422,   404,
     420,   522,   538,   523,   539,   521,   537,   587,   603,   588,
     604,   586,   602,   618,     0,     0,     0,   626,   641,     0,
       0,     0,   649,   802,     0,     0,     0,   810,   825,     0,
       0,     0,   833,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   939,
     940,   941,   942,   943,   944,   945,   946,  1075,  1076,  1077,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1067,  1068,  1069,  1070,  1071,  1072,  1073,
    1074,  1281,  1282,  1280,  1265,  1266,  1264,  1409,  1410,  1408,
    1425,  1426,  1424,  1637,  1653,  1638,  1654,  1636,  1652,  1702,
    1718,  1703,  1719,  1701,  1717,  2115,  2131,  2116,  2132,  2114,
    2130,  2180,  2196,  2181,  2197,  2179,  2195,  2390,  2406,  2391,
    2407,  2389,  2405,  2455,  2471,  2456,  2472,  2454,  2470,  2567,
    2583,  2568,  2584,  2566,  2582,  2632,  2648,  2633,  2649,  2631,
    2647,   620,   621,   619,   643,   644,   642,   804,   805,   803,
     827,   828,   826
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -28,   -28,   -28,   -28,   -28,   -28,   -28,    -9, 12271,   -28,
     -28,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    94,    95,    96,    97,    98,    99,   110,   111,     1,
       2,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     127,   141,   155,   169,   183,   197,  1692,   200,   214,   228,
     242,   256,   101,   102,   104,   198,   273,   286,   741,   743,
     113,   302,   315,   317,   259,   326,   320,   321,   322,   323,
     324,   325,  1795,  1710,  1711,  1712,   419,   344,   358,   373,
     387,   257,   258,   420,   404,   418,  1898,  2502,  2672,   436,
     449,   260,   464,   478,   492,   506,   287,   318,   521,   535,
     549,   562,  5944,   564,   565,   579,   593,  1677,   608,   622,
     636,   650,   288,   421,   666,   680,  1678,  6031,   695,   696,
     422,   319,  1680,   713,   727,   736,   737,   738,   739,   740,
     289,  1681,  6843,   728,   327,   328,   729,   388,   329,   730,
    1762,  1763,  1764,   330,   389,   744,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   390,   423,  1693,   759,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     450,   507,   103,   774,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  1796,   742,   742,   789,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,  1899,  2503,
    2673,   804,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,  6845,  6847,  5945,   819,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   508,   563,  1679,  6032,
     846,   594,   848,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,  1682,  6844,  6901,   863,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,  1813,  1814,  1815,
     878,  6903,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   651,   652,   893,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  1865,  1866,  1867,   681,  1983,
    1984,  6905,   910,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,  2135,  2136,   924,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   105,  5508,  5509,   682,
     697,   938,   106,   107,  6846,  6848,   698,  1916,  1917,  1918,
     699,  5528,  5529,   745,   952,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  5593,  5594,   978,   105,   980,
     981,  1968,  1969,  1970,   106,   107,   756,  6902,   849,  5613,
    5614,   746,   993,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,  6904,   771,   747,  1085,  3726,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   786,   748,
    1100,  3906,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,  1124,  6906,   749,  1128,  6605,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   750,   751,  6626,
     752,   753,  1143,   754,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,   801,   816,  1158,  6627,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   755,   108,
    6648,   109,   831,   760,   199,  1178,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   761,   762,  1269,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  6677,
     763,   108,  1283,   109,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,   764,   765,  1298,  1987,  1988,  1989,
     766,   767,  1683,  1992,  1993,  1994,   768,  6698,   769,   770,
    1313,  1684,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,  6699,   775,  1328,   776,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6720,  2044,  2045,  2046,
    1343,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7235,   777,  1434,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  2096,  2097,  2098,  1449,  7246,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   850,
     778,  1464,  7266,  2105,  2106,  2107,   779,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,  1480,  1686,  1689,
    7277,   861,   780,  2110,  2111,  2112,   781,  1687,  1690,   782,
     757,  1495,   758,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,  1685,   783,   772,  1510,   773,   784,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   785,
    1525,   790,   791,   876,   995,   996,   997,   998,   999,  1000,
    1001,  1002,   792,   787,  1540,   788,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   793,   802,  1555,   803,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    1694,   105,  1662,  1697,  1572,   794,   795,   106,   107,  1695,
     796,  1706,  1698,   797,   798,   817,   799,   818,  1587,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   800,
     832,   105,   833,   805,  1602,   806,   807,   106,   107,  1688,
    1691,  1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,   808,
     862,  1620,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,  2115,  2116,  2117,  1635,  2120,  2121,  2122,  2291,
    2292,  2293,  1650,   809,  1260,  1261,  1262,  1263,  1264,  1265,
    1266,  1267,  1651,  1652,  1653,  1654,  1655,  1656,  1657,  1658,
    1659,  1660,   877,  1661,   810,   811,  1676,   812,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,  2320,  2321,
    2322,  1727,   922,  2504,  2505,  2506,   813,   891,  1700,   892,
     851,  1696,   814,  1703,  1699,   815,  1779,  1701,  2674,  2675,
    2676,   906,  1704,   907,   108,   820,   109,   852,   821,   316,
     822,  1830,   823,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   824,  1707,   825,  1882,   936,  1728,  1731,
     853,  1734,  1084,  1708,   108,   826,   109,  1729,  1732,  2099,
    1735,  1933,  2726,  2727,  2728,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  1971,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,   827,  1268,   828,  1425,  1426,  1427,
    1428,  1429,  1430,  1431,  1432,  2778,  2779,  2780,   829,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   830,
    2009,  4084,  4085,  4086,  4087,  4088,  4089,  4090,  4091,  1702,
     854,   923,   855,   856,  1705,  2061,   857,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   858,   859,  2100,
    2102,   950,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,  2878,  2879,  2880,  1709,   964,   860,   864,  1730,
    1733,   865,  1736,  2883,  2884,  2885,   937,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,  2123,  1433,  2888,
    2889,  2890,   866,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,  2893,  2894,  2895,  2898,  2899,  2900,  2153,
    2164,  2176,  2178,  2180,   867,  2201,  2903,  2904,  2905,  3003,
    3004,  3005,  4092,  3055,  3056,  3057,   868,  3107,  3108,  3109,
    1098,   869,  1099,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,  3112,  3113,  3114,   870,  1281,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   871,   872,
     951,   873,  1296,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   874,   875,   965,   879,  1311,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,  1737,  3117,
    3118,  3119,  1326,  3122,  3123,  3124,   880,  1738,  1126,   881,
    1127,   882,  1740,  1743,  3127,  3128,  3129,  2307,  1141,   883,
    1142,  1741,  1744,  3132,  3133,  3134,   884,   885,  1156,   890,
    1157,   886,  2336,  2351,  2366,  2381,  2396,  2411,  2426,  2441,
    2456,  2471,  2486,  2487,  1171,   905,  1172,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,  3137,  3138,  3139,
    2520,  2535,  2550,  2565,  2580,  2595,  2610,  2625,  2640,  2655,
    2670,  3142,  3143,  3144,   887,  2691,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  1282,  3212,  3213,  3214,
    2743,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  1297,  3264,  3265,  3266,  1341,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  1312,   888,   911,  1739,
    1476,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  1327,   912,  1742,  1745,  1493,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  3269,  3270,  3271,   889,
    1508,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  3344,  3345,  3346,   894,  1523,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  3396,  3397,  3398,   913,
    1538,   738,   739,   740,   895,  3738,  3739,  3740,  1447,   896,
    1448,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  3918,  3919,  3920,   897,  1553,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   898,  1462,   899,  1463,
    1568,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  4413,  4414,  4415,  1342,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  5198,  5199,  5200,   900,  1477,
     901,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5234,  5235,  5236,  1494,  1614,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5271,  5272,  5273,  1509,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    5307,  5308,  5309,   914,  1524,   902,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5344,  5345,  5346,  1539,
    2499,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5380,  5381,  5382,   903,  3415,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1554,   904,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5428,  5429,  5430,  1569,
    3469,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  1746,  1585,   908,  1586,  3524,  3020,  5465,  5466,  5467,
    1747,  5572,  5573,  5574,   909,   915,  1600,   916,  1601,   917,
     918,  3072,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   919,   920,  1615,   925,  3578,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,  1633,   921,  1634,
     926,  3633,   105,  5578,  5579,  5580,   927,   935,   106,   107,
     928,  1648,   929,  1649,   930,   931,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5726,  5727,  5728,  2500,
    3687,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5852,  5853,  5854,  3416,  3766,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   932,  1749,   105,  1752,
    3821,  1755,  1759,   933,   106,   107,  1750,   949,  1753,  3470,
    1756,  1760,  1748,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   934,  3525,   939,   940,  3873,  5877,  5878,
    5879,  3151,  3162,   941,  3177,   942,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   943,   105,  1780,  3229,
    3888,   944,   945,   106,   107,  3579,   963,  1781,   946,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   947,
    3634,   948,  1783,  3949,   953,   108,   954,   109,  3284,  3297,
    2101,  1784,  3309,  5883,  5884,  5885,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   955,  3361,   956,  3688,
    3962,   957,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,  1786,   958,  3767,   959,  3977,   960,  1751,  1789,
    1754,  1787,  1757,  1761,  3402,  5889,  5890,  5891,  1790,  3822,
    1792,   108,   961,   109,   962,  3413,  2177,   988,  3417,  1793,
    3419,  3420,   989,  3422,  3423,   990,  3425,  3426,   991,  3428,
    3429,   992,  3431,  1797,  3433,  3434,  3874,  3436,  3437,   994,
    3439,  3440,  1798,  3442,  3443,  1075,  3445,  1086,  3447,  1782,
    3449,  1087,  1800,  1097,  1088,  3456,  1089,  1125,  1803,  3889,
     108,  1801,   109,  1758,  1090,  2179,  3467,  1804,  1091,  3471,
    1806,  3473,  3474,  1785,  3476,  3477,  1810,  3479,  3480,  1807,
    3482,  3483,  3950,  3485,  3486,  1811,  3488,  3489,  1831,  3491,
    3492,  1092,  3494,  3495,  1093,  3497,  3498,  1832,  3500,  1094,
    3502,  1834,  3504,  5895,  5896,  5897,  1095,  3511,  1140,  3963,
    1835,  1096,  1809,  1788,  5901,  5902,  5903,  1101,  3522,  1155,
    1791,  3526,  1173,  3528,  3529,  3978,  3531,  3532,  1102,  3534,
    3535,  1794,  3537,  3538,  1103,  3540,  1837,  3542,  3543,  1840,
    3545,  3546,  1104,  3548,  3549,  1838,  3551,  3552,  1841,  3554,
    1105,  3556,  1106,  3558,  1799,  5907,  5908,  5909,  3565,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  3576,
    1107,  1108,  3580,  1802,  3582,  3583,  1843,  3585,  3586,  1805,
    3588,  3589,  1109,  3591,  3592,  1844,  3594,  3595,  1110,  3597,
    3598,  1808,  3600,  3601,  1111,  3603,  3604,  1812,  3606,  3607,
    1129,  3609,  1130,  3611,  1131,  3613,  5913,  5914,  5915,  1833,
    3620,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  3631,  1836,  1132,  3635,  1846,  3637,  3638,  1849,  3640,
    3641,  1133,  3643,  3644,  1847,  3646,  3647,  1850,  3649,  1134,
    3651,  3652,  1135,  3654,  3655,  1136,  3657,  3658,  1137,  3660,
    3661,  1138,  3663,  1139,  3665,  1852,  3667,  1839,  1855,  1170,
    1842,  3674,  1858,  1174,  1853,  1862,  1144,  1856,  5919,  5920,
    5921,  1859,  3685,  1145,  1863,  3689,  1146,  3691,  3692,  1147,
    3694,  3695,  1148,  3697,  3698,  1149,  3700,  3701,  1150,  3703,
    3704,  1151,  3706,  3707,  1152,  3709,  3710,  1845,  3712,  3713,
    1713,  3715,  3716,  1153,  3718,  1154,  3720,  1159,  3722,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  5925,
    5926,  5927,  1160,  3992,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  5931,  5932,  5933,  3753,  4205,  5937,
    5938,  5939,  1161,  5968,  5969,  5970,  1848,  1162,  3764,  1851,
    1163,  3768,  1765,  3770,  3771,  1164,  3773,  3774,  1883,  3776,
    3777,  1886,  3779,  3780,  1165,  3782,  3783,  1884,  3785,  3786,
    1887,  3788,  3789,  1166,  3791,  3792,  1854,  3794,  3795,  1857,
    3797,  1167,  3799,  1860,  3801,  1175,  1864,  1168,  1169,  3808,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    3819,  1889,  1176,  3823,  4249,  3825,  3826,  1892,  3828,  3829,
    1890,  3831,  3832,  1177,  3834,  3835,  1893,  3837,  3838,  1259,
    3840,  3841,  1270,  3843,  3844,  1271,  3846,  3847,  1272,  3849,
    3850,  1435,  3852,  1273,  3854,  1274,  3856,  1275,  1895,  1900,
    3872,  1903,  3887,  5974,  5975,  5976,  1276,  1896,  1901,  1277,
    1904,  1278,  3993,  1279,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  5980,  5981,  5982,  4206,  4265,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  1885,
    1280,  1284,  1888,  4281,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  1285,  3939,  1286,  1295,  4297,  5986,
    5987,  5988,  1287,  3947,  1906,  1310,  3951,  1325,  1909,  1340,
    1913,  1288,  1934,  1907,  1937,  3960,  1940,  1910,  3976,  1914,
    3991,  1935,  1891,  1938,  1289,  1941,  1290,  1291,  1894,  1292,
    4002,  1293,  1294,  4250,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  5992,  5993,  5994,  1299,  4313,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  1897,
    1902,  1300,  1905,  4329,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  5998,  5999,  6000,  1301,  4345,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  6004,
    6005,  6006,  1302,  4361,  6010,  6011,  6012,  4266,  1303,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  6016,
    6017,  6018,  4282,  4377,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  1304,  1908,  1305,  4298,  4393,  1911,
    1306,  1915,  1307,  1936,  1308,  1939,  4193,  1942,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,  6022,  6023,
    6024,  1309,  4409,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,  1314,  4236,  4237,  1315,  4449,  1019,  1020,
    1021,  1022,  1023,  1024,  1025,  1026,  1316,  4314,  4251,  1317,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    4263,  1318,  4330,  4267,  4465,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  4279,  1319,  4346,  4283,  4481,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    4295,  1320,  4362,  4299,  4497,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  4311,  1943,  1946,  4315,  4513,
    1949,  1321,  4378,  1952,  1424,  1944,  1947,  1436,  1437,  1950,
    4327,  1955,  1953,  4331,  1958,  1961,  1322,  4394,  1323,  1324,
    1956,  1329,  1330,  1959,  1962,  4343,  1331,  1332,  4347,  1333,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    4359,  4410,  1334,  4363,  4529,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  4375,  4450,  1438,  4379,  4545,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    4391,  1335,  1965,  4395,  4561,  2010,  6028,  6029,  6030,  1336,
    1337,  1966,  1439,  4466,  2011,  4407,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  1338,  1339,  4482,  1440,
    4577,  6043,  6044,  6045,  4418,  6080,  6081,  6082,  4436,  4437,
    6196,  6197,  6198,  4498,  6233,  6234,  6235,  1945,  1948,  1441,
    2013,  1951,  4451,  1446,  1954,  6287,  6288,  6289,  4514,  2014,
    1442,  1465,  1957,  1443,  4463,  1960,  1963,  4467,  1444,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  4479,
    1445,  1450,  4483,  4593,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  4495,  2016,  2019,  4499,  4609,  1461,
    1451,  2022,  1452,  4530,  2017,  2020,  6292,  6293,  6294,  4511,
    2023,  1453,  4515,  1454,  6301,  6302,  6303,  1455,  4546,  1456,
    1457,  2025,   105,  1967,  4527,  1475,  2012,  4531,   106,   107,
    2026,  1492,  2028,  4562,  6338,  6339,  6340,  1466,  1714,  4543,
    1458,  2029,  4547,  1467,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  4559,  1715,  1716,  4563,  1459,  4578,
    1460,  1717,  1718,  1719,  1720,  1721,  1722,  1723,  1724,  4575,
    1468,  2015,  4579,  1469,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  4591,  1470,  1507,  4595,  4633,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  4607,
    6374,  6375,  6376,  4688,  4613,  6379,  6380,  6381,  1471,  4620,
    1472,  1473,  4594,  6389,  6390,  6391,  2018,  2021,  1474,  1481,
    4631,  1482,  2024,  4635,  2031,  4637,  4638,  4610,  4640,  4641,
    1483,  4643,  4644,  2032,  4646,  4647,  1484,  4649,  4650,  2034,
    4652,  4653,  2027,  4655,  4656,  1485,  4658,  4659,  2035,  4661,
    4662,  1486,  4664,  2030,  4666,   108,  4668,   109,  1487,  1725,
    1726,  4675,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,  4686,  1488,  1489,  4690,  4801,  4692,  4693,  1490,
    4695,  4696,  1491,  4698,  4699,  1816,  4701,  4702,  2037,  4704,
    4705,  1570,  4707,  4708,  1571,  4710,  4711,  2038,  4713,  4714,
    2041,  4716,  4717,  1496,  4719,  1497,  4721,  1498,  4723,  2042,
    6426,  6427,  6428,  6617,  6618,  6619,  1499,  4634,  1500,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  6639,
    6640,  6641,  4689,  4856,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  1501,  2033,  1502,  1503,  4929,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  1504,
    2036,  1505,  1506,  4941,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  6689,  6690,  6691,  1511,  4959,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  6711,
    6712,  6713,  1512,  5014,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  1513,  4802,  1514,  1515,  5069,  2039,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    1516,  2043,  1517,  1518,  5083,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  6791,  6792,  6793,  1519,  5098,
    1520,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6852,  6853,  6854,  1521,  5153,  1526,  1527,  1528,  1522,
    1529,  1530,  4857,  1531,  1532,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  1533,  1534,  4930,  1535,  5873,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    1536,  1537,  4942,  1541,  5964,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  1542,  1543,  4960,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,  1544,  1545,
    1546,  1547,  5015,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,  1548,  1549,  1550,  1551,  5070,  4788,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  4799,
    1552,  1556,  4803,  5084,  4805,  4806,  2062,  4808,  4809,  1557,
    4811,  4812,  1558,  4814,  4815,  2063,  4817,  4818,  5099,  4820,
    4821,  1559,  4823,  4824,  1560,  4826,  4827,  1561,  4829,  4830,
    1573,  4832,  1567,  4834,  5154,  4836,  2065,  2068,  1562,  2071,
    4843,  1563,  1564,  1565,  1566,  2066,  2069,  1574,  2072,  1575,
    1603,  4854,  1584,  1599,  4858,  1604,  4860,  4861,  5874,  4863,
    4864,  1576,  4866,  4867,  1577,  4869,  4870,  1613,  4872,  4873,
    2074,  4875,  4876,  5965,  4878,  4879,  1578,  4881,  4882,  2075,
    4884,  4885,  1605,  4887,  1579,  4889,  1868,  4891,  1580,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,  1919,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    1606,  1607,  1608,  1609,  1995,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,  1581,  4923,  2064,  1610,  1582,
    2047,  1583,  1588,  4931,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  1589,  4946,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  4957,  2067,  2070,  4961,
    2073,  4963,  4964,  2077,  4966,  4967,  1590,  4969,  4970,  2080,
    4972,  4973,  2078,  4975,  4976,  1591,  4978,  4979,  2081,  4981,
    4982,  1592,  4984,  4985,  1593,  4987,  4988,  1594,  4990,  1595,
    4992,  2076,  4994,  1596,  1597,  1598,  1611,  5001,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,  5012,  2083,
    1612,  5016,  2086,  5018,  5019,  2089,  5021,  5022,  2084,  5024,
    5025,  2087,  5027,  5028,  2090,  5030,  5031,  1617,  5033,  5034,
    2294,  5036,  5037,  1618,  5039,  5040,  1619,  5042,  5043,  1632,
    5045,  2323,  5047,  1621,  5049,  1622,  1623,  1624,  1625,  1626,
    2093,  1627,  2692,  5057,  2695,  1647,  2507,  1628,  2698,  2094,
    2701,  2693,  1629,  2696,  1630,  1631,  5071,  2699,  1636,  2702,
    1637,  1638,  1639,  1640,  1641,  2677,  1642,  1643,  1644,  5085,
    1645,  5089,  1646,  1982,  2079,  2134,  2308,  2729,  5096,  1861,
    2082,  5100,  2309,  5102,  5103,  1912,  5105,  5106,  1964,  5108,
    5109,  1972,  5111,  5112,  1973,  5114,  5115,  1974,  5117,  5118,
    1975,  5120,  5121,  1976,  5123,  5124,  2704,  5126,  5127,  1977,
    5129,  1978,  5131,  2707,  5133,  2705,  2710,  1979,  1980,  5140,
    2085,  1981,  2708,  2088,  1986,  2711,  2091,  1991,  2713,  3006,
    5151,  2040,  2202,  5155,  2092,  5157,  5158,  2714,  5160,  5161,
    2104,  5163,  5164,  2716,  5166,  5167,  2109,  5169,  5170,  2114,
    5172,  5173,  2717,  5175,  5176,  2119,  5178,  5179,  2124,  5181,
    5182,  2095,  5184,  2694,  5186,  2697,  5188,  2203,  2125,  2700,
    5192,  2703,  5194,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   105,  5228,  2126,  5230,  2706,  2127,   106,
     107,  2128,  2719,  2129,  2709,  2130,  2723,  2712,  2131,   359,
     105,  2720,  2132,  2133,  2204,  2724,   106,   107,   360,  2715,
     361,   362,   363,   364,   365,   366,  2337,  2205,   367,   368,
     369,   370,  2206,  2282,  2718,  2338,  2207,  2339,  2340,  2341,
    2342,  2343,  2344,  2208,  2209,  2345,  2346,  2347,  2348,  5265,
     105,  5267,  2744,  2210,  2211,  2747,   106,   107,  2750,  2753,
    2756,  2745,  2212,  2213,  2748,  2759,  2352,  2751,  2754,  2757,
    2214,  2215,  2216,  2217,  2760,  2353,  2218,  2354,  2355,  2356,
    2357,  2358,  2359,  2219,  3058,  2360,  2361,  2362,  2363,  2762,
    2765,  2220,  2768,  2221,  3163,  2222,  2223,  2224,  2763,  2766,
    2225,  2769,  2771,  5301,  3215,  5303,  2226,  2227,  2228,   105,
    2229,  2772,  2230,  2231,  3299,   106,   107,  2232,  2233,  2234,
    2235,  2236,  2310,  2721,  3347,  5510,   108,  2725,   109,   371,
    2237,   372,  2238,  2239,   105,  2240,  5511,  5512,  5513,  5514,
     106,   107,  2775,   108,  3021,   109,  2311,  2349,  2350,  2241,
    2367,  2776,  2242,  3022,  2243,  2244,  2245,  2246,  5338,  2368,
    5340,  2369,  2370,  2371,  2372,  2373,  2374,  2247,   105,  2375,
    2376,  2377,  2378,  2746,   106,   107,  2749,  2248,  2312,  2752,
    2755,  2758,  2249,   108,  2382,   109,  2761,  2364,  2365,  2250,
    2251,  2252,  2253,  2383,  2254,  2384,  2385,  2386,  2387,  2388,
    2389,   105,  2255,  2390,  2391,  2392,  2393,   106,   107,  2313,
    2764,  2767,  5374,  2770,  5376,  2256,  2257,  2397,   105,  2258,
    2259,  2260,  2488,  2773,   106,   107,  2398,  2261,  2399,  2400,
    2401,  2402,  2403,  2404,  2412,  2262,  2405,  2406,  2407,  2408,
    2263,  2264,   108,  2413,   109,  2414,  2415,  2416,  2417,  2418,
    2419,  3024,   105,  2420,  2421,  2422,  2423,  3027,   106,   107,
    3025,  2265,  2314,  2777,  2315,  3023,  3028,   108,  2427,   109,
    2316,  2379,  2380,  2266,  2267,  2268,  3030,  2428,  2269,  2429,
    2430,  2431,  2432,  2433,  2434,  3031,  2270,  2435,  2436,  2437,
    2438,  5422,   105,  5424,  2271,  2272,  2273,  2274,   106,   107,
    3033,   108,  2275,   109,  2317,  2394,  2395,  3036,  5530,  3034,
    2276,  2277,  2278,  2279,  3039,  2280,  3037,  3042,  3045,  5531,
    5532,  5533,  5534,  3040,   105,  2281,  3043,  3046,  2283,  2284,
     106,   107,  2285,  2286,   108,  3048,   109,  2318,  2409,  2410,
    2521,  2287,  2288,  2289,  3049,  2290,  5459,  2319,  5461,  2522,
    2489,   108,  2490,   109,  2491,  2424,  2425,  2523,  2524,  2492,
    2493,  2494,  3052,  2525,  2526,  2527,  2528,  2529,  2530,  2531,
    2532,  3053,  3026,  2495,  3073,   105,  2496,  3076,  3029,  2497,
    2498,   106,   107,  3074,  2501,   108,  3077,   109,  2671,  2439,
    2440,  2442,  2722,  2774,  2789,  2790,  2791,  3032,  2792,  2793,
    2443,  5496,  2444,  2445,  2446,  2447,  2448,  2449,  2794,  2795,
    2450,  2451,  2452,  2453,  2796,  5515,  5516,   105,  2797,  2798,
    3079,  3035,  3082,   106,   107,   108,  2869,   109,  3038,  3080,
    5535,  3083,  3085,  2457,  2799,  3041,  2800,  2801,  3044,  3047,
    2802,  3086,  2458,  2803,  2459,  2460,  2461,  2462,  2463,  2464,
    2804,  2805,  2465,  2466,  2467,  2468,  3050,   108,  2806,   109,
    2807,  2533,  2534,  5553,  5554,  5555,  5556,  5557,  5558,  5559,
    5560,  5561,  5562,  5563,  5564,  5565,  5566,  5567,  5568,  3088,
    3091,  2808,  2809,  3054,  2810,  3298,  2882,  2887,  3089,  3092,
    2811,  2812,  3094,  3097,  3100,  3075,  2813,  2814,  3078,  2815,
     105,  3095,  3098,  3101,  2816,  5581,   106,   107,   108,  3446,
     109,  2817,  2454,  2455,  2818,  3104,  2472,  2819,  2820,  5600,
    5601,  2821,  2822,  2823,  3105,  2473,  2824,  2474,  2475,  2476,
    2477,  2478,  2479,   105,  5620,  2480,  2481,  2482,  2483,   106,
     107,  3081,  3178,  3084,  2825,  2826,  2827,  2828,  3181,  2536,
     108,  3179,   109,  3087,  2469,  2470,  3184,  3182,  2537,  2829,
    2830,  2831,  2832,  2833,   105,  3185,  2538,  2539,  2834,  2835,
     106,   107,  2540,  2541,  2542,  2543,  2544,  2545,  2546,  2547,
    2551,  2836,  3187,  2892,  2837,  2838,   105,  3190,  2839,  2552,
    3193,  3188,   106,   107,  2840,  2897,  3191,  2553,  2554,  3194,
    3090,  3093,  2566,  2555,  2556,  2557,  2558,  2559,  2560,  2561,
    2562,  2567,  2841,  3096,  3099,  3102,  2842,  2843,  2844,  2568,
    2569,  2845,  2846,  2847,  2848,  2570,  2571,  2572,  2573,  2574,
    2575,  2576,  2577,   108,  3501,   109,  3106,  2484,  2485,   105,
    3196,  3199,  2849,  2850,  3202,   106,   107,  3205,  3209,  3197,
    3200,  2851,  2852,  3203,  2853,  2581,  3206,  3210,  2854,  2855,
    2856,  2857,  2858,  3180,  2582,  2859,   108,  2860,   109,  3183,
    2548,  2549,  2583,  2584,  2861,  2862,  2863,  3186,  2585,  2586,
    2587,  2588,  2589,  2590,  2591,  2592,  3230,  3233,  2864,  3236,
    2865,  2866,  2867,  2868,  2870,  3231,  3234,   108,  3237,   109,
     105,  2563,  2564,  3189,  2871,  3239,   106,   107,  3192,  3242,
    2872,  3195,  2873,  2874,  3240,  2875,  2596,  2876,  3243,   108,
    2902,   109,   105,  2578,  2579,  2597,  3245,  3248,   106,   107,
    2877,  2994,  2914,  2598,  2599,  3246,  3249,  2915,  3145,  2600,
    2601,  2602,  2603,  2604,  2605,  2606,  2607,  2916,   105,  2917,
    2918,  2919,  2920,  2921,   106,   107,  2922,  3146,  3147,  3148,
    3149,  3198,  3201,  5859,  2611,  3204,  2923,  2924,  3207,  3211,
    2925,  3251,   108,  2612,   109,  5871,  2593,  2594,  2926,   105,
    3252,  2613,  2614,  2927,  2928,   106,   107,  2615,  2616,  2617,
    2618,  2619,  2620,  2621,  2622,  2626,  2929,  3254,  2930,  2931,
    2932,  2933,  3257,  2934,  2627,  2935,  3255,  3232,  3235,  2936,
    3238,  3258,  2628,  2629,  2937,  2938,  2939,  2940,  2630,  2631,
    2632,  2633,  2634,  2635,  2636,  2637,  3241,  2941,  2942,  2943,
    3244,  2944,  2945,   108,   105,   109,  3051,  2608,  2609,  2946,
     106,   107,  3414,  3261,  3310,  3313,  2947,  3247,  3250,  3316,
    2641,  2948,  3262,  3311,  3314,   108,  3103,   109,  3317,  2642,
    3150,  3319,  3322,  3325,  2949,  2950,  2951,  2643,  2644,  2952,
    3320,  3323,  3326,  2645,  2646,  2647,  2648,  2649,  2650,  2651,
    2652,   108,  2953,   109,  2954,  2623,  2624,  3328,   105,  2955,
    3111,  2956,  3253,  3331,   106,   107,  3329,  3334,  2957,  2958,
    2959,  3337,  3332,  2960,  2656,  2961,  3335,  2962,  3555,  2963,
    3338,  3341,   108,  2657,   109,  3362,  2638,  2639,  3256,   105,
    3342,  2658,  2659,  3259,  3363,   106,   107,  2660,  2661,  2662,
    2663,  2664,  2665,  2666,  2667,  4222,   733,   734,   735,   736,
     737,   738,   739,   740,  4223,  2964,  4224,  4225,  4226,  4227,
    4228,  4229,   105,  2965,  4230,  4231,  4232,  4233,   106,   107,
    2966,  3468,  2967,  5950,  3263,  3312,  3315,   108,  4422,   109,
    3318,  2653,  2654,  2968,   105,  5962,  2969,  4423,  3365,  2970,
     106,   107,  3321,  3324,  3327,  4424,  4425,  3366,  2971,  2972,
     114,  4426,  4427,  4428,  4429,  4430,  4431,  4432,  4433,   115,
    2973,   116,   117,   118,   119,   120,   121,  2974,  3330,   122,
     123,   124,   125,   105,  3333,  2975,  2976,  3116,  3336,   106,
     107,   108,  3339,   109,  3368,  2668,  2669,  2977,   105,  5595,
    3371,  2978,  3343,  3369,   106,   107,  3364,  3523,  2979,  3372,
    5596,  5597,  5598,  5599,   128,  2980,  3374,  2981,  2982,  2983,
    2984,  2985,   108,   129,   109,  3375,  4234,  4235,  2986,  3121,
    2987,   130,   131,  2988,  2989,  2990,  3377,   132,   133,   134,
     135,   136,   137,   138,   139,  3378,  2991,  2992,  2993,  2995,
    2996,  3126,  3380,  2997,  2998,   108,   105,   109,  3383,  4434,
    4435,  3381,   106,   107,   105,  3131,  3386,  3384,  2999,  3367,
     106,   107,   142,  3577,  3000,  3387,  3001,   108,  3002,   109,
     156,   143,   126,   144,   145,   146,   147,   148,   149,   157,
    3136,   150,   151,   152,   153,  3141,  3208,   158,   159,  3260,
    3403,  3268,  3389,   160,   161,   162,   163,   164,   165,   166,
     167,  3390,  3340,   105,  3393,  3370,   108,  3404,   109,   106,
     107,  3373,  3610,  3394,  3392,  3405,  3399,  3406,  6037,   170,
    6039,   108,  3407,   109,  3408,  3400,   140,  3376,   171,  3409,
     172,   173,   174,   175,   176,   177,  3410,  3411,   178,   179,
     180,   181,  3412,  3418,  3421,  3424,  3427,  3379,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,  3430,  3453,
     105,  3432,   847,  3382,  3450,  3435,   106,   107,  3454,  3385,
    3438,  3508,  3441,  6074,  3444,  6076,   184,  3388,  3448,   108,
    3509,   109,  3451,  3452,   154,   185,  3562,   108,  3457,   109,
    3458,   105,   168,   186,   187,  3563,  3459,   106,   107,   188,
     189,   190,   191,   192,   193,   194,   195,   201,  3460,  3461,
    3462,  3463,  3464,  3391,  3465,  3466,   202,  3472,   203,   204,
     205,   206,   207,   208,   105,  3395,   209,   210,   211,   212,
     106,   107,  3475,  3617,  3478,  3481,   108,  3401,   109,  3484,
     215,   182,  3618,  3487,  3490,  3671,   105,  3750,  3493,   216,
    3496,  3499,   106,   107,  3672,  3505,  3751,   217,   218,  3503,
    3506,  3507,   229,   219,   220,   221,   222,   223,   224,   225,
     226,   230,  3512,   231,   232,   233,   234,   235,   236,  3513,
    3455,   237,   238,   239,   240,  3514,  6190,  3805,  6192,  3515,
    3559,  3516,  3510,   108,   105,   109,  3806,  4617,   196,  4672,
     106,   107,  3632,  3560,  4785,  4840,  4618,  3564,  4673,  4943,
     243,  3517,  3518,  4786,  4841,  3561,  4998,  3519,  4944,   244,
    3520,  3521,  5086,  3527,   108,  4999,   109,   245,   246,   213,
    3530,  5087,  3533,   247,   248,   249,   250,   251,   252,   253,
     254,  6227,  3536,  6229,   105,  3664,  3539,  3541,  3544,   105,
     106,   107,  5137,  3614,  3619,   106,   107,   108,  3615,   109,
    5615,  5138,   227,  3547,  3550,   331,  3673,  3553,  3752,  5220,
     105,  5616,  5617,  5618,  5619,   332,   106,   107,  5221,   108,
    3557,   109,   333,   334,   241,  3566,   345,  3567,   335,   336,
     337,   338,   339,   340,   341,   342,   346,  3568,  5257,  3569,
    3570,  3571,  3572,   347,   348,  3573,  3574,  5258,  3807,   349,
     350,   351,   352,   353,   354,   355,   356,   105,  4619,  5293,
    4674,  3575,  5330,   106,   107,  4787,  4842,   108,  5294,   109,
    4945,  5331,   255,   374,  3581,  3584,  5366,  5000,  3587,  3590,
    3593,  3596,   375,  5088,  6295,  5367,  6297,  3599,  3602,  3605,
     376,   377,  3608,  3612,  3616,  3621,   378,   379,   380,   381,
     382,   383,   384,   385,  3622,  5403,  3623,  5451,  3624,  5488,
    3625,  3626,  6066,  5139,  5404,  3627,  5452,   108,  5489,   109,
    6103,  6067,   108,  3628,   109,  6219,   105,   343,  3719,  6104,
    5222,  3629,   106,   107,  6220,  6256,  3630,  3636,  3639,  6332,
    3642,  6334,   391,   108,  6257,   109,  3645,  3648,   357,  3650,
    3653,   392,  3656,   393,   394,   395,   396,   397,   398,  5259,
     105,   399,   400,   401,   402,  3659,   106,   107,  6324,  6361,
    6412,  3662,  3666,  3668,  3669,  6449,   405,  6325,  6362,  6413,
    5295,  3670,   105,  5332,  6450,   406,  3675,  3676,   106,   107,
     108,  3686,   109,   407,   408,   386,  3677,  5368,   451,   409,
     410,   411,   412,   413,   414,   415,   416,   452,  3678,   453,
     454,   455,   456,   457,   458,  3679,   105,   459,   460,   461,
     462,  3680,   106,   107,  3723,  3765,  5405,  6383,  5453,  6385,
    5490,  6466,  2154,  6068,  3681,  3682,  3683,  3684,  6469,  3690,
    6467,  6105,   105,  2155,  2156,  2157,  6221,  6470,   106,   107,
    3724,  2158,  2159,  2160,  2161,  3693,  6258,  6472,   465,   108,
    6484,   109,  3696,  6487,   403,  3699,  6473,   466,  3702,  6485,
    6490,  3705,  6488,  3708,  3711,   467,   468,  3714,  6420,  6491,
    6422,   469,   470,   471,   472,   473,   474,   475,   476,  6326,
    6363,  6414,  3717,   108,   105,   109,  6451,  6502,   417,  3721,
     106,   107,   105,  6505,  6508,  6520,  6503,  6523,   106,   107,
     479,  3725,  6506,  6509,  6521,   108,  6524,   109,   493,   480,
     463,   481,   482,   483,   484,   485,   486,   494,  3727,   487,
     488,   489,   490,  3728,  3729,   495,   496,  3730,  3731,  3732,
    3733,   497,   498,   499,   500,   501,   502,   503,   504,   108,
    3737,   109,  6468,  2162,  2163,  3734,  3735,  6526,   105,  6471,
    3736,  6463,  3741,  6465,   106,   107,  6527,  3820,  3742,  3746,
    3743,  3744,  3745,  6538,   522,   108,  3747,   109,  6474,  3748,
     477,  6486,  6539,   523,  6489,   524,   525,   526,   527,   528,
     529,  6492,  6541,   530,   531,   532,   533,  6544,  6481,  6556,
    6483,  6542,  3749,  3798,  6559,   105,  6545,  6562,  6557,  3754,
    6578,   106,   107,  6560,  6581,  3755,  6563,  3756,  6504,  6579,
    3757,   536,  3758,  6582,  6507,  6510,  6522,   108,  6525,   109,
     537,  3759,   491,  3760,  6499,   108,  6501,   109,   538,   539,
     505,  3761,  3762,  3763,   540,   541,   542,   543,   544,   545,
     546,   547,   105,  3802,  3803,  6584,  6596,  6599,   106,   107,
    6602,  6916,  3769,  3772,  6585,  6597,  6600,  6919,   566,  6603,
    6917,  6517,  3775,  6519,  3778,  3781,  6920,   567,  6528,   568,
     569,   570,   571,   572,   573,  3853,  6922,   574,   575,   576,
     577,   108,  6934,   109,  6540,  6923,   534,  6937,  3784,  3787,
    3790,  6935,  6940,  7000,  3793,  3796,  6938,  6535,   105,  6537,
    3804,  6941,  7001,  6543,   106,   107,  3857,  7003,  6546,  3800,
    6558,  7006,  3809,  7018,   580,  6561,  7004,  3810,  6564,  3811,
    7007,  6580,  7019,   581,  3812,  6583,  3813,  3814,   108,  3815,
     109,   582,   583,   548,  6553,  3816,  6555,   584,   585,   586,
     587,   588,   589,   590,   591,  7021,  3858,  7024,  7044,  3817,
    7047,  7050,  7062,  7065,  7022,  3818,  7025,  7045,   105,  7048,
    7051,  7063,  7066,  3824,   106,   107,  6586,  6598,  6601,  3827,
    3830,  6604,  6918,  3833,   595,   108,  3836,   109,  6921,  3839,
     578,  3842,  6575,   596,  6577,   597,   598,   599,   600,   601,
     602,  7068,  7088,   603,   604,   605,   606,  6924,  7091,  3845,
    7069,  7089,  3859,  6936,   105,  3848,  3851,  7092,  6939,  7094,
     106,   107,  3855,  6942,  7002,  3890,  3894,  7106,  7095,  6593,
     609,  6595,  3891,  3892,  3898,  3902,  7107,  3893,  7005,   610,
    3907,   108,  7008,   109,  7020,  3895,   592,   611,   612,  3908,
    3896,  6621,  3909,   613,   614,   615,   616,   617,   618,   619,
     620,   105,  3897,  7109,  7112,  3899,  3910,   106,   107,  3911,
    3900,  6643,  7110,  7113,  3901,  3912,  7023,   623,  7026,  7046,
    3913,  7049,  7052,  7064,  7067,  3914,   624,  3903,   625,   626,
     627,   628,   629,   630,  3904,  3915,   631,   632,   633,   634,
    3905,   108,  3916,   109,  3917,  3921,   607,  3940,  3922,  3923,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    3924,   105,  7070,  7090,   979,  3925,  3926,   106,   107,  7093,
    3927,  3928,  3929,  3930,  3931,  3932,  6693,   637,  3933,  3941,
    7096,  3934,  3942,  3943,  3935,  3936,   638,   108,  7108,   109,
    3944,  3937,   621,  3945,   639,   640,  6715,  3946,  3948,  3952,
     641,   642,   643,   644,   645,   646,   647,   648,  3953,  3954,
    3955,  3956,  3957,   105,  3958,  3959,  3961,  3994,  3995,   106,
     107,   105,  3996,  4083,  7111,  7114,  3997,   106,   107,   653,
    3998,  3999,  4000,  4093,   108,  4001,   109,   667,   654,   635,
     655,   656,   657,   658,   659,   660,   668,  4189,   661,   662,
     663,   664,   105,  4094,   669,   670,  4095,  4096,   106,   107,
     671,   672,   673,   674,   675,   676,   677,   678,   700,  4097,
    4098,  4099,  4100,  4101,  4102,  4103,  4104,   701,  4190,   702,
     703,   704,   705,   706,   707,   105,  4105,   708,   709,   710,
     711,   106,   107,  4106,   108,  4107,   109,  4108,  4109,   649,
    4110,   714,  4111,  4112,  4113,   105,  4114,  4115,  4116,  4117,
     715,   106,   107,  4118,  4119,  4120,  4121,  4122,   716,   717,
    4123,  1663,  4124,  4125,   718,   719,   720,   721,   722,   723,
     724,   725,  1664,  1665,  1666,  1667,  1668,  1669,  4126,  4127,
    1670,  1671,  1672,  1673,  4128,  4129,   108,  4130,   109,  4131,
    4132,   665,  4133,  4134,   108,  4135,   109,  4136,  4137,   679,
    4138,  4139,  4140,  4141,   105,  4142,  4143,  4144,  4145,  4146,
     106,   107,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1766,  4191,  4147,  4148,  4149,   108,  4150,   109,  4151,  4152,
     712,  1767,  1768,  1769,  1770,  1771,  1772,   105,  4153,  1773,
    1774,  1775,  1776,   106,   107,  1035,  1036,  1037,  1038,  1039,
    1040,  1041,  1042,  1869,  4194,   105,  4154,  4155,   108,  4156,
     109,   106,   107,   726,  1870,  1871,  1872,  1873,  1874,  1875,
     105,  1817,  1876,  1877,  1878,  1879,   106,   107,   108,  4157,
     109,  4195,  1674,  1675,  4158,  4159,  1920,  4160,  1818,  1819,
    4161,  4162,  4163,  4164,  1820,  1821,  1822,  1823,  1824,  1825,
    1826,  1827,  4165,  1921,  1922,  4166,  4167,  4168,  4169,  1923,
    1924,  1925,  1926,  1927,  1928,  1929,  1930,   105,  4170,  4171,
    4172,  4181,  4182,   106,   107,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1996,  4204,  4183,  4184,   108,  4185,   109,
    4186,  1777,  1778,  4196,  1997,  1998,  1999,  2000,  2001,  2002,
    4187,  4188,  2003,  2004,  2005,  2006,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6842,  4192,  4197,  4198,
     108,  4199,   109,  4200,  1880,  1881,  4201,  4202,   105,  4203,
    4207,  4208,  4209,  4210,   106,   107,  4211,  4217,   108,  4212,
     109,  4213,  1828,  1829,  2048,  4214,  4215,  4216,  4218,  4219,
    4238,  4220,  4221,   108,  4239,   109,  4240,  1931,  1932,   105,
    4241,  2049,  2050,  4242,  4243,   106,   107,  2051,  2052,  2053,
    2054,  2055,  2056,  2057,  2058,  2678,   105,  4244,  4245,  4246,
    4247,  4252,   106,   107,  4248,  4264,  2679,  2680,  2681,  2682,
    2683,  2684,  2730,  4253,  2685,  2686,  2687,  2688,  4254,  4255,
     108,  4256,   109,  6900,  2007,  2008,  4257,  4258,  4259,  2731,
    2732,  4260,  4261,  4262,  4268,  2733,  2734,  2735,  2736,  2737,
    2738,  2739,  2740,  4269,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  4270,  4271,  4272,  6913,   982,  6915,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    4273,   105,  4274,  4275,   983,  4276,  4277,   106,   107,  4278,
    4280,   108,  4284,   109,  4285,  2059,  2060,  3007,  4286,  4287,
    4288,  4289,  4290,  4291,  6931,  4292,  6933,  4293,  3008,  3009,
    3010,  3011,  3012,  3013,   105,  4294,  3014,  3015,  3016,  3017,
     106,   107,   108,  5621,   109,  4300,  2689,  2690,  4296,  4301,
    3059,  4302,  4303,  4304,  4305,  4306,  4307,  4308,  4309,   108,
    4310,   109,  4312,  2741,  2742,   105,  4316,  3060,  3061,  4317,
    4318,   106,   107,  3062,  3063,  3064,  3065,  3066,  3067,  3068,
    3069,  3164,   105,  4319,  4320,  4321,  4322,  4323,   106,   107,
    4324,  4328,  3165,  3166,  3167,  3168,  3169,  3170,  3216,  4325,
    3171,  3172,  3173,  3174,  1051,  1052,  1053,  1054,  1055,  1056,
    1057,  1058,  4326,   105,  4332,  3217,  3218,  4333,  4334,   106,
     107,  3219,  3220,  3221,  3222,  3223,  3224,  3225,  3226,  3348,
    4335,  4336,  4337,  4338,   108,  4339,   109,  4340,  3018,  3019,
    6997,  4341,  6999,  4342,  4344,  4348,  3349,  3350,  4349,  4350,
    4351,  4352,  3351,  3352,  3353,  3354,  3355,  3356,  3357,  3358,
    4353,  4354,  4355,  4356,  4357,  4358,  4364,   108,  4365,   109,
    4360,  3070,  3071,  4366,  4367,  4368,  4369,  7015,  4370,  7017,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    4371,  4372,  4373,  4374,   984,  4376,  4380,  4381,   108,  4382,
     109,  4383,  3175,  3176,  4384,   105,  4385,  4386,  4387,  4388,
    4389,   106,   107,  4390,     0,   108,  4392,   109,  4396,  3227,
    3228,   261,   105,  4397,  4398,  4399,  4400,  4401,   106,   107,
    4402,  4412,   262,   263,   264,   265,   266,   267,   274,  4403,
     268,   269,   270,   271,  4404,  7041,   108,  7043,   109,  4405,
    3359,  3360,  4406,  4408,  4416,   275,   276,  4417,  4419,  4420,
    4438,   277,   278,   279,   280,   281,   282,   283,   284,  4421,
    4439,   105,  4440,  4441,  4442,  4443,  4444,   106,   107,   105,
    4448,  4445,  7059,  4446,  7061,   106,   107,   290,  4614,  4447,
    4452,  4453,  4454,  4455,  4456,   303,  4457,  4458,   291,   292,
     293,   294,   295,   296,  4459,  4460,   297,   298,   299,   300,
    4461,  4462,   304,   305,  4468,  4469,  4464,  4470,   306,   307,
     308,   309,   310,   311,   312,   313,  4471,  4472,  4473,  4474,
    4475,  4476,  4477,  7085,  4478,  7087,  4480,  4484,   108,  4485,
     109,  4486,  4487,   272,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  4488,   108,  4489,   109,   985,  4490,
     285,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  4491,
    7103,  4492,  7105,  4493,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,  4494,  4496,  4500,  7120,  4512,  7122,
    7123,  4501,  7125,  7126,  4502,  7128,  2137,  2138,  2139,  2140,
    2141,  2142,  2143,  2144,   108,  7134,   109,  7136,  7137,   301,
    7139,  7140,   108,  7142,   109,  4503,  4504,   314,  4505,  4506,
    4507,  4508,  4509,  7148,  4528,  7150,  7151,  4510,  7153,  7154,
    4516,  7156,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,
    4517,  7162,  4615,  7164,  7165,  4518,  7167,  7168,  4519,  7170,
    1179,  1180,  1181,  1182,  1183,  1184,  1185,  1186,  4520,  7176,
    4611,  7178,  7179,  4521,  7181,  7182,  4522,  7184,  1187,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  4523,  7190,  4524,  7192,
    7193,  4525,  7195,  7196,  4526,  7198,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  4532,  4533,  4534,  7207,
     986,  7209,  7210,  4535,  7212,  7213,  4536,  7215,   105,  4537,
    4538,  4539,  4540,  4541,   106,   107,  4542,  7221,  4548,  7223,
    7224,  4549,  7226,  7227,   424,  7229,  4544,   105,  4550,  4551,
    4552,  4553,  4554,   106,   107,  4555,  4665,  4556,  4557,  4558,
    4560,   425,   426,   437,  4564,  4565,  4566,   427,   428,   429,
     430,   431,   432,   433,   434,  4567,  4568,  4569,   105,  4570,
     438,   439,  4571,  4572,   106,   107,   440,   441,   442,   443,
     444,   445,   446,   447,   509,  4573,  4574,   105,  4576,  4580,
    4581,  4582,  4583,   106,   107,  4584,  4592,  4585,  4586,  4587,
    4588,   510,   511,   550,  4589,  4590,  4596,   512,   513,   514,
     515,   516,   517,   518,   519,  4597,  4598,  4599,  4600,  4601,
     551,   552,  4602,  4603,  4604,  4605,   553,   554,   555,   556,
     557,   558,   559,   560,  1195,  1196,  1197,  1198,  1199,  1200,
    1201,  1202,  4606,   105,  4612,  4608,  4621,  4616,  4622,   106,
     107,   108,  4632,   109,  4623,  4624,   435,  4625,  4626,   683,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     108,  4627,   109,  4628,   987,   448,   684,   685,  4629,  4630,
    4636,  4639,   686,   687,   688,   689,   690,   691,   692,   693,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    4642,   108,  4645,   109,  1478,   105,   520,  4648,  4651,  4654,
    4657,   106,   107,  4660,  4669,  4663,  4667,  4670,  4671,  4676,
     108,   834,   109,   105,  4677,   561,  4678,  4679,  4680,   106,
     107,  4681,   835,   836,   837,   838,   839,   840,  4682,   966,
     841,   842,   843,   844,  4683,  4684,  4685,  4687,  4691,  4694,
     967,   968,   969,   970,   971,   972,   105,  4697,   973,   974,
     975,   976,   106,   107,   105,  4720,  4700,  4703,  4706,  4709,
     106,   107,  1112,  4724,  4712,  7392,   108,  7394,   109,  7396,
    2189,   694,  4715,  1113,  1114,  1115,  1116,  1117,  1118,  4718,
    4722,  1119,  1120,  1121,  1122,  4725,  4726,  2190,  2191,  4727,
    4728,  4729,  4730,  2192,  2193,  2194,  2195,  2196,  2197,  2198,
    2199,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  4731,  4732,  4733,  4734,  1479,  4743,  4744,  4745,  4746,
    4750,  4747,  4754,  7436,  4758,  7438,  4748,  7440,   108,  4762,
     109,  4749,  4751,   845,  4766,  4767,  4768,  7446,  4752,  7448,
    7449,  4753,  7451,  7452,  4769,  7454,   108,  4770,   109,  4771,
    4755,   977,  4772,  4756,  4757,  7460,  4759,  7462,  7463,  4760,
    7465,  7466,   105,  7468,  4773,  4789,  4790,  4761,   106,   107,
     105,  4763,  4764,  4765,  4782,  4783,   106,   107,  2295,   108,
    4784,   109,  4791,  4792,  1123,  4793,  2165,   108,  4794,   109,
    4795,  4796,  2200,  4797,  4798,  2296,  2297,  4804,  4800,  4807,
    4810,  2298,  2299,  2300,  2301,  2302,  2303,  2304,  2305,  2166,
    2167,  2168,  2169,  2170,  2171,  2172,  2173,  4813,  4816,  4819,
    4822,  7474,  4833,  7476,  7477,  4825,  7479,  7480,  4828,  7482,
    1203,  1204,  1205,  1206,  1207,  1208,  1209,  1210,  4831,  7488,
    4835,  7490,  7491,  4844,  7493,  7494,  4837,  7496,  4838,  4845,
    4846,  4839,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,  4847,  4848,  4849,  7508,  4855,  7510,  7511,  4850,
    7513,  7514,  4851,  7516,  2145,  2146,  2147,  2148,  2149,  2150,
    2151,  2152,  4852,  7522,  4853,  7524,  7525,  4859,  7527,  7528,
    4862,  7530,  4865,  4868,  4871,   108,  4874,   109,  4877,  4880,
    2306,  4883,  4886,   108,  4888,   109,  4890,  2174,  2175,  7542,
    4895,  7544,  7545,  4899,  7547,  7548,  4892,  7550,   105,  4893,
    4903,  4907,  4894,  4911,   106,   107,  4896,  7556,  4897,  7558,
    7559,  4898,  7561,  7562,  2324,  7564,   105,  4900,  4901,  4902,
    4904,  4905,   106,   107,  4906,  2325,  2326,  2327,  2328,  2329,
    2330,  4908,  2508,  2331,  2332,  2333,  2334,   105,  4915,  4909,
    4910,  4912,  4913,   106,   107,  4914,  4916,  4917,  4919,  2509,
    2510,  4918,  4920,  3272,  4921,  2511,  2512,  2513,  2514,  2515,
    2516,  2517,  2518,  4922,  3273,  3274,  3275,  3276,  3277,  3278,
     105,  4924,  3279,  3280,  3281,  3282,   106,   107,  1211,  1212,
    1213,  1214,  1215,  1216,  1217,  1218,  3285,  4925,  4926,  4927,
     105,  4928,  4932,  4933,  4934,  4935,   106,   107,  4936,  4940,
    4937,  4938,  4939,  3286,  3287,  4947,  3860,  4948,  4949,  3288,
    3289,  3290,  3291,  3292,  3293,  3294,  3295,  3861,  3862,  3863,
    3864,  3865,  3866,  4950,  4951,  3867,  3868,  3869,  3870,  4952,
    4953,   108,   105,   109,  4954,  4955,  2335,  4956,   106,   107,
    1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  3300,   108,
     105,   109,  4962,  4965,  2519,  4968,   106,   107,  4958,  3301,
    3302,  3303,  3304,  3305,  3306,  4971,  3875,  4974,  4977,  4980,
     108,  4983,   109,  4986,  4989,  3283,  4991,  3876,  3877,  3878,
    3879,  3880,  3881,   105,  4993,  3882,  3883,  3884,  3885,   106,
     107,  1227,  1228,  1229,  1230,  1231,  1232,  1233,  1234,  3964,
    5002,  5003,  4995,   108,  4996,   109,  4997,  5004,  3296,  5005,
    3965,  3966,  3967,  3968,  3969,  3970,  5006,  5007,  3971,  3972,
    3973,  3974,  5008,   108,   105,   109,  5009,  5010,  3871,  5011,
     106,   107,   105,  5013,  5017,  5020,  5023,  5026,   106,   107,
    3979,  5046,  5029,  5032,  5035,  5038,  5041,  5044,  3152,  5048,
    5050,  3980,  3981,  3982,  3983,  3984,  3985,  5051,  5052,  3986,
    3987,  3988,  3989,  5053,  5058,   108,  5054,   109,  5055,  3307,
    3308,  3153,  3154,  3155,  3156,  3157,  3158,  3159,  3160,  5056,
    5059,  5130,  5060,   108,  5061,   109,  5062,  5063,  3886,  1235,
    1236,  1237,  1238,  1239,  1240,  1241,  1242,  5064,  5065,  5066,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    5067,  5068,  5072,  5073,  5082,  5074,   108,  5075,   109,  5076,
    5077,  3975,  2181,  2182,  2183,  2184,  2185,  2186,  2187,  2188,
    5078,     3,  5079,     4,     5,     6,     7,  5080,  5081,     8,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
    5090,  5091,  5092,  5093,  1616,  5094,  5095,   108,  5097,   109,
    5101,  5104,  3990,  5107,  5110,   108,  5113,   109,  5116,  5119,
    3161,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5122,  5125,  2781,  2782,
    2783,  2784,  2785,  2786,  2787,  2788,  5128,  5132,  2906,  2907,
    2908,  2909,  2910,  2911,  2912,  2913,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  1243,  1244,  1245,  1246,
    1247,  1248,  1249,  1250,  5134,  5135,  5136,  5141,  5629,  5630,
    5631,  5632,  5633,  5634,  5635,  5636,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5142,  5143,  5144,  5145,
    1985,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5146,  5147,  5148,  5149,  1990,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5150,  5152,  5156,  5159,
    2103,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5162,  5165,  5168,  5171,  2108,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5174,  5177,  5180,  5183,
    2113,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5185,  5187,  5189,  5193,  2118,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5190,  5191,  5225,  5197,
    2881,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5226,  5227,  5229,  5266,  2886,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5233,  5262,  5263,  5264,
    2891,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5270,  5298,  5299,  5300,  2896,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5302,  5306,  5335,  5336,
    2901,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5337,  5339,  5343,  5371,  3110,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5372,  5373,  5375,  5408,
    3115,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5379,  5409,  5410,  5411,  3120,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5412,  5413,  5414,  5415,
    3125,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5416,  5417,  5418,  5419,  3130,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5420,  5421,  5423,  5427,
    3135,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5456,  5457,  5458,  5460,  3140,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5464,  5493,  5494,  5495,
    3267,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5497,  5498,  5499,  5500,  3938,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5501,  5502,  5503,  5504,
    4411,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5505,  5506,  5507,  5517,  5195,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5518,  5519,  5520,  5521,
    5196,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5522,  5523,  5524,  5525,  5201,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5526,  5527,  5536,  5537,
    5202,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5538,  5539,  5540,  5541,  5203,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5542,  5543,  5544,  5545,
    5204,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5546,  5547,  5548,  5549,  5205,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5550,  5551,  5552,  5571,
    5206,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5577,  5582,  5583,  5584,  5207,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5585,  5586,  5587,  5588,
    5208,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5589,  5590,  5591,  5592,  5209,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5602,  5603,  5604,  5605,
    5210,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5606,  5607,  5608,  5609,  5211,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5610,  5611,  5612,  5622,
    5212,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5623,  5624,  5625,  5626,  5213,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5627,  5628,  5637,  5638,
    5214,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5639,  5640,  5641,  5642,  5215,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5643,  5644,  5645,  5646,
    5216,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5647,  5648,  5649,  5650,  5217,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5651,  5652,  5653,  5654,
    5218,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5655,  5656,  5657,  5658,  5219,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5659,  5660,  5661,  5662,
    5223,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5663,  5664,  5665,  5666,  5224,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5667,  5668,  5669,  5670,
    5231,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5671,  5672,  5673,  5674,  5232,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5675,  5676,  5677,  5678,
    5237,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5679,  5680,  5681,  5682,  5238,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5683,  5684,  5685,  5686,
    5239,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5687,  5688,  5689,  5690,  5240,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5691,  5692,  5693,  5694,
    5241,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5695,  5696,  5697,  5698,  5242,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5699,  5700,  5701,  5702,
    5243,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5703,  5704,  5705,  5706,  5244,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5707,  5708,  5709,  5710,
    5245,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5711,  5712,  5713,  5714,  5246,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5715,  5716,  5717,  5718,
    5247,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5719,  5720,  5721,  5722,  5248,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5723,  5724,  5725,  5729,
    5249,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5730,  5731,  5732,  5733,  5250,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5734,  5735,  5736,  5737,
    5251,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5738,  5739,  5740,  5741,  5252,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5742,  5743,  5744,  5745,
    5253,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5746,  5747,  5748,  5749,  5254,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5750,  5751,  5752,  5753,
    5255,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5754,  5755,  5756,  5757,  5256,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5758,  5759,  5760,  5761,
    5260,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5762,  5763,  5764,  5765,  5261,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5766,  5767,  5768,  5769,
    5268,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5770,  5771,  5772,  5773,  5269,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5774,  5775,  5776,  5777,
    5274,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5778,  5779,  5780,  5781,  5275,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5782,  5783,  5784,  5785,
    5276,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5786,  5787,  5788,  5789,  5277,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5790,  5791,  5792,  5793,
    5278,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5794,  5795,  5796,  5797,  5279,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5798,  5799,  5800,  5801,
    5280,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5802,  5803,  5804,  5805,  5281,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5806,  5807,  5808,  5809,
    5282,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5810,  5811,  5812,  5813,  5283,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5814,  5815,  5816,  5817,
    5284,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5818,  5819,  5820,  5821,  5285,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5822,  5823,  5824,  5849,
    5286,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5851,  5855,  5856,  5857,  5287,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5858,  5860,  5861,  5862,
    5288,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5863,  5864,  5865,  5866,  5289,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5867,  5868,  5869,  5870,
    5290,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5872,  5876,  5882,  5888,  5291,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5894,  5900,  5906,  5912,
    5292,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5918,  5924,  5930,  5936,  5296,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5940,  5941,  5942,  5943,
    5297,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5947,  5948,  5949,  5951,  5304,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5952,  5953,  5954,  5955,
    5305,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5956,  5957,  5958,  5959,  5310,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5960,  5961,  5963,  5967,
    5311,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  5973,  5979,  5985,  5991,  5312,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  5997,  6003,  6009,  6015,
    5313,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6021,  6027,  6034,  6035,  5314,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6036,  6038,  6042,  6071,
    5315,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6072,  6073,  6075,  6108,  5316,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6079,  6109,  6110,  6111,
    5317,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6112,  6113,  6114,  6115,  5318,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6116,  6117,  6118,  6143,
    5319,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6144,  6145,  6146,  6147,  5320,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6148,  6149,  6150,  6151,
    5321,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6152,  6153,  6154,  6155,  5322,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6156,  6157,  6158,  6159,
    5323,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6160,  6161,  6162,  6163,  5324,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6164,  6165,  6191,  6195,
    5325,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6224,  6225,  6226,  6228,  5326,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6232,  6261,  6262,  6263,
    5327,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6264,  6265,  6266,  6267,  5328,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6268,  6269,  6270,  6271,
    5329,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6272,  6273,  6274,  6275,  5333,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6276,  6277,  6278,  6279,
    5334,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6280,  6281,  6282,  6283,  5341,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6284,  6286,  6291,  6296,
    5342,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6300,  6329,  6330,  6331,  5347,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6333,  6337,  6366,  6367,
    5348,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6368,  6369,  6370,  6371,  5349,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6373,  6378,  6384,  6388,
    5350,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6417,  6418,  6419,  6421,  5351,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6425,  6454,  6455,  6456,
    5352,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6459,  6460,  6461,  6462,  5353,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6464,  6477,  6478,  6479,
    5354,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6480,  6482,  6495,  6496,  5355,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6497,  6498,  6500,  6513,
    5356,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6514,  6515,  6516,  6518,  5357,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6531,  6532,  6533,  6534,
    5358,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6536,  6549,  6550,  6551,  5359,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6552,  6554,  6565,  6566,
    5360,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6567,  6568,  6571,  6572,  5361,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6573,  6574,  6576,  6589,
    5362,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6590,  6591,  6592,  6594,  5363,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6606,  6607,  6608,  6609,
    5364,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6610,  6611,  6612,  6613,  5365,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6614,  6615,  6616,  6620,
    5369,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6622,  6623,  6624,  6625,  5370,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6628,  6629,  6630,  6631,
    5377,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6632,  6633,  6634,  6635,  5378,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6636,  6637,  6638,  6642,
    5383,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6644,  6645,  6646,  6647,  5384,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6649,  6650,  6651,  6652,
    5385,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6669,  6670,  6671,  6672,  5386,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6673,  6674,  6675,  6676,
    5387,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6678,  6679,  6680,  6681,  5388,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6682,  6683,  6684,  6685,
    5389,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6686,  6687,  6688,  6692,  5390,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6694,  6695,  6696,  6697,
    5391,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6700,  6701,  6702,  6703,  5392,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6704,  6705,  6706,  6707,
    5393,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6708,  6709,  6710,  6714,  5394,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6716,  6717,  6718,  6719,
    5395,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6721,  6722,  6723,  6724,  5396,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6725,  6726,  6727,  6728,
    5397,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6729,  6730,  6731,  6732,  5398,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6733,  6734,  6735,  6736,
    5399,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6745,  6746,  6747,  6756,  5400,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6748,  6749,  6750,  6751,
    5401,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6752,  6753,  6754,  6755,  5402,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6757,  6758,  6759,  6760,
    5406,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6761,  6762,  6763,  6764,  5407,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6765,  6766,  6767,  6768,
    5425,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6769,  6770,  6771,  6772,  5426,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6773,  6774,  6775,  6776,
    5431,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6777,  6778,  6779,  6780,  5432,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6781,  6782,  6783,  6784,
    5433,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6785,  6786,  6787,  6790,  5434,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6794,  6795,  6796,  6797,
    5435,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6798,  6799,  6800,  6801,  5436,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6802,  6803,  6804,  6805,
    5437,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6806,  6807,  6808,  6809,  5438,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6810,  6811,  6812,  6813,
    5439,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6814,  6815,  6816,  6817,  5440,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6818,  6819,  6820,  6821,
    5441,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6822,  6823,  6824,  6825,  5442,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6826,  6827,  6828,  6829,
    5443,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6830,  6831,  6832,  6833,  5444,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6834,  6835,  6836,  6837,
    5445,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6838,  6839,  6840,  6841,  5446,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6851,  6855,  6856,  6857,
    5447,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6858,  6859,  6860,  6861,  5448,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6862,  6863,  6864,  6865,
    5449,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6866,  6867,  6868,  6869,  5450,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6870,  6871,  6872,  6873,
    5454,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6874,  6875,  6876,  6877,  5455,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6878,  6879,  6880,  6881,
    5462,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6882,  6883,  6884,  6885,  5463,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6886,  6887,  6888,  6889,
    5468,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6890,  6891,  6892,  6893,  5469,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6894,  6895,  6896,  6897,
    5470,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6898,  6899,  6909,  6910,  5471,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6911,  6912,  6914,  6927,
    5472,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6928,  6929,  6930,  6932,  5473,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6943,  6944,  6945,  6946,
    5474,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6947,  6948,  6949,  6950,  5475,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6951,  6952,  6953,  6954,
    5476,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6955,  6956,  6957,  6958,  5477,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6959,  6960,  6961,  6962,
    5478,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6963,  6964,  6965,  6966,  5479,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6967,  6968,  6969,  6970,
    5480,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6971,  6972,  6973,  6974,  5481,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6975,  6976,  6977,  6978,
    5482,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6979,  6980,  6981,  6982,  5483,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6983,  6984,  6985,  6986,
    5484,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6987,  6988,  6989,  6990,  5485,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  6993,  6994,  6995,  6996,
    5486,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  6998,  7011,  7012,  7013,  5487,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7014,  7016,  7027,  7028,
    5491,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7029,  7030,  7031,  7032,  5492,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7033,  7034,  7037,  7038,
    5569,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7039,  7040,  7042,  7055,  5570,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7056,  7057,  7058,  7060,
    5575,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7071,  7072,  7073,  7074,  5576,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7075,  7076,  7077,  7078,
    5850,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7081,  7082,  7083,  7084,  5875,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7086,  7099,  7100,  7101,
    5880,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7102,  7104,  7115,  7116,  5881,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7117,  7121,  7124,  7127,
    5886,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7129,  7130,  7131,  7135,  5887,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7138,  7141,  7143,  7144,
    5892,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7145,  7149,  7152,  7155,  5893,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7157,  7158,  7159,  7163,
    5898,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7166,  7169,  7171,  7172,  5899,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7173,  7177,  7180,  7183,
    5904,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7185,  7186,  7187,  7191,  5905,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7194,  7197,  7199,  7200,
    5910,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7201,  7202,  7203,  7204,  5911,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7208,  7211,  7214,  7216,
    5916,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7217,  7218,  7222,  7225,  5917,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7228,  7230,  7231,  7232,
    5922,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7233,  7234,  7236,  7237,  5923,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7238,  7239,  7240,  7241,
    5928,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7242,  7243,  7244,  7245,  5929,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7247,  7248,  7249,  7250,
    5934,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7251,  7252,  7253,  7254,  5935,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7255,  7256,  7257,  7258,
    5946,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7259,  7260,  7261,  7262,  5966,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7263,  7264,  7265,  7267,
    5971,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7268,  7269,  7270,  7271,  5972,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7272,  7273,  7274,  7275,
    5977,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7276,  7278,  7279,  7280,  5978,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7281,  7282,  7283,  7284,
    5983,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7285,  7286,  7287,  7288,  5984,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7289,  7290,  7315,  7316,
    5989,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7317,  7318,  7319,  7320,  5990,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7321,  7322,  7347,  7348,
    5995,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7323,  7324,  7349,  7350,  5996,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7325,  7326,  7327,  7328,
    6001,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7329,  7330,  7331,  7332,  6002,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7333,  7334,  7335,  7336,
    6007,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7337,  7338,  7339,  7340,  6008,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7341,  7342,  7343,  7344,
    6013,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7345,  7346,  7351,  7352,  6014,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7353,  7354,  7355,  7356,
    6019,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7357,  7358,  7359,  7360,  6020,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7361,  7362,  7363,  7364,
    6025,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7365,  7366,  7367,  7368,  6026,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7369,  7370,  7371,  7372,
    6033,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7373,  7374,  7375,  7376,  6040,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7377,  7378,  7379,  7380,
    6041,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7381,  7382,  7383,  7384,  6046,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7385,  7386,  7387,  7388,
    6047,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7389,  7391,  7393,  7395,  6048,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7397,  7398,  7399,  7400,
    6049,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7401,  7402,  7403,  7404,  6050,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7405,  7406,  7407,  7408,
    6051,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7409,  7410,  7411,  7412,  6052,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7413,  7414,  7415,  7416,
    6053,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7417,  7418,  7419,  7420,  6054,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7421,  7422,  7423,  7424,
    6055,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7425,  7426,  7427,  7428,  6056,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7429,  7430,  7431,  7432,
    6057,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7433,  7435,  7437,  7439,  6058,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7441,  7442,  7443,  7447,
    6059,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7450,  7453,  7455,  7456,  6060,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7457,  7461,  7464,  7467,
    6061,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7469,  7470,  7471,  7475,  6062,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7478,  7481,  7483,  7484,
    6063,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7485,  7489,  7492,  7495,  6064,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7497,  7498,  7499,  7500,
    6065,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7501,  7502,  7503,  7504,  6069,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7505,  7509,  7512,  7515,
    6070,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7517,  7518,  7519,  7523,  6077,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7526,  7529,  7531,  7532,
    6078,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7533,  7534,  7535,  7536,  6083,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7537,  7538,  7539,  7543,
    6084,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7546,  7549,  7551,  7552,  6085,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7553,  7557,  7560,  7563,
    6086,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7613,  7614,  7615,  7616,  6087,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7617,  7618,  7619,  7620,
    6088,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7621,  7622,  7623,  7624,  6089,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7625,  7626,  7627,  7628,
    6090,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7629,  7630,  7631,  7632,  6091,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7633,  7634,  7635,  7636,
    6092,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7637,  7638,  7639,  7640,  6093,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7641,  7642,  7643,  7644,
    6094,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7645,  7646,  7647,  7648,  6095,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7649,  7650,  7651,  7652,
    6096,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7653,  7654,  7655,  7656,  6097,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7657,  7658,  7659,  7660,
    6098,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7661,  7662,  7663,  7664,  6099,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7665,  7666,  7667,  7668,
    6100,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7669,  7670,  7671,  7672,  6101,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7673,  7674,  7675,  7676,
    6102,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7677,  7678,  7679,  7680,  6106,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7681,  7682,  7683,  7687,
    6107,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7688,  7689,  7741,  7742,  6193,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7743,  7744,  7745,  7746,
    6194,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,  7747,  7748,  7749,  7750,  6199,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,  7751,  7752,   112,     0,
    6200,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6201,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6202,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6203,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6204,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6205,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6206,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6207,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6208,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6209,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6210,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6211,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6212,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6213,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6214,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6215,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6216,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6217,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6218,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6222,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6223,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6230,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6231,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6236,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6237,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6238,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6239,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6240,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6241,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6242,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6243,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6244,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6245,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6246,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6247,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6248,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6249,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6250,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6251,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6252,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6253,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6254,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6255,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6259,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6260,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6285,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6290,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6298,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6299,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6304,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6305,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6306,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6307,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6308,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6309,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6310,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6311,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6312,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6313,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6314,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6315,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6316,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6317,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6318,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6319,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6320,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6321,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6322,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6323,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6327,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6328,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6335,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6336,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6341,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6342,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6343,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6344,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6345,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6346,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6347,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6348,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6349,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6350,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6351,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6352,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6353,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6354,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6355,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6356,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6357,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6358,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6359,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6360,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6364,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6365,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6372,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6377,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6382,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6386,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6387,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6392,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6393,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6394,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6395,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6396,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6397,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6398,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6399,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6400,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6401,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6402,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6403,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6404,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6405,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6406,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6407,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6408,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6409,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6410,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6411,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6415,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6416,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6423,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6424,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6429,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6430,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6431,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6432,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6433,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6434,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6435,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6436,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6437,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6438,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6439,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6440,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6441,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6442,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6443,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6444,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6445,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6446,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6447,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6448,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6452,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6453,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6457,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6458,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6475,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6476,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6493,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6494,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6511,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6512,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6529,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6530,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6547,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6548,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6569,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6570,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6587,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6588,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6653,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6654,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6655,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6656,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6657,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6658,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6659,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6660,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6661,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6662,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6663,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6664,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6665,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6666,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6667,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6668,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6788,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6789,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6849,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6850,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6907,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6908,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6925,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6926,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    6991,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  6992,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7009,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7010,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7035,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7036,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7053,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7054,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7079,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7080,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7097,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7098,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7118,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7119,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7132,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7133,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7146,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7147,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7160,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7161,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7174,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7175,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7188,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7189,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7205,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7206,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7219,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7220,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7390,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7434,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7444,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7445,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7458,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7459,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7472,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7473,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7486,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7487,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7506,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7507,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7520,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7521,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7540,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7541,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7554,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7555,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7565,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7566,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7567,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7568,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7569,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7570,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7571,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7572,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7573,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7574,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7575,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7576,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7577,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7578,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7579,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7580,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7581,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7582,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7583,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7584,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7585,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7586,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7587,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7588,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7589,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7590,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7591,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7592,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7593,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7594,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7595,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7596,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7597,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7598,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7599,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7600,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7601,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7602,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7603,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7604,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7605,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7606,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7607,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7608,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7609,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7610,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7611,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7612,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7684,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7685,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7686,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7690,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7691,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7692,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7693,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7694,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7695,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7696,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7697,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7698,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7699,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7700,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7701,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7702,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7703,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7704,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7705,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7706,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7707,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7708,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7709,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7710,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7711,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7712,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7713,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7714,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7715,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7716,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7717,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7718,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7719,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7720,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7721,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7722,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7723,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7724,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7725,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7726,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7727,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7728,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7729,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7731,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7732,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7733,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7734,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7735,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7736,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7737,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7738,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,     0,     0,     0,     0,
    7739,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,     0,     0,     0,     0,  7740,  1251,  1252,  1253,  1254,
    1255,  1256,  1257,  1258,  1344,  1345,  1346,  1347,  1348,  1349,
    1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,
    1360,  1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,
    1370,  1371,  1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,
    1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,
    1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,  1399,
    1400,  1401,  1402,  1403,  1404,  1405,  1406,  1407,  1408,  1409,
    1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,
    1420,  1421,  1422,  1423,  4003,  4004,  4005,  4006,  4007,  4008,
    4009,  4010,  4011,  4012,  4013,  4014,  4015,  4016,  4017,  4018,
    4019,  4020,  4021,  4022,  4023,  4024,  4025,  4026,  4027,  4028,
    4029,  4030,  4031,  4032,  4033,  4034,  4035,  4036,  4037,  4038,
    4039,  4040,  4041,  4042,  4043,  4044,  4045,  4046,  4047,  4048,
    4049,  4050,  4051,  4052,  4053,  4054,  4055,  4056,  4057,  4058,
    4059,  4060,  4061,  4062,  4063,  4064,  4065,  4066,  4067,  4068,
    4069,  4070,  4071,  4072,  4073,  4074,  4075,  4076,  4077,  4078,
    4079,  4080,  4081,  4082,  4173,  4174,  4175,  4176,  4177,  4178,
    4179,  4180,  4735,  4736,  4737,  4738,  4739,  4740,  4741,  4742,
    4774,  4775,  4776,  4777,  4778,  4779,  4780,  4781,  5825,  5826,
    5827,  5828,  5829,  5830,  5831,  5832,  5833,  5834,  5835,  5836,
    5837,  5838,  5839,  5840,  5841,  5842,  5843,  5844,  5845,  5846,
    5847,  5848,  6119,  6120,  6121,  6122,  6123,  6124,  6125,  6126,
    6127,  6128,  6129,  6130,  6131,  6132,  6133,  6134,  6135,  6136,
    6137,  6138,  6139,  6140,  6141,  6142,  6166,  6167,  6168,  6169,
    6170,  6171,  6172,  6173,  6174,  6175,  6176,  6177,  6178,  6179,
    6180,  6181,  6182,  6183,  6184,  6185,  6186,  6187,  6188,  6189,
    6737,  6738,  6739,  6740,  6741,  6742,  6743,  6744,  7291,  7292,
    7293,  7294,  7295,  7296,  7297,  7298,  7299,  7300,  7301,  7302,
    7303,  7304,  7305,  7306,  7307,  7308,  7309,  7310,  7311,  7312,
    7313,  7314
};

static const yytype_int16 yycheck[] =
{
       9,    10,    11,    12,    13,    14,    33,    16,    17,    18,
      19,    20,     0,    21,    14,    17,    25,    26,    17,    17,
      16,    30,    31,    32,    17,    35,    35,    36,    37,    38,
      39,    40,    33,    36,    37,    38,    33,    46,    47,    48,
      49,    33,    33,    40,    53,    54,    33,    33,    33,    58,
      59,    17,    61,    62,    63,    64,    17,    24,    67,    68,
      69,    70,    33,    72,    73,    74,    75,    24,    77,    78,
      79,    80,    17,    33,    83,    84,    33,    33,    87,    88,
      40,    24,    24,    92,    93,     8,     9,    10,    11,    12,
      17,    33,    33,   102,    33,    33,   105,    17,    33,   108,
      36,    37,    38,    33,    17,   114,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    33,   145,   128,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,    17,   140,   142,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,   145,   144,   144,   156,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   145,   145,
     145,   170,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    33,    33,   145,   184,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   145,   145,
     199,    17,   201,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   145,   145,    33,   215,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    36,    37,    38,
     229,    33,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    33,    33,   243,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    36,    37,    38,    17,   146,
     147,    33,   261,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   146,   147,   274,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     8,   146,   147,    17,
      33,   290,    14,    15,   145,   145,    33,    36,    37,    38,
      33,   146,   147,   144,   303,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,   146,   147,   316,     8,   318,
     319,    36,    37,    38,    14,    15,    35,   145,    17,   146,
     147,   144,   331,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   145,    35,   144,   345,   147,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    35,   144,
     359,   147,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   371,   145,   144,   374,   147,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   144,   144,   147,
     144,   144,   391,   144,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    35,    35,   405,   147,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   144,   141,
     147,   143,    35,   144,   146,   424,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,   144,   437,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   147,
     144,   141,   451,   143,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,   144,   144,   465,    36,    37,    38,
     144,   144,    24,    36,    37,    38,   144,   147,   144,   144,
     479,    33,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   147,   144,   493,   144,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    36,    37,    38,
     509,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   144,   522,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    36,    37,    38,   536,   147,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    17,
     144,   550,   147,    36,    37,    38,   144,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   566,    24,    24,
     147,    17,   144,    36,    37,    38,   144,    33,    33,   144,
     144,   580,   146,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   145,   144,   144,   595,   146,   144,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   144,
     609,   144,   144,    17,    25,    26,    27,    28,    29,    30,
      31,    32,   144,   144,   623,   146,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,   144,   637,   146,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      24,     8,   144,    24,   653,   144,   144,    14,    15,    33,
     144,   147,    33,   144,   144,   144,   144,   146,   667,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   144,
     144,     8,   146,   144,   683,   144,   144,    14,    15,   145,
     145,    25,    26,    27,    28,    29,    30,    31,    32,   144,
     146,   700,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    36,    37,    38,   714,    36,    37,    38,    36,
      37,    38,   142,   144,    25,    26,    27,    28,    29,    30,
      31,    32,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   146,   742,   144,   144,   745,   144,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    36,    37,
      38,   760,    17,    36,    37,    38,   144,   144,    24,   146,
      17,   145,   144,    24,   145,   144,   775,    33,    36,    37,
      38,   144,    33,   146,   141,   144,   143,    17,   144,   146,
     144,   790,   144,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   144,    24,   144,   805,    17,    24,    24,
      17,    24,   146,    33,   141,   144,   143,    33,    33,   146,
      33,   820,    36,    37,    38,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,   834,    25,    26,    27,    28,
      29,    30,    31,    32,   144,   146,   144,    25,    26,    27,
      28,    29,    30,    31,    32,    36,    37,    38,   144,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   144,
     879,    25,    26,    27,    28,    29,    30,    31,    32,   145,
      17,   146,    17,    17,   145,   894,    17,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    17,    17,   908,
     909,    17,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    36,    37,    38,   145,    17,    35,    17,   145,
     145,    17,   145,    36,    37,    38,   146,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   966,   146,    36,
      37,    38,    17,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    36,    37,    38,    36,    37,    38,   988,
     989,   990,   991,   992,    17,   994,    36,    37,    38,    36,
      37,    38,   146,    36,    37,    38,    17,    36,    37,    38,
     144,    17,   146,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    36,    37,    38,    17,    17,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    17,    17,
     146,    17,    17,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    17,    35,   146,   144,    17,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    24,    36,
      37,    38,    17,    36,    37,    38,   144,    33,   144,   144,
     146,   144,    24,    24,    36,    37,    38,  1086,   144,   144,
     146,    33,    33,    36,    37,    38,   144,   144,   144,    35,
     146,   144,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,
    1109,  1110,  1111,  1112,   144,    35,   146,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    36,    37,    38,
    1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,  1137,  1138,
    1139,    36,    37,    38,   144,  1144,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   146,    36,    37,    38,
    1159,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   146,    36,    37,    38,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   146,   144,    17,   145,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   146,    17,   145,   145,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    36,    37,    38,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    36,    37,    38,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    36,    37,    38,    17,
      17,    10,    11,    12,   144,    36,    37,    38,   144,   144,
     146,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    36,    37,    38,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,   144,   144,   146,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    36,    37,    38,   146,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    36,    37,    38,   144,   146,
     144,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    36,    37,    38,   146,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    36,    37,    38,   146,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      36,    37,    38,    17,   146,   144,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    36,    37,    38,   146,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    36,    37,    38,   144,    17,    25,    26,    27,    28,
      29,    30,    31,    32,   146,   144,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    36,    37,    38,   146,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    24,   144,   144,   146,    17,  1435,    36,    37,    38,
      33,    36,    37,    38,   144,    17,   144,    17,   146,    17,
      17,  1450,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    17,    17,   146,    17,    17,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   144,    35,   146,
      17,    17,     8,    36,    37,    38,    17,    35,    14,    15,
      17,   144,    17,   146,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    36,    37,    38,   146,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    36,    37,    38,   146,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    24,     8,    24,
      17,    24,    24,    17,    14,    15,    33,    35,    33,   146,
      33,    33,   145,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    17,   146,    17,    17,    17,    36,    37,
      38,  1570,  1571,    17,  1573,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,     8,    24,  1588,
      17,    17,    17,    14,    15,   146,    35,    33,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    17,
     146,    17,    24,    17,    17,   141,    17,   143,  1617,  1618,
     146,    33,  1621,    36,    37,    38,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,  1636,    17,   146,
      17,    17,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    24,    17,   146,    17,    17,    17,   145,    24,
     145,    33,   145,   145,  1663,    36,    37,    38,    33,   146,
      24,   141,    17,   143,    17,  1674,   146,   144,  1677,    33,
    1679,  1680,   144,  1682,  1683,   144,  1685,  1686,   144,  1688,
    1689,   144,  1691,    24,  1693,  1694,   146,  1696,  1697,   144,
    1699,  1700,    33,  1702,  1703,    35,  1705,   144,  1707,   145,
    1709,   144,    24,    35,   144,  1714,   144,    35,    24,   146,
     141,    33,   143,   147,   144,   146,  1725,    33,   144,  1728,
      24,  1730,  1731,   145,  1733,  1734,    24,  1736,  1737,    33,
    1739,  1740,   146,  1742,  1743,    33,  1745,  1746,    24,  1748,
    1749,   144,  1751,  1752,   144,  1754,  1755,    33,  1757,   144,
    1759,    24,  1761,    36,    37,    38,   144,  1766,    35,   146,
      33,   144,   147,   145,    36,    37,    38,   144,  1777,    35,
     145,  1780,    17,  1782,  1783,   146,  1785,  1786,   144,  1788,
    1789,   145,  1791,  1792,   144,  1794,    24,  1796,  1797,    24,
    1799,  1800,   144,  1802,  1803,    33,  1805,  1806,    33,  1808,
     144,  1810,   144,  1812,   145,    36,    37,    38,  1817,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,  1828,
     144,   144,  1831,   145,  1833,  1834,    24,  1836,  1837,   145,
    1839,  1840,   144,  1842,  1843,    33,  1845,  1846,   144,  1848,
    1849,   145,  1851,  1852,   144,  1854,  1855,   145,  1857,  1858,
     144,  1860,   144,  1862,   144,  1864,    36,    37,    38,   145,
    1869,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,  1880,   145,   144,  1883,    24,  1885,  1886,    24,  1888,
    1889,   144,  1891,  1892,    33,  1894,  1895,    33,  1897,   144,
    1899,  1900,   144,  1902,  1903,   144,  1905,  1906,   144,  1908,
    1909,   144,  1911,   144,  1913,    24,  1915,   145,    24,    35,
     145,  1920,    24,    17,    33,    24,   144,    33,    36,    37,
      38,    33,  1931,   144,    33,  1934,   144,  1936,  1937,   144,
    1939,  1940,   144,  1942,  1943,   144,  1945,  1946,   144,  1948,
    1949,   144,  1951,  1952,   144,  1954,  1955,   145,  1957,  1958,
     144,  1960,  1961,   144,  1963,   144,  1965,   144,  1967,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    36,
      37,    38,   144,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    36,    37,    38,  1996,    17,    36,
      37,    38,   144,    36,    37,    38,   145,   144,  2007,   145,
     144,  2010,   144,  2012,  2013,   144,  2015,  2016,    24,  2018,
    2019,    24,  2021,  2022,   144,  2024,  2025,    33,  2027,  2028,
      33,  2030,  2031,   144,  2033,  2034,   145,  2036,  2037,   145,
    2039,   144,  2041,   145,  2043,    17,   145,   144,   144,  2048,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    2059,    24,    17,  2062,    17,  2064,  2065,    24,  2067,  2068,
      33,  2070,  2071,    17,  2073,  2074,    33,  2076,  2077,    35,
    2079,  2080,    17,  2082,  2083,    17,  2085,  2086,    17,  2088,
    2089,   144,  2091,    17,  2093,    17,  2095,    17,    24,    24,
    2099,    24,  2101,    36,    37,    38,    17,    33,    33,    17,
      33,    17,   146,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    36,    37,    38,   146,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   145,
      35,    17,   145,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    17,  2154,    17,    35,    17,    36,
      37,    38,    17,  2162,    24,    35,  2165,    35,    24,    35,
      24,    17,    24,    33,    24,  2174,    24,    33,  2177,    33,
    2179,    33,   145,    33,    17,    33,    17,    17,   145,    17,
    2189,    17,    17,   146,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    36,    37,    38,    17,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   145,
     145,    17,   145,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    36,    37,    38,    17,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    36,
      37,    38,    17,    17,    36,    37,    38,   146,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    36,
      37,    38,   146,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    17,   145,    17,   146,    17,   145,
      17,   145,    17,   145,    17,   145,  2295,   145,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    36,    37,
      38,    17,    17,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    17,  2323,  2324,    17,    17,    25,    26,
      27,    28,    29,    30,    31,    32,    17,   146,  2337,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    2349,    17,   146,  2352,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,  2364,    17,   146,  2367,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    2379,    17,   146,  2382,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,  2394,    24,    24,  2397,    17,
      24,    17,   146,    24,    35,    33,    33,   144,   144,    33,
    2409,    24,    33,  2412,    24,    24,    17,   146,    17,    17,
      33,    17,    17,    33,    33,  2424,    17,    17,  2427,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    2439,   146,    17,  2442,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,  2454,   146,   144,  2457,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    2469,    17,    24,  2472,    17,    24,    36,    37,    38,    17,
      17,    33,   144,   146,    33,  2484,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   146,   144,
      17,    36,    37,    38,  2503,    36,    37,    38,  2507,  2508,
      36,    37,    38,   146,    36,    37,    38,   145,   145,   144,
      24,   145,  2521,    35,   145,    36,    37,    38,   146,    33,
     144,    17,   145,   144,  2533,   145,   145,  2536,   144,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,  2548,
     144,   144,  2551,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,  2563,    24,    24,  2566,    17,    35,
     144,    24,   144,   146,    33,    33,    36,    37,    38,  2578,
      33,   144,  2581,   144,    36,    37,    38,   144,   146,   144,
     144,    24,     8,   145,  2593,    35,   145,  2596,    14,    15,
      33,    35,    24,   146,    36,    37,    38,    17,    24,  2608,
     144,    33,  2611,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,  2623,    41,    42,  2626,   144,   146,
     144,    47,    48,    49,    50,    51,    52,    53,    54,  2638,
      17,   145,  2641,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,  2653,    17,    35,  2656,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,  2668,
      36,    37,    38,    17,  2673,    36,    37,    38,    17,  2678,
      17,    17,   146,    36,    37,    38,   145,   145,    17,    17,
    2689,    17,   145,  2692,    24,  2694,  2695,   146,  2697,  2698,
      17,  2700,  2701,    33,  2703,  2704,    17,  2706,  2707,    24,
    2709,  2710,   145,  2712,  2713,    17,  2715,  2716,    33,  2718,
    2719,    17,  2721,   145,  2723,   141,  2725,   143,    17,   145,
     146,  2730,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,  2741,    17,    17,  2744,    17,  2746,  2747,    17,
    2749,  2750,    17,  2752,  2753,   144,  2755,  2756,    24,  2758,
    2759,   144,  2761,  2762,   144,  2764,  2765,    33,  2767,  2768,
      24,  2770,  2771,    17,  2773,    17,  2775,    17,  2777,    33,
      36,    37,    38,    36,    37,    38,    17,   146,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    36,
      37,    38,   146,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    17,   145,    17,    17,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    17,
     145,    17,    17,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    36,    37,    38,    17,    17,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    36,
      37,    38,    17,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    17,   146,    17,    17,    17,   145,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,   145,    17,    17,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    36,    37,    38,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    36,    37,    38,    17,    17,    17,    17,    17,    35,
      17,    17,   146,    17,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    17,    17,   146,    17,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,    35,   146,    17,    17,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    17,    17,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    17,    17,
      17,    17,   146,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    17,    17,    17,    17,   146,  3007,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,  3018,
      35,    17,  3021,   146,  3023,  3024,    24,  3026,  3027,    17,
    3029,  3030,    17,  3032,  3033,    33,  3035,  3036,   146,  3038,
    3039,    17,  3041,  3042,    17,  3044,  3045,    17,  3047,  3048,
     144,  3050,    35,  3052,   146,  3054,    24,    24,    17,    24,
    3059,    17,    17,    17,    17,    33,    33,   144,    33,   144,
      17,  3070,    35,    35,  3073,    17,  3075,  3076,   146,  3078,
    3079,   144,  3081,  3082,   144,  3084,  3085,    35,  3087,  3088,
      24,  3090,  3091,   146,  3093,  3094,   144,  3096,  3097,    33,
    3099,  3100,    17,  3102,   144,  3104,   144,  3106,   144,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   144,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,    17,    17,    17,   144,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,   144,  3145,   145,    17,   144,
     144,   144,   144,  3152,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,   144,  3164,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,  3175,   145,   145,  3178,
     145,  3180,  3181,    24,  3183,  3184,   144,  3186,  3187,    24,
    3189,  3190,    33,  3192,  3193,   144,  3195,  3196,    33,  3198,
    3199,   144,  3201,  3202,   144,  3204,  3205,   144,  3207,   144,
    3209,   145,  3211,   144,   144,   144,    17,  3216,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,  3227,    24,
      17,  3230,    24,  3232,  3233,    24,  3235,  3236,    33,  3238,
    3239,    33,  3241,  3242,    33,  3244,  3245,   144,  3247,  3248,
     144,  3250,  3251,   144,  3253,  3254,   144,  3256,  3257,    35,
    3259,   144,  3261,   144,  3263,   144,   144,   144,   144,   144,
      24,   144,    24,  3272,    24,    35,   144,   144,    24,    33,
      24,    33,   144,    33,   144,   144,  3285,    33,   144,    33,
     144,   144,   144,   144,   144,   144,   144,   144,   144,  3298,
     144,  3300,   144,    35,   145,    35,    34,   144,  3307,   147,
     145,  3310,    34,  3312,  3313,   147,  3315,  3316,   147,  3318,
    3319,   147,  3321,  3322,   147,  3324,  3325,   147,  3327,  3328,
     147,  3330,  3331,   147,  3333,  3334,    24,  3336,  3337,   147,
    3339,   147,  3341,    24,  3343,    33,    24,   147,   147,  3348,
     145,   147,    33,   145,   147,    33,   145,   147,    24,   144,
    3359,   147,   144,  3362,   147,  3364,  3365,    33,  3367,  3368,
     147,  3370,  3371,    24,  3373,  3374,   147,  3376,  3377,   147,
    3379,  3380,    33,  3382,  3383,   147,  3385,  3386,   147,  3388,
    3389,   145,  3391,   145,  3393,   145,  3395,   144,   147,   145,
    3399,   145,  3401,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     8,  3453,   147,  3455,   145,   147,    14,
      15,   147,    24,   147,   145,   147,    24,   145,   147,    24,
       8,    33,   147,   147,   144,    33,    14,    15,    33,   145,
      35,    36,    37,    38,    39,    40,    24,   144,    43,    44,
      45,    46,   144,   147,   145,    33,   144,    35,    36,    37,
      38,    39,    40,   144,   144,    43,    44,    45,    46,  3508,
       8,  3510,    24,   144,   144,    24,    14,    15,    24,    24,
      24,    33,   144,   144,    33,    24,    24,    33,    33,    33,
     144,   144,   144,   144,    33,    33,   144,    35,    36,    37,
      38,    39,    40,   144,   144,    43,    44,    45,    46,    24,
      24,   144,    24,   144,   144,   144,   144,   144,    33,    33,
     144,    33,    24,  3562,   144,  3564,   144,   144,   144,     8,
     144,    33,   144,   144,   144,    14,    15,   144,   144,   144,
     144,   144,    34,   145,   144,    24,   141,   145,   143,   144,
     144,   146,   144,   144,     8,   144,    35,    36,    37,    38,
      14,    15,    24,   141,    24,   143,    34,   145,   146,   144,
      24,    33,   144,    33,   144,   144,   144,   144,  3617,    33,
    3619,    35,    36,    37,    38,    39,    40,   144,     8,    43,
      44,    45,    46,   145,    14,    15,   145,   144,    34,   145,
     145,   145,   144,   141,    24,   143,   145,   145,   146,   144,
     144,   144,   144,    33,   144,    35,    36,    37,    38,    39,
      40,     8,   144,    43,    44,    45,    46,    14,    15,    34,
     145,   145,  3671,   145,  3673,   144,   144,    24,     8,   144,
     144,   144,    17,   145,    14,    15,    33,   144,    35,    36,
      37,    38,    39,    40,    24,   144,    43,    44,    45,    46,
     144,   144,   141,    33,   143,    35,    36,    37,    38,    39,
      40,    24,     8,    43,    44,    45,    46,    24,    14,    15,
      33,   144,    34,   145,    34,   145,    33,   141,    24,   143,
      34,   145,   146,   144,   144,   144,    24,    33,   144,    35,
      36,    37,    38,    39,    40,    33,   144,    43,    44,    45,
      46,  3750,     8,  3752,   144,   144,   144,   144,    14,    15,
      24,   141,   144,   143,    34,   145,   146,    24,    24,    33,
     144,   144,   144,   144,    24,   144,    33,    24,    24,    35,
      36,    37,    38,    33,     8,   144,    33,    33,   144,   144,
      14,    15,   144,   144,   141,    24,   143,   147,   145,   146,
      24,   144,   144,   144,    33,   144,  3805,    34,  3807,    33,
      17,   141,    17,   143,    17,   145,   146,    41,    42,    17,
      17,    17,    24,    47,    48,    49,    50,    51,    52,    53,
      54,    33,   145,    17,    24,     8,    17,    24,   145,    17,
      35,    14,    15,    33,   147,   141,    33,   143,   147,   145,
     146,    24,   147,   147,    17,    17,    17,   145,    17,    17,
      33,  3860,    35,    36,    37,    38,    39,    40,    17,    17,
      43,    44,    45,    46,    17,  3874,  3875,     8,    17,    17,
      24,   145,    24,    14,    15,   141,   147,   143,   145,    33,
    3889,    33,    24,    24,    17,   145,    17,    17,   145,   145,
      17,    33,    33,    17,    35,    36,    37,    38,    39,    40,
      17,    17,    43,    44,    45,    46,   145,   141,    17,   143,
      17,   145,   146,  3922,  3923,  3924,  3925,  3926,  3927,  3928,
    3929,  3930,  3931,  3932,  3933,  3934,  3935,  3936,  3937,    24,
      24,    17,    17,   145,    17,    24,   147,   147,    33,    33,
      17,    17,    24,    24,    24,   145,    17,    17,   145,    17,
       8,    33,    33,    33,    17,  3964,    14,    15,   141,   144,
     143,    17,   145,   146,    17,    24,    24,    17,    17,  3978,
    3979,    17,    17,    17,    33,    33,    17,    35,    36,    37,
      38,    39,    40,     8,  3993,    43,    44,    45,    46,    14,
      15,   145,    24,   145,    17,    17,    17,    17,    24,    24,
     141,    33,   143,   145,   145,   146,    24,    33,    33,    17,
      17,    17,    17,    17,     8,    33,    41,    42,    17,    17,
      14,    15,    47,    48,    49,    50,    51,    52,    53,    54,
      24,    17,    24,   147,    17,    17,     8,    24,    17,    33,
      24,    33,    14,    15,    17,   147,    33,    41,    42,    33,
     145,   145,    24,    47,    48,    49,    50,    51,    52,    53,
      54,    33,    17,   145,   145,   145,    17,    17,    17,    41,
      42,    17,    17,    17,    17,    47,    48,    49,    50,    51,
      52,    53,    54,   141,   144,   143,   145,   145,   146,     8,
      24,    24,    17,    17,    24,    14,    15,    24,    24,    33,
      33,    17,    17,    33,    17,    24,    33,    33,    17,    17,
      17,    17,    17,   145,    33,    17,   141,    17,   143,   145,
     145,   146,    41,    42,    17,    17,    17,   145,    47,    48,
      49,    50,    51,    52,    53,    54,    24,    24,    17,    24,
      17,    17,    17,    17,    17,    33,    33,   141,    33,   143,
       8,   145,   146,   145,    17,    24,    14,    15,   145,    24,
      17,   145,    17,    17,    33,    17,    24,    17,    33,   141,
     147,   143,     8,   145,   146,    33,    24,    24,    14,    15,
      17,   147,    17,    41,    42,    33,    33,    17,    24,    47,
      48,    49,    50,    51,    52,    53,    54,    17,     8,    17,
      17,    17,    17,    17,    14,    15,    17,    43,    44,    45,
      46,   145,   145,  4222,    24,   145,    17,    17,   145,   145,
      17,    24,   141,    33,   143,  4234,   145,   146,    17,     8,
      33,    41,    42,    17,    17,    14,    15,    47,    48,    49,
      50,    51,    52,    53,    54,    24,    17,    24,    17,    17,
      17,    17,    24,    17,    33,    17,    33,   145,   145,    17,
     145,    33,    41,    42,    17,    17,    17,    17,    47,    48,
      49,    50,    51,    52,    53,    54,   145,    17,    17,    17,
     145,    17,    17,   141,     8,   143,   147,   145,   146,    17,
      14,    15,    35,    24,    24,    24,    17,   145,   145,    24,
      24,    17,    33,    33,    33,   141,   147,   143,    33,    33,
     146,    24,    24,    24,    17,    17,    17,    41,    42,    17,
      33,    33,    33,    47,    48,    49,    50,    51,    52,    53,
      54,   141,    17,   143,    17,   145,   146,    24,     8,    17,
     147,    17,   145,    24,    14,    15,    33,    24,    17,    17,
      17,    24,    33,    17,    24,    17,    33,    17,   144,    17,
      33,    24,   141,    33,   143,    24,   145,   146,   145,     8,
      33,    41,    42,   145,    33,    14,    15,    47,    48,    49,
      50,    51,    52,    53,    54,    24,     5,     6,     7,     8,
       9,    10,    11,    12,    33,    17,    35,    36,    37,    38,
      39,    40,     8,    17,    43,    44,    45,    46,    14,    15,
      17,    35,    17,  4422,   145,   145,   145,   141,    24,   143,
     145,   145,   146,    17,     8,  4434,    17,    33,    24,    17,
      14,    15,   145,   145,   145,    41,    42,    33,    17,    17,
      24,    47,    48,    49,    50,    51,    52,    53,    54,    33,
      17,    35,    36,    37,    38,    39,    40,    17,   145,    43,
      44,    45,    46,     8,   145,    17,    17,   147,   145,    14,
      15,   141,   145,   143,    24,   145,   146,    17,     8,    24,
      24,    17,   145,    33,    14,    15,   145,    35,    17,    33,
      35,    36,    37,    38,    24,    17,    24,    17,    17,    17,
      17,    17,   141,    33,   143,    33,   145,   146,    17,   147,
      17,    41,    42,    17,    17,    17,    24,    47,    48,    49,
      50,    51,    52,    53,    54,    33,    17,    17,    17,    17,
      17,   147,    24,    17,    17,   141,     8,   143,    24,   145,
     146,    33,    14,    15,     8,   147,    24,    33,    17,   145,
      14,    15,    24,    35,    17,    33,    17,   141,    17,   143,
      24,    33,   146,    35,    36,    37,    38,    39,    40,    33,
     147,    43,    44,    45,    46,   147,   147,    41,    42,   147,
      17,   147,    24,    47,    48,    49,    50,    51,    52,    53,
      54,    33,   147,     8,    24,   145,   141,    17,   143,    14,
      15,   145,   144,    33,   147,    17,    24,    17,  4617,    24,
    4619,   141,    17,   143,    17,    33,   146,   145,    33,    17,
      35,    36,    37,    38,    39,    40,    17,    17,    43,    44,
      45,    46,    17,    17,    17,    17,    17,   145,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    17,    24,
       8,    17,    17,   145,   147,    17,    14,    15,    33,   145,
      17,    24,    17,  4672,    17,  4674,    24,   145,    17,   141,
      33,   143,   147,   147,   146,    33,    24,   141,    17,   143,
      17,     8,   146,    41,    42,    33,    17,    14,    15,    47,
      48,    49,    50,    51,    52,    53,    54,    24,    17,    17,
      17,    17,    17,   145,    17,    17,    33,    17,    35,    36,
      37,    38,    39,    40,     8,   145,    43,    44,    45,    46,
      14,    15,    17,    24,    17,    17,   141,   145,   143,    17,
      24,   146,    33,    17,    17,    24,     8,    24,    17,    33,
      17,    17,    14,    15,    33,   147,    33,    41,    42,    17,
     147,   147,    24,    47,    48,    49,    50,    51,    52,    53,
      54,    33,    17,    35,    36,    37,    38,    39,    40,    17,
     145,    43,    44,    45,    46,    17,  4785,    24,  4787,    17,
     147,    17,   145,   141,     8,   143,    33,    24,   146,    24,
      14,    15,    35,   147,    24,    24,    33,   145,    33,    24,
      24,    17,    17,    33,    33,   147,    24,    17,    33,    33,
      17,    17,    24,    17,   141,    33,   143,    41,    42,   146,
      17,    33,    17,    47,    48,    49,    50,    51,    52,    53,
      54,  4840,    17,  4842,     8,   144,    17,    17,    17,     8,
      14,    15,    24,   147,   145,    14,    15,   141,   147,   143,
      24,    33,   146,    17,    17,    24,   145,    17,   145,    24,
       8,    35,    36,    37,    38,    34,    14,    15,    33,   141,
      17,   143,    41,    42,   146,    17,    24,    17,    47,    48,
      49,    50,    51,    52,    53,    54,    34,    17,    24,    17,
      17,    17,    17,    41,    42,    17,    17,    33,   145,    47,
      48,    49,    50,    51,    52,    53,    54,     8,   145,    24,
     145,    17,    24,    14,    15,   145,   145,   141,    33,   143,
     145,    33,   146,    24,    17,    17,    24,   145,    17,    17,
      17,    17,    33,   145,  4943,    33,  4945,    17,    17,    17,
      41,    42,    17,    17,   147,    17,    47,    48,    49,    50,
      51,    52,    53,    54,    17,    24,    17,    24,    17,    24,
      17,    17,    24,   145,    33,    17,    33,   141,    33,   143,
      24,    33,   141,    17,   143,    24,     8,   146,   144,    33,
     145,    17,    14,    15,    33,    24,    17,    17,    17,  4998,
      17,  5000,    24,   141,    33,   143,    17,    17,   146,    17,
      17,    33,    17,    35,    36,    37,    38,    39,    40,   145,
       8,    43,    44,    45,    46,    17,    14,    15,    24,    24,
      24,    17,    17,   147,   147,    24,    24,    33,    33,    33,
     145,   147,     8,   145,    33,    33,    17,    17,    14,    15,
     141,    35,   143,    41,    42,   146,    17,   145,    24,    47,
      48,    49,    50,    51,    52,    53,    54,    33,    17,    35,
      36,    37,    38,    39,    40,    17,     8,    43,    44,    45,
      46,    17,    14,    15,   147,    35,   145,  5086,   145,  5088,
     145,    24,    24,   145,    17,    17,    17,    17,    24,    17,
      33,   145,     8,    35,    36,    37,   145,    33,    14,    15,
     147,    43,    44,    45,    46,    17,   145,    24,    24,   141,
      24,   143,    17,    24,   146,    17,    33,    33,    17,    33,
      24,    17,    33,    17,    17,    41,    42,    17,  5137,    33,
    5139,    47,    48,    49,    50,    51,    52,    53,    54,   145,
     145,   145,    17,   141,     8,   143,   145,    24,   146,    17,
      14,    15,     8,    24,    24,    24,    33,    24,    14,    15,
      24,   147,    33,    33,    33,   141,    33,   143,    24,    33,
     146,    35,    36,    37,    38,    39,    40,    33,    17,    43,
      44,    45,    46,    17,    17,    41,    42,    17,    17,    17,
      17,    47,    48,    49,    50,    51,    52,    53,    54,   141,
     147,   143,   145,   145,   146,    17,    17,    24,     8,   145,
      17,  5220,    17,  5222,    14,    15,    33,    35,    17,    17,
     147,   147,   147,    24,    24,   141,   147,   143,   145,   147,
     146,   145,    33,    33,   145,    35,    36,    37,    38,    39,
      40,   145,    24,    43,    44,    45,    46,    24,  5257,    24,
    5259,    33,   147,   144,    24,     8,    33,    24,    33,    17,
      24,    14,    15,    33,    24,    17,    33,    17,   145,    33,
      17,    24,    17,    33,   145,   145,   145,   141,   145,   143,
      33,    17,   146,    17,  5293,   141,  5295,   143,    41,    42,
     146,    17,    17,    17,    47,    48,    49,    50,    51,    52,
      53,    54,     8,   147,   147,    24,    24,    24,    14,    15,
      24,    24,    17,    17,    33,    33,    33,    24,    24,    33,
      33,  5330,    17,  5332,    17,    17,    33,    33,   145,    35,
      36,    37,    38,    39,    40,   144,    24,    43,    44,    45,
      46,   141,    24,   143,   145,    33,   146,    24,    17,    17,
      17,    33,    24,    24,    17,    17,    33,  5366,     8,  5368,
     147,    33,    33,   145,    14,    15,   147,    24,   145,    17,
     145,    24,    17,    24,    24,   145,    33,    17,   145,    17,
      33,   145,    33,    33,    17,   145,    17,    17,   141,    17,
     143,    41,    42,   146,  5403,    17,  5405,    47,    48,    49,
      50,    51,    52,    53,    54,    24,   147,    24,    24,    17,
      24,    24,    24,    24,    33,    17,    33,    33,     8,    33,
      33,    33,    33,    17,    14,    15,   145,   145,   145,    17,
      17,   145,   145,    17,    24,   141,    17,   143,   145,    17,
     146,    17,  5451,    33,  5453,    35,    36,    37,    38,    39,
      40,    24,    24,    43,    44,    45,    46,   145,    24,    17,
      33,    33,   147,   145,     8,    17,    17,    33,   145,    24,
      14,    15,    17,   145,   145,    17,    17,    24,    33,  5488,
      24,  5490,   147,   147,    17,    17,    33,   147,   145,    33,
      17,   141,   145,   143,   145,   147,   146,    41,    42,    17,
     147,  5510,    17,    47,    48,    49,    50,    51,    52,    53,
      54,     8,   147,    24,    24,   147,    17,    14,    15,    17,
     147,  5530,    33,    33,   147,    17,   145,    24,   145,   145,
      17,   145,   145,   145,   145,    17,    33,   147,    35,    36,
      37,    38,    39,    40,   147,    17,    43,    44,    45,    46,
     147,   141,    17,   143,   147,    17,   146,    17,   144,   144,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     144,     8,   145,   145,    17,   144,   144,    14,    15,   145,
     144,   144,   144,   144,   144,   144,  5595,    24,   144,    17,
     145,   144,    17,    17,   144,   144,    33,   141,   145,   143,
      17,   144,   146,    17,    41,    42,  5615,    17,    35,    17,
      47,    48,    49,    50,    51,    52,    53,    54,    17,    17,
      17,    17,    17,     8,    17,    17,    35,   144,   144,    14,
      15,     8,   144,    35,   145,   145,   144,    14,    15,    24,
     144,   144,   144,    34,   141,   144,   143,    24,    33,   146,
      35,    36,    37,    38,    39,    40,    33,   147,    43,    44,
      45,    46,     8,    34,    41,    42,    34,    34,    14,    15,
      47,    48,    49,    50,    51,    52,    53,    54,    24,    34,
      34,    34,    34,    34,    34,    34,    34,    33,   147,    35,
      36,    37,    38,    39,    40,     8,    34,    43,    44,    45,
      46,    14,    15,    34,   141,    34,   143,    34,    34,   146,
      34,    24,    34,    34,    34,     8,    34,    34,    34,    34,
      33,    14,    15,    34,    34,    34,    34,    34,    41,    42,
      34,    24,    34,    34,    47,    48,    49,    50,    51,    52,
      53,    54,    35,    36,    37,    38,    39,    40,    34,    34,
      43,    44,    45,    46,    34,    34,   141,    34,   143,    34,
      34,   146,    34,    34,   141,    34,   143,    34,    34,   146,
      34,    34,    34,    34,     8,    34,    34,    34,    34,    34,
      14,    15,    25,    26,    27,    28,    29,    30,    31,    32,
      24,   147,    34,    34,    34,   141,    34,   143,    34,    34,
     146,    35,    36,    37,    38,    39,    40,     8,    34,    43,
      44,    45,    46,    14,    15,    25,    26,    27,    28,    29,
      30,    31,    32,    24,    17,     8,    34,    34,   141,    34,
     143,    14,    15,   146,    35,    36,    37,    38,    39,    40,
       8,    24,    43,    44,    45,    46,    14,    15,   141,    34,
     143,    17,   145,   146,    34,    34,    24,    34,    41,    42,
      34,    34,    34,    34,    47,    48,    49,    50,    51,    52,
      53,    54,    34,    41,    42,    34,    34,    34,    34,    47,
      48,    49,    50,    51,    52,    53,    54,     8,    34,    34,
      34,    34,    34,    14,    15,    25,    26,    27,    28,    29,
      30,    31,    32,    24,    35,    34,    34,   141,    34,   143,
      34,   145,   146,    17,    35,    36,    37,    38,    39,    40,
      34,    34,    43,    44,    45,    46,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,  5945,    34,    17,    17,
     141,    17,   143,    17,   145,   146,    17,    17,     8,    17,
      17,    17,    17,    17,    14,    15,    17,   144,   141,    17,
     143,    17,   145,   146,    24,    17,    17,    17,    17,   147,
      17,   147,   147,   141,    17,   143,    17,   145,   146,     8,
      17,    41,    42,    17,    17,    14,    15,    47,    48,    49,
      50,    51,    52,    53,    54,    24,     8,    17,    17,    17,
      17,    17,    14,    15,    35,    35,    35,    36,    37,    38,
      39,    40,    24,    17,    43,    44,    45,    46,    17,    17,
     141,    17,   143,  6032,   145,   146,    17,    17,    17,    41,
      42,    17,    17,    17,    17,    47,    48,    49,    50,    51,
      52,    53,    54,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    17,    17,    17,  6066,    17,  6068,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,     8,    17,    17,    17,    17,    17,    14,    15,    17,
      35,   141,    17,   143,    17,   145,   146,    24,    17,    17,
      17,    17,    17,    17,  6103,    17,  6105,    17,    35,    36,
      37,    38,    39,    40,     8,    17,    43,    44,    45,    46,
      14,    15,   141,    34,   143,    17,   145,   146,    35,    17,
      24,    17,    17,    17,    17,    17,    17,    17,    17,   141,
      17,   143,    35,   145,   146,     8,    17,    41,    42,    17,
      17,    14,    15,    47,    48,    49,    50,    51,    52,    53,
      54,    24,     8,    17,    17,    17,    17,    17,    14,    15,
      17,    35,    35,    36,    37,    38,    39,    40,    24,    17,
      43,    44,    45,    46,    25,    26,    27,    28,    29,    30,
      31,    32,    17,     8,    17,    41,    42,    17,    17,    14,
      15,    47,    48,    49,    50,    51,    52,    53,    54,    24,
      17,    17,    17,    17,   141,    17,   143,    17,   145,   146,
    6219,    17,  6221,    17,    35,    17,    41,    42,    17,    17,
      17,    17,    47,    48,    49,    50,    51,    52,    53,    54,
      17,    17,    17,    17,    17,    17,    17,   141,    17,   143,
      35,   145,   146,    17,    17,    17,    17,  6256,    17,  6258,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,    17,    17,    17,    17,    35,    17,    17,   141,    17,
     143,    17,   145,   146,    17,     8,    17,    17,    17,    17,
      17,    14,    15,    17,    -1,   141,    35,   143,    17,   145,
     146,    24,     8,    17,    17,    17,    17,    17,    14,    15,
      17,   147,    35,    36,    37,    38,    39,    40,    24,    17,
      43,    44,    45,    46,    17,  6324,   141,  6326,   143,    17,
     145,   146,    17,    35,   144,    41,    42,    17,   147,   147,
      17,    47,    48,    49,    50,    51,    52,    53,    54,   147,
      17,     8,    17,    17,    17,    17,    17,    14,    15,     8,
      35,    17,  6361,    17,  6363,    14,    15,    24,   147,    17,
      17,    17,    17,    17,    17,    24,    17,    17,    35,    36,
      37,    38,    39,    40,    17,    17,    43,    44,    45,    46,
      17,    17,    41,    42,    17,    17,    35,    17,    47,    48,
      49,    50,    51,    52,    53,    54,    17,    17,    17,    17,
      17,    17,    17,  6412,    17,  6414,    35,    17,   141,    17,
     143,    17,    17,   146,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    17,   141,    17,   143,    17,    17,
     146,    25,    26,    27,    28,    29,    30,    31,    32,    17,
    6449,    17,  6451,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    17,    35,    17,  6466,    35,  6468,
    6469,    17,  6471,  6472,    17,  6474,    25,    26,    27,    28,
      29,    30,    31,    32,   141,  6484,   143,  6486,  6487,   146,
    6489,  6490,   141,  6492,   143,    17,    17,   146,    17,    17,
      17,    17,    17,  6502,    35,  6504,  6505,    17,  6507,  6508,
      17,  6510,    25,    26,    27,    28,    29,    30,    31,    32,
      17,  6520,   147,  6522,  6523,    17,  6525,  6526,    17,  6528,
      25,    26,    27,    28,    29,    30,    31,    32,    17,  6538,
     144,  6540,  6541,    17,  6543,  6544,    17,  6546,    25,    26,
      27,    28,    29,    30,    31,    32,    17,  6556,    17,  6558,
    6559,    17,  6561,  6562,    17,  6564,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,  6578,
      17,  6580,  6581,    17,  6583,  6584,    17,  6586,     8,    17,
      17,    17,    17,    17,    14,    15,    17,  6596,    17,  6598,
    6599,    17,  6601,  6602,    24,  6604,    35,     8,    17,    17,
      17,    17,    17,    14,    15,    17,   144,    17,    17,    17,
      35,    41,    42,    24,    17,    17,    17,    47,    48,    49,
      50,    51,    52,    53,    54,    17,    17,    17,     8,    17,
      41,    42,    17,    17,    14,    15,    47,    48,    49,    50,
      51,    52,    53,    54,    24,    17,    17,     8,    35,    17,
      17,    17,    17,    14,    15,    17,    35,    17,    17,    17,
      17,    41,    42,    24,    17,    17,    17,    47,    48,    49,
      50,    51,    52,    53,    54,    17,    17,    17,    17,    17,
      41,    42,    17,    17,    17,    17,    47,    48,    49,    50,
      51,    52,    53,    54,    25,    26,    27,    28,    29,    30,
      31,    32,    17,     8,    17,    35,    17,   147,    17,    14,
      15,   141,    35,   143,    17,    17,   146,    17,    17,    24,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     141,    17,   143,    17,    17,   146,    41,    42,    17,    17,
      17,    17,    47,    48,    49,    50,    51,    52,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,   141,    17,   143,    17,     8,   146,    17,    17,    17,
      17,    14,    15,    17,   147,    17,    17,   147,   147,    17,
     141,    24,   143,     8,    17,   146,    17,    17,    17,    14,
      15,    17,    35,    36,    37,    38,    39,    40,    17,    24,
      43,    44,    45,    46,    17,    17,    17,    35,    17,    17,
      35,    36,    37,    38,    39,    40,     8,    17,    43,    44,
      45,    46,    14,    15,     8,   144,    17,    17,    17,    17,
      14,    15,    24,   147,    17,  6844,   141,  6846,   143,  6848,
      24,   146,    17,    35,    36,    37,    38,    39,    40,    17,
      17,    43,    44,    45,    46,   147,   147,    41,    42,    17,
      17,    17,    17,    47,    48,    49,    50,    51,    52,    53,
      54,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,   147,   147,   147,    17,
      17,   147,    17,  6902,    17,  6904,   147,  6906,   141,    17,
     143,   147,   147,   146,    17,    17,    17,  6916,   147,  6918,
    6919,   147,  6921,  6922,    17,  6924,   141,    17,   143,    17,
     147,   146,    17,   147,   147,  6934,   147,  6936,  6937,   147,
    6939,  6940,     8,  6942,    17,    17,    17,   147,    14,    15,
       8,   147,   147,   147,   147,   147,    14,    15,    24,   141,
     147,   143,    17,    17,   146,    17,    24,   141,    17,   143,
      17,    17,   146,    17,    17,    41,    42,    17,    35,    17,
      17,    47,    48,    49,    50,    51,    52,    53,    54,    47,
      48,    49,    50,    51,    52,    53,    54,    17,    17,    17,
      17,  7000,   144,  7002,  7003,    17,  7005,  7006,    17,  7008,
      25,    26,    27,    28,    29,    30,    31,    32,    17,  7018,
      17,  7020,  7021,    17,  7023,  7024,   147,  7026,   147,    17,
      17,   147,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    17,    17,    17,  7044,    35,  7046,  7047,    17,
    7049,  7050,    17,  7052,    25,    26,    27,    28,    29,    30,
      31,    32,    17,  7062,    17,  7064,  7065,    17,  7067,  7068,
      17,  7070,    17,    17,    17,   141,    17,   143,    17,    17,
     146,    17,    17,   141,   144,   143,    17,   145,   146,  7088,
      17,  7090,  7091,    17,  7093,  7094,   147,  7096,     8,   147,
      17,    17,   147,    17,    14,    15,   147,  7106,   147,  7108,
    7109,   147,  7111,  7112,    24,  7114,     8,   147,   147,   147,
     147,   147,    14,    15,   147,    35,    36,    37,    38,    39,
      40,   147,    24,    43,    44,    45,    46,     8,    17,   147,
     147,   147,   147,    14,    15,   147,   147,   147,    17,    41,
      42,   147,   147,    24,   147,    47,    48,    49,    50,    51,
      52,    53,    54,   147,    35,    36,    37,    38,    39,    40,
       8,    17,    43,    44,    45,    46,    14,    15,    25,    26,
      27,    28,    29,    30,    31,    32,    24,    17,    17,    17,
       8,    35,    17,    17,    17,    17,    14,    15,    17,    35,
      17,    17,    17,    41,    42,    17,    24,    17,    17,    47,
      48,    49,    50,    51,    52,    53,    54,    35,    36,    37,
      38,    39,    40,    17,    17,    43,    44,    45,    46,    17,
      17,   141,     8,   143,    17,    17,   146,    17,    14,    15,
      25,    26,    27,    28,    29,    30,    31,    32,    24,   141,
       8,   143,    17,    17,   146,    17,    14,    15,    35,    35,
      36,    37,    38,    39,    40,    17,    24,    17,    17,    17,
     141,    17,   143,    17,    17,   146,   144,    35,    36,    37,
      38,    39,    40,     8,    17,    43,    44,    45,    46,    14,
      15,    25,    26,    27,    28,    29,    30,    31,    32,    24,
      17,    17,   147,   141,   147,   143,   147,    17,   146,    17,
      35,    36,    37,    38,    39,    40,    17,    17,    43,    44,
      45,    46,    17,   141,     8,   143,    17,    17,   146,    17,
      14,    15,     8,    35,    17,    17,    17,    17,    14,    15,
      24,   144,    17,    17,    17,    17,    17,    17,    24,    17,
     147,    35,    36,    37,    38,    39,    40,   147,   147,    43,
      44,    45,    46,    17,    17,   141,   147,   143,   147,   145,
     146,    47,    48,    49,    50,    51,    52,    53,    54,   147,
      17,   144,    17,   141,    17,   143,    17,    17,   146,    25,
      26,    27,    28,    29,    30,    31,    32,    17,    17,    17,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,    35,    17,    17,    35,    17,   141,    17,   143,    17,
      17,   146,    25,    26,    27,    28,    29,    30,    31,    32,
      17,    15,    17,    17,    18,    19,    20,    17,    17,    23,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,    17,    17,    17,    17,    17,    17,   141,    35,   143,
      17,    17,   146,    17,    17,   141,    17,   143,    17,    17,
     146,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    25,    26,
      27,    28,    29,    30,    31,    32,    17,    17,    25,    26,
      27,    28,    29,    30,    31,    32,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    25,    26,    27,    28,
      29,    30,    31,    32,   147,   147,   147,    17,    25,    26,
      27,    28,    29,    30,    31,    32,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    35,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,    17,   147,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   144,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   144,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   144,   144,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,    17,   147,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,   144,    17,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   144,   144,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,   144,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   144,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,    35,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    35,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,    35,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,    35,    34,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    34,    34,    34,    34,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    34,    34,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   147,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,   144,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,   144,   144,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    34,   144,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    35,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,   144,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    35,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   144,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,    17,   147,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,    17,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   144,   144,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,   144,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   144,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   144,   144,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,    17,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,   144,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   144,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,    17,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    17,    17,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,    17,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   147,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   147,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,   147,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,   147,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    34,    34,    34,    34,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    34,    34,    34,    34,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,   144,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,   144,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,   144,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,   144,   144,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   144,   144,   144,   144,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   144,   144,   144,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    34,    34,    34,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,    17,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,    17,    17,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,    17,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,    17,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,   147,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    34,    34,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    34,    34,    34,    34,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    34,    34,    34,    34,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    34,    34,    34,    34,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    34,    34,    34,    34,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    34,    34,    34,    34,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    34,    34,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,   147,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   147,   147,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,   147,   147,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,    17,    17,   147,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   147,   147,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   147,   147,   147,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,    17,    17,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    17,    17,    17,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    17,    17,     7,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      17,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   157,   158,    15,    17,    18,    19,    20,    23,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   149,   150,   151,   152,   153,   154,
     159,     0,    21,   140,    14,     8,    14,    15,   141,   143,
     155,   156,   156,    16,    24,    33,    35,    36,    37,    38,
      39,    40,    43,    44,    45,    46,   146,   155,    24,    33,
      41,    42,    47,    48,    49,    50,    51,    52,    53,    54,
     146,   155,    24,    33,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   146,   155,    24,    33,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   146,   155,
      24,    33,    35,    36,    37,    38,    39,    40,    43,    44,
      45,    46,   146,   155,    24,    33,    41,    42,    47,    48,
      49,    50,    51,    52,    53,    54,   146,   155,    17,   146,
     155,    24,    33,    35,    36,    37,    38,    39,    40,    43,
      44,    45,    46,   146,   155,    24,    33,    41,    42,    47,
      48,    49,    50,    51,    52,    53,    54,   146,   155,    24,
      33,    35,    36,    37,    38,    39,    40,    43,    44,    45,
      46,   146,   155,    24,    33,    41,    42,    47,    48,    49,
      50,    51,    52,    53,    54,   146,   155,    33,    33,    17,
      17,    24,    35,    36,    37,    38,    39,    40,    43,    44,
      45,    46,   146,   155,    24,    41,    42,    47,    48,    49,
      50,    51,    52,    53,    54,   146,   155,    17,    17,    17,
      24,    35,    36,    37,    38,    39,    40,    43,    44,    45,
      46,   146,   155,    24,    41,    42,    47,    48,    49,    50,
      51,    52,    53,    54,   146,   155,   146,   155,    24,    24,
     155,   155,   155,   155,   155,   155,    35,    33,    33,    33,
      33,    24,    34,    41,    42,    47,    48,    49,    50,    51,
      52,    53,    54,   146,   155,    24,    34,    41,    42,    47,
      48,    49,    50,    51,    52,    53,    54,   146,   155,    24,
      33,    35,    36,    37,    38,    39,    40,    43,    44,    45,
      46,   144,   146,   155,    24,    33,    41,    42,    47,    48,
      49,    50,    51,    52,    53,    54,   146,   155,    17,    17,
      17,    24,    33,    35,    36,    37,    38,    39,    40,    43,
      44,    45,    46,   146,   155,    24,    33,    41,    42,    47,
      48,    49,    50,    51,    52,    53,    54,   146,   155,    33,
      40,    33,    40,    33,    24,    41,    42,    47,    48,    49,
      50,    51,    52,    53,    54,   146,   155,    24,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   146,   155,
      17,    24,    33,    35,    36,    37,    38,    39,    40,    43,
      44,    45,    46,   146,   155,    24,    33,    41,    42,    47,
      48,    49,    50,    51,    52,    53,    54,   146,   155,    24,
      33,    35,    36,    37,    38,    39,    40,    43,    44,    45,
      46,   146,   155,    24,    33,    41,    42,    47,    48,    49,
      50,    51,    52,    53,    54,   146,   155,    17,    17,    24,
      41,    42,    47,    48,    49,    50,    51,    52,    53,    54,
     146,   155,    24,    33,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   146,   155,    24,    33,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   146,   155,
      24,    41,    42,    47,    48,    49,    50,    51,    52,    53,
      54,   146,   155,    17,   155,   155,    24,    33,    35,    36,
      37,    38,    39,    40,    43,    44,    45,    46,   146,   155,
      24,    33,    41,    42,    47,    48,    49,    50,    51,    52,
      53,    54,   146,   155,    17,    24,    33,    35,    36,    37,
      38,    39,    40,    43,    44,    45,    46,   146,   155,    24,
      33,    41,    42,    47,    48,    49,    50,    51,    52,    53,
      54,   146,   155,    24,    33,    35,    36,    37,    38,    39,
      40,    43,    44,    45,    46,   146,   155,    24,    33,    41,
      42,    47,    48,    49,    50,    51,    52,    53,    54,   146,
     155,    33,    33,    24,    33,    35,    36,    37,    38,    39,
      40,    43,    44,    45,    46,   146,   155,    24,    33,    41,
      42,    47,    48,    49,    50,    51,    52,    53,    54,   146,
     155,    17,    17,    24,    41,    42,    47,    48,    49,    50,
      51,    52,    53,    54,   146,   155,   155,    33,    33,    33,
      24,    33,    35,    36,    37,    38,    39,    40,    43,    44,
      45,    46,   146,   155,    24,    33,    41,    42,    47,    48,
      49,    50,    51,    52,    53,    54,   146,   155,   155,   155,
     155,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,   144,    17,   155,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,    35,   144,   146,   155,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,    35,   144,   146,   155,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,    35,   144,   146,   155,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,    35,   144,   146,   155,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,    35,   144,   146,   155,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,    35,   144,   146,    24,    35,    36,    37,    38,    39,
      40,    43,    44,    45,    46,   146,   155,    17,   155,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      35,    17,   146,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    35,    17,   146,   155,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
      35,   144,   146,   155,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,    35,   144,   146,   144,   144,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    35,    17,   146,   155,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    35,    17,   146,   155,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    35,
      17,   146,   155,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    35,    17,   146,    24,    35,    36,    37,
      38,    39,    40,    43,    44,    45,    46,   146,   155,    17,
     155,   155,    17,    17,    17,    17,    17,    17,   144,   144,
     144,   144,   144,   155,   144,    25,    26,    27,    28,    29,
      30,    31,    32,    25,    26,    27,    28,    29,    30,    31,
      32,    25,    26,    27,    28,    29,    30,    31,    32,    25,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
      30,    31,    32,    25,    26,    27,    28,    29,    30,    31,
      32,    25,    26,    27,    28,    29,    30,    31,    32,    25,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    35,    25,    26,    27,    28,
      29,    30,    31,    32,   146,   155,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,    35,   144,   146,
     155,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,    24,    35,    36,    37,    38,    39,    40,    43,
      44,    45,    46,   146,   155,    35,   144,   146,   155,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
      35,   144,   146,   155,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,    35,   144,   146,   155,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
      35,   144,   146,    17,    17,    17,    17,    17,   155,    25,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
      30,    31,    32,    25,    26,    27,    28,    29,    30,    31,
      32,    25,    26,    27,    28,    29,    30,    31,    32,    25,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
      30,    31,    32,    25,    26,    27,    28,    29,    30,    31,
      32,    25,    26,    27,    28,    29,    30,    31,    32,    35,
      25,    26,    27,    28,    29,    30,    31,    32,   146,   155,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      35,    17,   146,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    35,    17,   146,   155,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      35,    17,   146,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    35,    17,   146,   155,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      35,    17,   146,   155,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    26,
      27,    28,    29,    30,    31,    32,    25,    26,    27,    28,
      29,    30,    31,    32,    35,    25,    26,    27,    28,    29,
      30,    31,    32,   146,   155,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,    35,   144,   146,   155,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,    35,   144,   146,   155,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    35,    17,   146,    17,    17,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    35,    17,   146,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    35,    17,   146,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    35,    17,   146,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    35,    17,   146,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    35,    17,   146,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    35,    17,   146,
     144,   144,   155,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,    35,   144,   146,   155,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,    35,
     144,   146,   155,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    35,    17,   146,    17,   144,   144,   144,
     155,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,    35,   144,   146,   155,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,    35,   144,   146,
     142,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   144,    24,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   145,   146,   155,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,   147,    24,    33,   145,
      36,    37,    38,   144,    24,    41,    42,    47,    48,    49,
      50,    51,    52,    53,    54,   145,   146,   155,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,   147,    24,
      33,   145,    36,    37,    38,   144,    24,    35,    36,    37,
      38,    39,    40,    43,    44,    45,    46,   145,   146,   155,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,   147,
      24,    33,   145,    36,    37,    38,   144,    24,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   145,   146,
     155,    24,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    24,    33,
     145,   147,    24,    33,   145,    36,    37,    38,   144,    24,
      35,    36,    37,    38,    39,    40,    43,    44,    45,    46,
     145,   146,   155,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,   147,    24,    33,   145,    36,    37,    38,   144,
      24,    41,    42,    47,    48,    49,    50,    51,    52,    53,
      54,   145,   146,   155,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,   147,    24,    33,   145,    36,    37,
      38,   155,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,    35,   146,   147,    17,   147,    36,    37,    38,
      17,   147,    36,    37,    38,   144,    24,    35,    36,    37,
      38,    39,    40,    43,    44,    45,    46,   145,   146,   155,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
     147,    24,    33,   145,    36,    37,    38,   144,    24,    41,
      42,    47,    48,    49,    50,    51,    52,    53,    54,   145,
     146,   155,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,   147,    24,    33,   145,    36,    37,    38,   146,
     155,   146,   155,    17,   147,    36,    37,    38,    17,   147,
      36,    37,    38,    17,   147,    36,    37,    38,    17,   147,
      36,    37,    38,   155,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,    35,   146,   147,    25,    26,    27,
      28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
      30,    31,    32,   155,    24,    35,    36,    37,    43,    44,
      45,    46,   145,   146,   155,    24,    47,    48,    49,    50,
      51,    52,    53,    54,   145,   146,   155,   146,   155,   146,
     155,    25,    26,    27,    28,    29,    30,    31,    32,    24,
      41,    42,    47,    48,    49,    50,    51,    52,    53,    54,
     146,   155,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   147,   144,   144,   144,   144,   144,   144,   144,
     144,    36,    37,    38,   144,    24,    41,    42,    47,    48,
      49,    50,    51,    52,    53,    54,   146,   155,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,   147,    34,
      36,    37,    38,   144,    24,    35,    36,    37,    38,    39,
      40,    43,    44,    45,    46,   146,   155,    24,    33,    35,
      36,    37,    38,    39,    40,    43,    44,    45,    46,   145,
     146,   155,    24,    33,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   145,   146,   155,    24,    33,    35,
      36,    37,    38,    39,    40,    43,    44,    45,    46,   145,
     146,   155,    24,    33,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   145,   146,   155,    24,    33,    35,
      36,    37,    38,    39,    40,    43,    44,    45,    46,   145,
     146,   155,    24,    33,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   145,   146,   155,    24,    33,    35,
      36,    37,    38,    39,    40,    43,    44,    45,    46,   145,
     146,   155,    24,    33,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   145,   146,   155,    24,    33,    35,
      36,    37,    38,    39,    40,    43,    44,    45,    46,   145,
     146,   155,    24,    33,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   145,   146,   155,   155,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    35,    17,
     146,   147,    33,   145,    36,    37,    38,   144,    24,    41,
      42,    47,    48,    49,    50,    51,    52,    53,    54,   146,
     155,    24,    33,    41,    42,    47,    48,    49,    50,    51,
      52,    53,    54,   145,   146,   155,    24,    33,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   145,   146,
     155,    24,    33,    41,    42,    47,    48,    49,    50,    51,
      52,    53,    54,   145,   146,   155,    24,    33,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   145,   146,
     155,    24,    33,    41,    42,    47,    48,    49,    50,    51,
      52,    53,    54,   145,   146,   155,    24,    33,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   145,   146,
     155,    24,    33,    41,    42,    47,    48,    49,    50,    51,
      52,    53,    54,   145,   146,   155,    24,    33,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   145,   146,
     155,    24,    33,    41,    42,    47,    48,    49,    50,    51,
      52,    53,    54,   145,   146,   155,    24,    33,    41,    42,
      47,    48,    49,    50,    51,    52,    53,    54,   145,   146,
     155,   147,    33,   145,    36,    37,    38,   144,    24,    35,
      36,    37,    38,    39,    40,    43,    44,    45,    46,   145,
     146,   155,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,   147,    24,    33,   145,    36,    37,    38,   144,
      24,    41,    42,    47,    48,    49,    50,    51,    52,    53,
      54,   145,   146,   155,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,   147,    24,    33,   145,    36,    37,
      38,    25,    26,    27,    28,    29,    30,    31,    32,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   147,
      17,    17,    17,    17,    17,    17,    17,    17,    36,    37,
      38,    17,   147,    36,    37,    38,    17,   147,    36,    37,
      38,    17,   147,    36,    37,    38,    17,   147,    36,    37,
      38,    17,   147,    36,    37,    38,    25,    26,    27,    28,
      29,    30,    31,    32,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,   147,    17,    17,    17,    17,    17,
      17,    17,    17,    36,    37,    38,   144,    24,    35,    36,
      37,    38,    39,    40,    43,    44,    45,    46,   145,   146,
     155,    24,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    24,    33,
     145,   147,    24,    33,   145,    36,    37,    38,   144,    24,
      41,    42,    47,    48,    49,    50,    51,    52,    53,    54,
     145,   146,   155,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,   147,    24,    33,   145,    36,    37,    38,
      17,   147,    36,    37,    38,    17,   147,    36,    37,    38,
      17,   147,    36,    37,    38,    17,   147,    36,    37,    38,
      17,   147,    36,    37,    38,    17,   147,    36,    37,    38,
      17,   147,    36,    37,    38,    24,    43,    44,    45,    46,
     146,   155,    24,    47,    48,    49,    50,    51,    52,    53,
      54,   146,   155,   144,    24,    35,    36,    37,    38,    39,
      40,    43,    44,    45,    46,   145,   146,   155,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,   147,    24,
      33,   145,    36,    37,    38,   144,    24,    41,    42,    47,
      48,    49,    50,    51,    52,    53,    54,   145,   146,   155,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
     147,    24,    33,   145,    36,    37,    38,    17,   147,    36,
      37,    38,    24,    35,    36,    37,    38,    39,    40,    43,
      44,    45,    46,   146,   155,    24,    41,    42,    47,    48,
      49,    50,    51,    52,    53,    54,   146,   155,    24,   144,
      24,    35,    36,    37,    38,    39,    40,   145,   146,   155,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
     147,    24,    33,   145,    36,    37,    38,   144,    24,    41,
      42,    47,    48,    49,    50,    51,    52,    53,    54,   145,
     146,   155,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    24,
      33,   145,   147,    24,    33,   145,    36,    37,    38,    24,
      33,   145,   155,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,   155,    35,    17,   146,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   144,   155,    17,   155,
     147,   147,   147,    24,    33,   145,   155,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   155,    35,    17,
     146,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   144,   155,    17,   155,   147,   147,   147,    24,    33,
     145,   155,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,   155,    35,    17,   146,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   144,   155,    17,   155,   147,
     147,   147,    24,    33,   145,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,   155,    35,    17,   146,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     144,   155,    17,   155,   147,   147,   147,    24,    33,   145,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,   155,    35,    17,   146,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   144,   155,    17,   155,   147,   147,
     147,    24,    33,   145,   155,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,   155,    35,    17,   146,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   144,
     155,    17,   155,   147,   147,   147,   147,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   147,    36,    37,
      38,    17,    17,   147,   147,   147,    17,   147,   147,   147,
      24,    33,   145,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,   155,    35,    17,   146,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   144,   155,
      17,   155,   147,   147,   147,    24,    33,   145,   155,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   155,
      35,    17,   146,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   144,   155,    17,   155,   147,   147,   147,
      24,    35,    36,    37,    38,    39,    40,    43,    44,    45,
      46,   146,   155,    17,   146,    24,    35,    36,    37,    38,
      39,    40,    43,    44,    45,    46,   146,   155,    17,   146,
      17,   147,   147,   147,    17,   147,   147,   147,    17,   147,
     147,   147,    17,   147,   147,   147,   147,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   147,    36,    37,
      38,    17,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,    17,   155,
      17,    17,    17,    17,    17,    17,    17,   155,    35,    17,
     146,   155,    17,    17,    17,    17,    17,    17,    17,    17,
     155,    35,    17,   146,    24,    35,    36,    37,    38,    39,
      40,    43,    44,    45,    46,   146,   155,    17,   146,    24,
      35,    36,    37,    38,    39,    40,    43,    44,    45,    46,
     146,   155,    17,   146,   144,   144,   144,   144,   144,   144,
     144,   144,   155,    25,    26,    27,    28,    29,    30,    31,
      32,    25,    26,    27,    28,    29,    30,    31,    32,    25,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
      30,    31,    32,    25,    26,    27,    28,    29,    30,    31,
      32,    25,    26,    27,    28,    29,    30,    31,    32,    25,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
      30,    31,    32,    35,    25,    26,    27,    28,    29,    30,
      31,    32,   146,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    25,    26,    27,    28,    29,    30,    31,
      32,    34,    34,    34,    34,    34,    34,    34,    34,   147,
     147,   147,    34,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    35,    17,   146,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   144,    17,   147,
     147,   147,    24,    33,    35,    36,    37,    38,    39,    40,
      43,    44,    45,    46,   145,   146,   155,   155,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    35,    17,
     146,   155,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,   155,    35,    17,   146,   155,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   155,
      35,    17,   146,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,   155,    35,    17,   146,   155,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,   155,    35,    17,   146,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   155,    35,    17,
     146,   155,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,   155,    35,    17,   146,   155,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   155,
      35,    17,   146,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,   155,    35,    17,   146,   155,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,   155,    35,    17,   146,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   155,    35,    17,
     146,    17,   147,    36,    37,    38,   144,    17,   155,   147,
     147,   147,    24,    33,    41,    42,    47,    48,    49,    50,
      51,    52,    53,    54,   145,   146,   155,   155,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    35,    17,
     146,   155,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,   155,    35,    17,   146,   155,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   155,
      35,    17,   146,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,   155,    35,    17,   146,   155,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,   155,    35,    17,   146,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   155,    35,    17,
     146,   155,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,   155,    35,    17,   146,   155,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   155,
      35,    17,   146,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,   155,    35,    17,   146,   155,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,   155,    35,    17,   146,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   155,    35,    17,
     146,   144,    17,   155,   147,   147,   147,    24,    33,   145,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,   155,    35,    17,   146,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   144,   155,    17,   155,   147,
     147,   147,    24,    33,   145,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,   155,    35,    17,   146,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     144,   155,    17,   155,   147,   147,   147,    17,    17,    17,
      17,    17,    17,    17,    17,    25,    26,    27,    28,    29,
      30,    31,    32,   147,   147,   147,    17,   147,   147,   147,
      17,   147,   147,   147,    17,   147,   147,   147,    17,   147,
     147,   147,    17,   147,   147,   147,    17,    17,    17,    17,
      17,    17,    17,    17,    25,    26,    27,    28,    29,    30,
      31,    32,   147,   147,   147,    24,    33,   145,   155,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   155,
      35,    17,   146,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   144,   155,    17,   155,   147,   147,   147,
      24,    33,   145,   155,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,   155,    35,    17,   146,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   144,   155,
      17,   155,   147,   147,   147,    17,   147,   147,   147,    17,
     147,   147,   147,    17,   147,   147,   147,    17,   147,   147,
     147,    17,   147,   147,   147,    17,   147,   147,   147,    17,
     147,   147,   147,   155,    17,    17,    17,    17,    35,    17,
     146,   155,    17,    17,    17,    17,    17,    17,    17,    17,
      35,    17,   146,    24,    33,   145,   155,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   155,    35,    17,
     146,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   144,   155,    17,   155,   147,   147,   147,    24,    33,
     145,   155,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,   155,    35,    17,   146,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   144,   155,    17,   155,
     147,   147,   147,    17,   147,   147,   147,   155,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    35,    17,
     146,   155,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    35,    17,   146,   155,    24,    33,   145,   155,
      17,    17,    17,    17,    17,    17,   155,    35,    17,   146,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     144,   155,    17,   155,   147,   147,   147,    24,    33,   145,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,   155,    35,    17,   146,   155,    17,   155,   155,    17,
     155,   155,    17,   155,   155,    17,   155,   155,    17,   155,
     155,    17,   155,   155,    17,   155,   155,    17,   155,   155,
      17,   155,   155,    17,   155,   144,   155,    17,   155,   147,
     147,   147,   155,    17,   155,    17,    17,   147,    36,    37,
      38,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      24,    33,   145,    17,    17,   144,   144,   144,   155,    17,
     155,    17,    17,   147,    36,    37,    38,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    24,    33,   145,
      17,    17,   144,   144,   144,   155,    17,   155,    17,    17,
     147,    36,    37,    38,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    24,    33,   145,    17,    17,   144,   144,
     144,   155,    17,   155,    17,    17,   147,    36,    37,    38,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      24,    33,   145,    17,    17,   144,   144,   144,   155,    17,
     155,    17,    17,   147,    36,    37,    38,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    24,    33,   145,    17,
      17,   144,   144,   144,   155,    17,   155,    17,    17,   147,
      36,    37,    38,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    24,    33,   145,    17,    17,   144,   144,
     144,    17,   147,   147,   147,   147,    17,    17,    17,    17,
      17,    17,   155,    17,   155,    17,    17,   147,    36,    37,
      38,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    24,    33,   145,    17,    17,   144,   144,   144,   155,
      17,   155,    17,    17,   147,    36,    37,    38,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    24,    33,
     145,    17,    17,   144,   144,   144,   155,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,    35,   146,   147,
      24,    35,    36,    37,    38,   155,   155,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,    35,   146,   147,
      24,    35,    36,    37,    38,   155,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   147,
     147,   147,   147,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,    17,
      17,   147,    36,    37,    38,    17,    17,   147,    36,    37,
      38,   155,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,    35,   146,   147,    24,    35,    36,    37,    38,
     155,   155,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,    35,   146,   147,    24,    35,    36,    37,    38,
     155,    34,    34,    34,    34,    34,    34,    34,    34,    25,
      26,    27,    28,    29,    30,    31,    32,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   147,    17,    17,
      17,    17,    17,    17,    17,    17,    36,    37,    38,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,   144,
     144,   144,   144,   144,   144,   144,   144,    17,    17,    17,
      17,    17,    17,    17,    17,    25,    26,    27,    28,    29,
      30,    31,    32,    25,    26,    27,    28,    29,    30,    31,
      32,    25,    26,    27,    28,    29,    30,    31,    32,    17,
      17,   147,    36,    37,    38,    34,   144,   144,   144,   155,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,   155,    35,    17,   146,    17,   147,    36,    37,    38,
      17,    17,   147,    36,    37,    38,    17,    17,   147,    36,
      37,    38,    17,    17,   147,    36,    37,    38,    17,    17,
     147,    36,    37,    38,    17,    17,   147,    36,    37,    38,
      17,    17,   147,    36,    37,    38,    17,    17,   147,    36,
      37,    38,    17,    17,   147,    36,    37,    38,    17,    17,
     147,    36,    37,    38,    17,    17,   147,    36,    37,    38,
      17,   147,   147,   147,    33,   145,    17,   144,   144,   144,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,   155,    35,    17,   146,    17,   147,    36,    37,
      38,    17,    17,   147,    36,    37,    38,    17,    17,   147,
      36,    37,    38,    17,    17,   147,    36,    37,    38,    17,
      17,   147,    36,    37,    38,    17,    17,   147,    36,    37,
      38,    17,    17,   147,    36,    37,    38,    17,    17,   147,
      36,    37,    38,    17,    17,   147,    36,    37,    38,    17,
      17,   147,    36,    37,    38,    17,    17,   147,    36,    37,
      38,    33,   145,    17,   144,   144,   144,   155,    17,   155,
      17,    17,   147,    36,    37,    38,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    24,    33,   145,    17,
      17,   144,   144,   144,   155,    17,   155,    17,    17,   147,
      36,    37,    38,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    24,    33,   145,    17,    17,   144,   144,
     144,    17,    17,    17,    17,    17,    17,    17,    17,    25,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
      30,    31,    32,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    25,    26,    27,    28,
      29,    30,    31,    32,    25,    26,    27,    28,    29,    30,
      31,    32,    25,    26,    27,    28,    29,    30,    31,    32,
     155,    17,   155,    17,    17,   147,    36,    37,    38,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    24,
      33,   145,    17,    17,   144,   144,   144,   155,    17,   155,
      17,    17,   147,    36,    37,    38,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    24,    33,   145,    17,
      17,   144,   144,   144,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,   147,    36,    37,    38,
      17,   147,    36,    37,    38,   155,    17,   155,    17,    17,
     147,    36,    37,    38,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    24,    33,   145,    17,    17,   144,
     144,   144,   155,    17,   155,    17,    17,   147,    36,    37,
      38,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    24,    33,   145,    17,    17,   144,   144,   144,    17,
      17,    17,    17,   147,    36,    37,    38,    17,   147,    36,
      37,    38,    17,   155,    17,   155,    17,    17,   147,    36,
      37,    38,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    24,    33,   145,    17,    17,   144,   144,   144,
     155,    17,   155,    17,    17,   147,    36,    37,    38,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    24,
      33,   145,    17,    17,   144,   144,   144,    17,    17,    17,
     147,   147,   147,   155,    17,   155,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    17,    17,    17,   147,   147,
     147,   155,    17,   155,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    17,    17,    17,   147,   147,   147,   155,
      17,   155,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    17,    17,    17,   147,   147,   147,   155,    17,   155,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    17,
      17,    17,   147,   147,   147,   155,    17,   155,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    17,    17,    17,
     147,   147,   147,   155,    17,   155,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    17,   147,   147,   147,    17,
      17,    17,   147,   147,   147,   155,    17,   155,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    17,    17,    17,
     147,   147,   147,   155,    17,   155,    24,    33,   145,    24,
      33,   145,    24,    33,   145,   147,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,   147,    36,    37,    38,
      17,   155,   147,   147,   147,   147,   147,   147,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,   147,    36,
      37,    38,    17,   155,   147,   147,   147,   147,   147,    17,
     147,   147,   147,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
     147,   147,   147,    17,   147,   147,   147,   147,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,   147,    36,
      37,    38,    17,   155,   147,   147,   147,   147,   147,   147,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
     147,    36,    37,    38,    17,   155,   147,   147,   147,   147,
     147,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    25,    26,    27,
      28,    29,    30,    31,    32,   147,   147,   147,    34,    34,
      34,    34,    34,    34,    34,    34,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
      17,   147,   147,   147,    17,    34,    34,    34,    17,    17,
     147,    36,    37,    38,    17,   147,   147,   147,    17,   147,
     147,   147,    17,   147,   147,   147,    17,   147,   147,   147,
      17,   147,   147,   147,    17,   147,   147,   147,    17,   147,
     147,   147,    17,   147,   147,   147,    17,   147,   147,   147,
      17,   147,   147,   147,    17,   147,   147,   147,    17,    17,
      17,    17,   155,    33,   145,    33,   145,    33,   145,    17,
      17,   147,    36,    37,    38,    17,   147,   147,   147,    17,
     147,   147,   147,    17,   147,   147,   147,    17,   147,   147,
     147,    17,   147,   147,   147,    17,   147,   147,   147,    17,
     147,   147,   147,    17,   147,   147,   147,    17,   147,   147,
     147,    17,   147,   147,   147,    17,   147,   147,   147,    17,
     155,    33,   145,    33,   145,    33,   145,    17,    17,    17,
     147,   147,   147,   155,    17,   155,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    17,    17,    17,   147,   147,
     147,   155,    17,   155,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,   147,   147,   147,   155,    17,   155,
      24,    33,   145,    24,    33,   145,    24,    33,   145,    17,
      17,    17,   147,   147,   147,   155,    17,   155,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    17,   147,   147,
     147,    17,   147,   147,   147,    17,    17,    17,   147,   147,
     147,   155,    17,   155,    24,    33,   145,    24,    33,   145,
      24,    33,   145,    17,    17,    17,   147,   147,   147,   155,
      17,   155,    24,    33,   145,    24,    33,   145,    24,    33,
     145,    17,   147,   147,   147,    17,   147,   147,   147,    17,
      17,    17,   147,   147,   147,   155,    17,   155,    24,    33,
     145,    24,    33,   145,    24,    33,   145,    17,    17,    17,
     147,   147,   147,   155,    17,   155,    24,    33,   145,    24,
      33,   145,    24,    33,   145,    17,    17,    17,    17,    17,
     155,    17,   155,   155,    17,   155,   155,    17,   155,    17,
      17,    17,    17,    17,   155,    17,   155,   155,    17,   155,
     155,    17,   155,    17,    17,    17,    17,    17,   155,    17,
     155,   155,    17,   155,   155,    17,   155,    17,    17,    17,
      17,    17,   155,    17,   155,   155,    17,   155,   155,    17,
     155,    17,    17,    17,    17,    17,   155,    17,   155,   155,
      17,   155,   155,    17,   155,    17,    17,    17,    17,    17,
     155,    17,   155,   155,    17,   155,   155,    17,   155,    17,
      17,    17,    17,    17,    17,    17,    17,   155,    17,   155,
     155,    17,   155,   155,    17,   155,    17,    17,    17,    17,
      17,   155,    17,   155,   155,    17,   155,   155,    17,   155,
      17,   147,   147,   147,   147,   147,    17,    17,    17,    17,
      17,    17,   147,   147,   147,   147,   147,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,   147,   147,   147,   147,   147,    17,    17,    17,
      17,    17,    17,   147,   147,   147,   147,   147,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    25,    26,    27,    28,    29,    30,    31,    32,    25,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    17,    17,    17,    17,    17,
      17,    17,    17,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    17,    17,    17,
      17,    17,    17,    17,   147,   147,   147,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,   155,    17,   155,    17,   155,    17,   147,   147,
     147,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,   155,    17,   155,    17,
     155,    17,    17,    17,    17,    17,   155,    17,   155,   155,
      17,   155,   155,    17,   155,    17,    17,    17,    17,    17,
     155,    17,   155,   155,    17,   155,   155,    17,   155,    17,
      17,    17,    17,    17,   155,    17,   155,   155,    17,   155,
     155,    17,   155,    17,    17,    17,    17,    17,   155,    17,
     155,   155,    17,   155,   155,    17,   155,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,   155,    17,
     155,   155,    17,   155,   155,    17,   155,    17,    17,    17,
      17,    17,   155,    17,   155,   155,    17,   155,   155,    17,
     155,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,   155,    17,   155,   155,    17,   155,   155,    17,
     155,    17,    17,    17,    17,    17,   155,    17,   155,   155,
      17,   155,   155,    17,   155,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,   147,   147,   147,    17,    17,   147,
     147,   147,    17,    17,   147,   147,   147,    17,    17,   147,
     147,   147,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   148,   149,   150,   151,   152,   153,   153,   153,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   157,
     157,   158,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     3,     0,
       2,     1,     1,     3,     3,     3,     6,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     6,     5,     7,     8,     8,     8,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     6,
       8,     9,     9,     9,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     7,     6,     8,     9,     9,     9,
       6,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     6,     8,     9,     9,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       6,     8,     9,     9,     9,     6,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       8,     8,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     6,     5,     7,     8,     8,     8,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     6,     8,
       9,     9,     9,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     6,     8,     9,     9,     9,     6,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       6,     5,     7,     8,     8,     8,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       8,     8,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     6,     8,     9,     9,     9,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     6,
       8,     9,     9,     9,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     6,     5,     7,     8,     8,     8,
       6,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     7,     6,     8,     9,
       9,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     6,     8,     9,     9,     9,     6,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     8,     8,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     8,
       8,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     6,     8,     9,     9,     9,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     6,     8,
       9,     9,     9,     2,     3,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     8,
       8,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     5,     6,     6,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     5,     6,     6,     6,     6,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       8,     8,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     6,     5,     7,     8,     8,     8,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     6,
       8,     9,     9,     9,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     7,     6,     8,     9,     9,     9,
       6,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     6,     8,     9,     9,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       6,     8,     9,     9,     9,     5,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     8,     7,     9,    10,
      10,    10,     8,     8,     8,     8,     9,     8,     5,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     8,
       7,     9,    10,    10,    10,     8,     8,     8,     8,     9,
       8,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     5,     6,     6,     6,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     5,     6,     6,     6,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       5,     6,     6,     6,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     5,     6,     6,     6,
       3,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     3,     3,     3,     3,     3,     3,     5,
       6,     5,     5,     5,     5,     5,     5,     5,     6,     5,
       7,     8,     8,     8,     6,     5,     5,     5,     5,     5,
       5,     5,     5,     6,     5,     7,     8,     8,     8,     5,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       8,     7,     9,    10,    10,    10,     8,     8,     8,     8,
       9,     8,     5,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     8,     7,     9,    10,    10,    10,     8,
       8,     8,     8,     9,     8,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     7,     7,     7,     7,     7,
       7,     7,     7,     6,     6,     6,     6,     6,     6,     6,
       6,     8,     8,     8,     8,     8,     8,     8,     8,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     7,     7,     7,     7,     7,     7,
       7,     6,     6,     6,     6,     6,     6,     6,     6,     8,
       8,     8,     8,     8,     8,     8,     8,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     6,     5,     7,     8,     8,     8,     5,
       6,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     5,     5,     5,
       5,     6,     6,     6,     6,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     6,     6,     6,     6,     5,
       5,     5,     5,     7,     7,     7,     7,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     8,     8,     5,     5,     5,     5,     5,
       6,     5,     7,     8,     8,     8,     6,     6,     6,     6,
       6,     7,     6,     8,     9,     9,     9,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     6,     8,
       9,     9,     9,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     5,     4,     6,     7,     7,     7,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     8,     8,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     8,
       8,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     6,     5,     7,     8,     8,     8,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     8,     8,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     7,     6,     8,     9,     9,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     6,     8,     9,     9,     9,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     6,     5,     7,     8,     8,     8,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
       6,     6,     6,     6,     6,     6,     6,     5,     5,     5,
       5,     5,     5,     5,     5,     7,     7,     7,     7,     7,
       7,     7,     7,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     2,     2,     2,
       6,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     6,     8,     9,     9,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       6,     8,     9,     9,     9,     6,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       8,     8,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     6,     5,     7,     8,     8,     8,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     6,
       8,     9,     9,     9,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     7,     6,     8,     9,     9,     9,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     5,     5,     5,     5,
       5,     5,     5,     4,     4,     4,     4,     4,     4,     4,
       4,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     5,     6,     6,     6,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     5,     6,     6,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       5,     6,     6,     6,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     5,     6,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     5,     6,     6,     6,     2,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       5,     5,     5,     5,     5,     5,     5,     5,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     6,     6,     6,
       6,     6,     6,     6,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     6,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     8,     8,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     8,
       8,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     6,     8,     9,     9,     9,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     6,     8,
       9,     9,     9,     6,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     6,     5,     7,     8,     8,     8,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       6,     5,     7,     8,     8,     8,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     7,     6,     8,     9,
       9,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     6,     8,     9,     9,     9,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       5,     6,     6,     6,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       5,     6,     6,     6,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     5,     6,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     5,     6,     6,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     5,     6,     6,     6,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     5,     6,
       6,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     5,     6,     6,     6,     5,
       5,     5,     5,     6,     5,     7,     8,     8,     8,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     6,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     6,     5,     7,     8,     8,     8,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       6,     5,     7,     8,     8,     8,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     7,     6,     8,     9,
       9,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     6,     8,     9,     9,     9,     6,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     8,     8,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     8,
       8,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     6,     8,     9,     9,     9,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     6,     8,
       9,     9,     9,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     5,     6,     6,
       6,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     6,     6,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     8,     8,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     8,     8,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     6,     8,     9,     9,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       6,     8,     9,     9,     9,     6,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       8,     8,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     6,     5,     7,     8,     8,     8,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     6,
       8,     9,     9,     9,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     7,     6,     8,     9,     9,     9,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 149 "asm662.y" /* yacc.c:1651  */
    { set_symbol_value((yyvsp[-1].sym), get_pc()); }
#line 8159 "y.tab.c" /* yacc.c:1651  */
    break;

  case 3:
#line 153 "asm662.y" /* yacc.c:1651  */
    { set_symbol_value((yyvsp[-2].sym), (yyvsp[0].value)); }
#line 8165 "y.tab.c" /* yacc.c:1651  */
    break;

  case 4:
#line 157 "asm662.y" /* yacc.c:1651  */
    { set_pc((yyvsp[0].value)); }
#line 8171 "y.tab.c" /* yacc.c:1651  */
    break;

  case 5:
#line 161 "asm662.y" /* yacc.c:1651  */
    { preload_bin((yyvsp[0].string)); }
#line 8177 "y.tab.c" /* yacc.c:1651  */
    break;

  case 12:
#line 174 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) + (yyvsp[0].value); }
#line 8183 "y.tab.c" /* yacc.c:1651  */
    break;

  case 13:
#line 175 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) - (yyvsp[0].value); }
#line 8189 "y.tab.c" /* yacc.c:1651  */
    break;

  case 14:
#line 176 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) * (yyvsp[0].value); }
#line 8195 "y.tab.c" /* yacc.c:1651  */
    break;

  case 15:
#line 177 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) / (yyvsp[0].value); }
#line 8201 "y.tab.c" /* yacc.c:1651  */
    break;

  case 16:
#line 178 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) % (yyvsp[0].value); }
#line 8207 "y.tab.c" /* yacc.c:1651  */
    break;

  case 17:
#line 179 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) & (yyvsp[0].value); }
#line 8213 "y.tab.c" /* yacc.c:1651  */
    break;

  case 18:
#line 180 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) | (yyvsp[0].value); }
#line 8219 "y.tab.c" /* yacc.c:1651  */
    break;

  case 19:
#line 181 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) ^ (yyvsp[0].value); }
#line 8225 "y.tab.c" /* yacc.c:1651  */
    break;

  case 20:
#line 182 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) << (yyvsp[0].value); }
#line 8231 "y.tab.c" /* yacc.c:1651  */
    break;

  case 21:
#line 183 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-2].value) >> (yyvsp[0].value); }
#line 8237 "y.tab.c" /* yacc.c:1651  */
    break;

  case 22:
#line 184 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = -(yyvsp[0].value); }
#line 8243 "y.tab.c" /* yacc.c:1651  */
    break;

  case 23:
#line 185 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = (yyvsp[-1].value); }
#line 8249 "y.tab.c" /* yacc.c:1651  */
    break;

  case 25:
#line 187 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = get_pc(); }
#line 8255 "y.tab.c" /* yacc.c:1651  */
    break;

  case 26:
#line 188 "asm662.y" /* yacc.c:1651  */
    { (yyval.value) = get_symbol_value((yyvsp[0].sym)); }
#line 8261 "y.tab.c" /* yacc.c:1651  */
    break;

  case 27:
#line 191 "asm662.y" /* yacc.c:1651  */
    { _val_n=1; _valbytes[0] = (yyvsp[0].value); _valwords[0] = (yyvsp[0].value); }
#line 8267 "y.tab.c" /* yacc.c:1651  */
    break;

  case 28:
#line 192 "asm662.y" /* yacc.c:1651  */
    { 
			if(_val_n > 255) 
				emit_error("expression lists can only be 256 long"); 
			else {
				_valbytes[_val_n] = (yyvsp[0].value); 
				_valwords[_val_n] = (yyvsp[0].value); 
				++_val_n;
			}
		}
#line 8281 "y.tab.c" /* yacc.c:1651  */
    break;

  case 33:
#line 212 "asm662.y" /* yacc.c:1651  */
    { emit(_valbytes, _val_n); _val_n=0; }
#line 8287 "y.tab.c" /* yacc.c:1651  */
    break;

  case 34:
#line 213 "asm662.y" /* yacc.c:1651  */
    { emit_words(_valwords, _val_n); _val_n=0; }
#line 8293 "y.tab.c" /* yacc.c:1651  */
    break;

  case 35:
#line 214 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1]={0x10}; instr[0] += (yyvsp[-1].value); if(instr[0] > 0x17) emit_error("invalid VCAL"); else emit(instr, 1); }
#line 8299 "y.tab.c" /* yacc.c:1651  */
    break;

  case 36:
#line 215 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x96,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 8305 "y.tab.c" /* yacc.c:1651  */
    break;

  case 37:
#line 216 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x18};  emit(instr,1); }
#line 8311 "y.tab.c" /* yacc.c:1651  */
    break;

  case 38:
#line 217 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x19};  emit(instr,1); }
#line 8317 "y.tab.c" /* yacc.c:1651  */
    break;

  case 39:
#line 218 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x1A};  emit(instr,1); }
#line 8323 "y.tab.c" /* yacc.c:1651  */
    break;

  case 40:
#line 219 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x1B};  emit(instr,1); }
#line 8329 "y.tab.c" /* yacc.c:1651  */
    break;

  case 41:
#line 220 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x92};  emit(instr,2); }
#line 8335 "y.tab.c" /* yacc.c:1651  */
    break;

  case 42:
#line 221 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x92};  emit(instr,2); }
#line 8341 "y.tab.c" /* yacc.c:1651  */
    break;

  case 43:
#line 222 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x92};  emit(instr,2); }
#line 8347 "y.tab.c" /* yacc.c:1651  */
    break;

  case 44:
#line 223 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x92};  emit(instr,2); }
#line 8353 "y.tab.c" /* yacc.c:1651  */
    break;

  case 45:
#line 224 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x92};  emit(instr,2); }
#line 8359 "y.tab.c" /* yacc.c:1651  */
    break;

  case 46:
#line 225 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x92};  emit(instr,2); }
#line 8365 "y.tab.c" /* yacc.c:1651  */
    break;

  case 47:
#line 226 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x97,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 8371 "y.tab.c" /* yacc.c:1651  */
    break;

  case 48:
#line 227 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x92}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 8377 "y.tab.c" /* yacc.c:1651  */
    break;

  case 49:
#line 228 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x92};  emit(instr,2); }
#line 8383 "y.tab.c" /* yacc.c:1651  */
    break;

  case 50:
#line 229 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x92}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 8389 "y.tab.c" /* yacc.c:1651  */
    break;

  case 51:
#line 230 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x92}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 8395 "y.tab.c" /* yacc.c:1651  */
    break;

  case 52:
#line 231 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x92}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 8401 "y.tab.c" /* yacc.c:1651  */
    break;

  case 53:
#line 232 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x91};  emit(instr,2); }
#line 8407 "y.tab.c" /* yacc.c:1651  */
    break;

  case 54:
#line 233 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x91};  emit(instr,2); }
#line 8413 "y.tab.c" /* yacc.c:1651  */
    break;

  case 55:
#line 234 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x91};  emit(instr,2); }
#line 8419 "y.tab.c" /* yacc.c:1651  */
    break;

  case 56:
#line 235 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x91};  emit(instr,2); }
#line 8425 "y.tab.c" /* yacc.c:1651  */
    break;

  case 57:
#line 236 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x91};  emit(instr,2); }
#line 8431 "y.tab.c" /* yacc.c:1651  */
    break;

  case 58:
#line 237 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x91};  emit(instr,2); }
#line 8437 "y.tab.c" /* yacc.c:1651  */
    break;

  case 59:
#line 238 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x91};  emit(instr,2); }
#line 8443 "y.tab.c" /* yacc.c:1651  */
    break;

  case 60:
#line 239 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x91};  emit(instr,2); }
#line 8449 "y.tab.c" /* yacc.c:1651  */
    break;

  case 61:
#line 240 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x91};  emit(instr,2); }
#line 8455 "y.tab.c" /* yacc.c:1651  */
    break;

  case 62:
#line 241 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x91};  emit(instr,2); }
#line 8461 "y.tab.c" /* yacc.c:1651  */
    break;

  case 63:
#line 242 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x91}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 8467 "y.tab.c" /* yacc.c:1651  */
    break;

  case 64:
#line 243 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x91}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 8473 "y.tab.c" /* yacc.c:1651  */
    break;

  case 65:
#line 244 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x91};  emit(instr,2); }
#line 8479 "y.tab.c" /* yacc.c:1651  */
    break;

  case 66:
#line 245 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x91}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 8485 "y.tab.c" /* yacc.c:1651  */
    break;

  case 67:
#line 246 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x91}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 8491 "y.tab.c" /* yacc.c:1651  */
    break;

  case 68:
#line 247 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x91}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 8497 "y.tab.c" /* yacc.c:1651  */
    break;

  case 69:
#line 248 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8503 "y.tab.c" /* yacc.c:1651  */
    break;

  case 70:
#line 249 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8509 "y.tab.c" /* yacc.c:1651  */
    break;

  case 71:
#line 250 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8515 "y.tab.c" /* yacc.c:1651  */
    break;

  case 72:
#line 251 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8521 "y.tab.c" /* yacc.c:1651  */
    break;

  case 73:
#line 252 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8527 "y.tab.c" /* yacc.c:1651  */
    break;

  case 74:
#line 253 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8533 "y.tab.c" /* yacc.c:1651  */
    break;

  case 75:
#line 254 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8539 "y.tab.c" /* yacc.c:1651  */
    break;

  case 76:
#line 255 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8545 "y.tab.c" /* yacc.c:1651  */
    break;

  case 77:
#line 256 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8551 "y.tab.c" /* yacc.c:1651  */
    break;

  case 78:
#line 257 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0x93,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 8557 "y.tab.c" /* yacc.c:1651  */
    break;

  case 79:
#line 258 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0x93,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 8563 "y.tab.c" /* yacc.c:1651  */
    break;

  case 80:
#line 259 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8569 "y.tab.c" /* yacc.c:1651  */
    break;

  case 81:
#line 260 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0x93,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 8575 "y.tab.c" /* yacc.c:1651  */
    break;

  case 82:
#line 261 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0x93,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 8581 "y.tab.c" /* yacc.c:1651  */
    break;

  case 83:
#line 262 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0x93,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 8587 "y.tab.c" /* yacc.c:1651  */
    break;

  case 84:
#line 263 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8593 "y.tab.c" /* yacc.c:1651  */
    break;

  case 85:
#line 264 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8599 "y.tab.c" /* yacc.c:1651  */
    break;

  case 86:
#line 265 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8605 "y.tab.c" /* yacc.c:1651  */
    break;

  case 87:
#line 266 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8611 "y.tab.c" /* yacc.c:1651  */
    break;

  case 88:
#line 267 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8617 "y.tab.c" /* yacc.c:1651  */
    break;

  case 89:
#line 268 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8623 "y.tab.c" /* yacc.c:1651  */
    break;

  case 90:
#line 269 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8629 "y.tab.c" /* yacc.c:1651  */
    break;

  case 91:
#line 270 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8635 "y.tab.c" /* yacc.c:1651  */
    break;

  case 92:
#line 271 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8641 "y.tab.c" /* yacc.c:1651  */
    break;

  case 93:
#line 272 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA4,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8647 "y.tab.c" /* yacc.c:1651  */
    break;

  case 94:
#line 273 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0x90,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 8653 "y.tab.c" /* yacc.c:1651  */
    break;

  case 95:
#line 274 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0x90,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 8659 "y.tab.c" /* yacc.c:1651  */
    break;

  case 96:
#line 275 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0x90,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 8665 "y.tab.c" /* yacc.c:1651  */
    break;

  case 97:
#line 276 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0x90,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 8671 "y.tab.c" /* yacc.c:1651  */
    break;

  case 98:
#line 277 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0x90,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 8677 "y.tab.c" /* yacc.c:1651  */
    break;

  case 99:
#line 278 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0x90,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 8683 "y.tab.c" /* yacc.c:1651  */
    break;

  case 100:
#line 279 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x96,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 8689 "y.tab.c" /* yacc.c:1651  */
    break;

  case 101:
#line 280 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x18};  emit(instr,1); }
#line 8695 "y.tab.c" /* yacc.c:1651  */
    break;

  case 102:
#line 281 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x19};  emit(instr,1); }
#line 8701 "y.tab.c" /* yacc.c:1651  */
    break;

  case 103:
#line 282 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x1A};  emit(instr,1); }
#line 8707 "y.tab.c" /* yacc.c:1651  */
    break;

  case 104:
#line 283 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x1B};  emit(instr,1); }
#line 8713 "y.tab.c" /* yacc.c:1651  */
    break;

  case 105:
#line 284 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x1C};  emit(instr,1); }
#line 8719 "y.tab.c" /* yacc.c:1651  */
    break;

  case 106:
#line 285 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x1D};  emit(instr,1); }
#line 8725 "y.tab.c" /* yacc.c:1651  */
    break;

  case 107:
#line 286 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x1E};  emit(instr,1); }
#line 8731 "y.tab.c" /* yacc.c:1651  */
    break;

  case 108:
#line 287 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x1F};  emit(instr,1); }
#line 8737 "y.tab.c" /* yacc.c:1651  */
    break;

  case 109:
#line 288 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x92};  emit(instr,2); }
#line 8743 "y.tab.c" /* yacc.c:1651  */
    break;

  case 110:
#line 289 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x92};  emit(instr,2); }
#line 8749 "y.tab.c" /* yacc.c:1651  */
    break;

  case 111:
#line 290 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x97,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 8755 "y.tab.c" /* yacc.c:1651  */
    break;

  case 112:
#line 291 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x92}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 8761 "y.tab.c" /* yacc.c:1651  */
    break;

  case 113:
#line 292 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x97};  emit(instr,2); }
#line 8767 "y.tab.c" /* yacc.c:1651  */
    break;

  case 114:
#line 293 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x92}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 8773 "y.tab.c" /* yacc.c:1651  */
    break;

  case 115:
#line 294 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x92}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 8779 "y.tab.c" /* yacc.c:1651  */
    break;

  case 116:
#line 295 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x92}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 8785 "y.tab.c" /* yacc.c:1651  */
    break;

  case 117:
#line 296 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x91};  emit(instr,2); }
#line 8791 "y.tab.c" /* yacc.c:1651  */
    break;

  case 118:
#line 297 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x91};  emit(instr,2); }
#line 8797 "y.tab.c" /* yacc.c:1651  */
    break;

  case 119:
#line 298 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x91};  emit(instr,2); }
#line 8803 "y.tab.c" /* yacc.c:1651  */
    break;

  case 120:
#line 299 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x91};  emit(instr,2); }
#line 8809 "y.tab.c" /* yacc.c:1651  */
    break;

  case 121:
#line 300 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x91};  emit(instr,2); }
#line 8815 "y.tab.c" /* yacc.c:1651  */
    break;

  case 122:
#line 301 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x91};  emit(instr,2); }
#line 8821 "y.tab.c" /* yacc.c:1651  */
    break;

  case 123:
#line 302 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x91};  emit(instr,2); }
#line 8827 "y.tab.c" /* yacc.c:1651  */
    break;

  case 124:
#line 303 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x91};  emit(instr,2); }
#line 8833 "y.tab.c" /* yacc.c:1651  */
    break;

  case 125:
#line 304 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x91};  emit(instr,2); }
#line 8839 "y.tab.c" /* yacc.c:1651  */
    break;

  case 126:
#line 305 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x91};  emit(instr,2); }
#line 8845 "y.tab.c" /* yacc.c:1651  */
    break;

  case 127:
#line 306 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x91}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 8851 "y.tab.c" /* yacc.c:1651  */
    break;

  case 128:
#line 307 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x91}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 8857 "y.tab.c" /* yacc.c:1651  */
    break;

  case 129:
#line 308 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x91};  emit(instr,2); }
#line 8863 "y.tab.c" /* yacc.c:1651  */
    break;

  case 130:
#line 309 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x91}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 8869 "y.tab.c" /* yacc.c:1651  */
    break;

  case 131:
#line 310 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x91}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 8875 "y.tab.c" /* yacc.c:1651  */
    break;

  case 132:
#line 311 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x91}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 8881 "y.tab.c" /* yacc.c:1651  */
    break;

  case 133:
#line 312 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8887 "y.tab.c" /* yacc.c:1651  */
    break;

  case 134:
#line 313 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8893 "y.tab.c" /* yacc.c:1651  */
    break;

  case 135:
#line 314 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8899 "y.tab.c" /* yacc.c:1651  */
    break;

  case 136:
#line 315 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8905 "y.tab.c" /* yacc.c:1651  */
    break;

  case 137:
#line 316 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8911 "y.tab.c" /* yacc.c:1651  */
    break;

  case 138:
#line 317 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8917 "y.tab.c" /* yacc.c:1651  */
    break;

  case 139:
#line 318 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8923 "y.tab.c" /* yacc.c:1651  */
    break;

  case 140:
#line 319 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8929 "y.tab.c" /* yacc.c:1651  */
    break;

  case 141:
#line 320 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8935 "y.tab.c" /* yacc.c:1651  */
    break;

  case 142:
#line 321 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8941 "y.tab.c" /* yacc.c:1651  */
    break;

  case 143:
#line 322 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0x93,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 8947 "y.tab.c" /* yacc.c:1651  */
    break;

  case 144:
#line 323 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0x93,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 8953 "y.tab.c" /* yacc.c:1651  */
    break;

  case 145:
#line 324 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0x93,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8959 "y.tab.c" /* yacc.c:1651  */
    break;

  case 146:
#line 325 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0x93,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 8965 "y.tab.c" /* yacc.c:1651  */
    break;

  case 147:
#line 326 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0x93,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 8971 "y.tab.c" /* yacc.c:1651  */
    break;

  case 148:
#line 327 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0x93,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 8977 "y.tab.c" /* yacc.c:1651  */
    break;

  case 149:
#line 328 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8983 "y.tab.c" /* yacc.c:1651  */
    break;

  case 150:
#line 329 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8989 "y.tab.c" /* yacc.c:1651  */
    break;

  case 151:
#line 330 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 8995 "y.tab.c" /* yacc.c:1651  */
    break;

  case 152:
#line 331 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9001 "y.tab.c" /* yacc.c:1651  */
    break;

  case 153:
#line 332 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9007 "y.tab.c" /* yacc.c:1651  */
    break;

  case 154:
#line 333 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9013 "y.tab.c" /* yacc.c:1651  */
    break;

  case 155:
#line 334 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9019 "y.tab.c" /* yacc.c:1651  */
    break;

  case 156:
#line 335 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9025 "y.tab.c" /* yacc.c:1651  */
    break;

  case 157:
#line 336 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9031 "y.tab.c" /* yacc.c:1651  */
    break;

  case 158:
#line 337 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9037 "y.tab.c" /* yacc.c:1651  */
    break;

  case 159:
#line 338 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0x90,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9043 "y.tab.c" /* yacc.c:1651  */
    break;

  case 160:
#line 339 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0x90,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9049 "y.tab.c" /* yacc.c:1651  */
    break;

  case 161:
#line 340 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0x90,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9055 "y.tab.c" /* yacc.c:1651  */
    break;

  case 162:
#line 341 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0x90,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9061 "y.tab.c" /* yacc.c:1651  */
    break;

  case 163:
#line 342 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0x90,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 9067 "y.tab.c" /* yacc.c:1651  */
    break;

  case 164:
#line 343 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0x90,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 9073 "y.tab.c" /* yacc.c:1651  */
    break;

  case 165:
#line 344 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x86,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 9079 "y.tab.c" /* yacc.c:1651  */
    break;

  case 166:
#line 345 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x08};  emit(instr,1); }
#line 9085 "y.tab.c" /* yacc.c:1651  */
    break;

  case 167:
#line 346 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x09};  emit(instr,1); }
#line 9091 "y.tab.c" /* yacc.c:1651  */
    break;

  case 168:
#line 347 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x0A};  emit(instr,1); }
#line 9097 "y.tab.c" /* yacc.c:1651  */
    break;

  case 169:
#line 348 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x0B};  emit(instr,1); }
#line 9103 "y.tab.c" /* yacc.c:1651  */
    break;

  case 170:
#line 349 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x82};  emit(instr,2); }
#line 9109 "y.tab.c" /* yacc.c:1651  */
    break;

  case 171:
#line 350 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x82};  emit(instr,2); }
#line 9115 "y.tab.c" /* yacc.c:1651  */
    break;

  case 172:
#line 351 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x82};  emit(instr,2); }
#line 9121 "y.tab.c" /* yacc.c:1651  */
    break;

  case 173:
#line 352 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x82};  emit(instr,2); }
#line 9127 "y.tab.c" /* yacc.c:1651  */
    break;

  case 174:
#line 353 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x82};  emit(instr,2); }
#line 9133 "y.tab.c" /* yacc.c:1651  */
    break;

  case 175:
#line 354 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x82};  emit(instr,2); }
#line 9139 "y.tab.c" /* yacc.c:1651  */
    break;

  case 176:
#line 355 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x87,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 9145 "y.tab.c" /* yacc.c:1651  */
    break;

  case 177:
#line 356 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x82}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 9151 "y.tab.c" /* yacc.c:1651  */
    break;

  case 178:
#line 357 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x82};  emit(instr,2); }
#line 9157 "y.tab.c" /* yacc.c:1651  */
    break;

  case 179:
#line 358 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x82}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 9163 "y.tab.c" /* yacc.c:1651  */
    break;

  case 180:
#line 359 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x82}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 9169 "y.tab.c" /* yacc.c:1651  */
    break;

  case 181:
#line 360 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x82}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 9175 "y.tab.c" /* yacc.c:1651  */
    break;

  case 182:
#line 361 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x81};  emit(instr,2); }
#line 9181 "y.tab.c" /* yacc.c:1651  */
    break;

  case 183:
#line 362 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x81};  emit(instr,2); }
#line 9187 "y.tab.c" /* yacc.c:1651  */
    break;

  case 184:
#line 363 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x81};  emit(instr,2); }
#line 9193 "y.tab.c" /* yacc.c:1651  */
    break;

  case 185:
#line 364 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x81};  emit(instr,2); }
#line 9199 "y.tab.c" /* yacc.c:1651  */
    break;

  case 186:
#line 365 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x81};  emit(instr,2); }
#line 9205 "y.tab.c" /* yacc.c:1651  */
    break;

  case 187:
#line 366 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x81};  emit(instr,2); }
#line 9211 "y.tab.c" /* yacc.c:1651  */
    break;

  case 188:
#line 367 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x81};  emit(instr,2); }
#line 9217 "y.tab.c" /* yacc.c:1651  */
    break;

  case 189:
#line 368 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x81};  emit(instr,2); }
#line 9223 "y.tab.c" /* yacc.c:1651  */
    break;

  case 190:
#line 369 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x81};  emit(instr,2); }
#line 9229 "y.tab.c" /* yacc.c:1651  */
    break;

  case 191:
#line 370 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x81};  emit(instr,2); }
#line 9235 "y.tab.c" /* yacc.c:1651  */
    break;

  case 192:
#line 371 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x81}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 9241 "y.tab.c" /* yacc.c:1651  */
    break;

  case 193:
#line 372 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x81}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 9247 "y.tab.c" /* yacc.c:1651  */
    break;

  case 194:
#line 373 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x81};  emit(instr,2); }
#line 9253 "y.tab.c" /* yacc.c:1651  */
    break;

  case 195:
#line 374 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x81}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 9259 "y.tab.c" /* yacc.c:1651  */
    break;

  case 196:
#line 375 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x81}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 9265 "y.tab.c" /* yacc.c:1651  */
    break;

  case 197:
#line 376 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x81}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 9271 "y.tab.c" /* yacc.c:1651  */
    break;

  case 198:
#line 377 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9277 "y.tab.c" /* yacc.c:1651  */
    break;

  case 199:
#line 378 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9283 "y.tab.c" /* yacc.c:1651  */
    break;

  case 200:
#line 379 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9289 "y.tab.c" /* yacc.c:1651  */
    break;

  case 201:
#line 380 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9295 "y.tab.c" /* yacc.c:1651  */
    break;

  case 202:
#line 381 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9301 "y.tab.c" /* yacc.c:1651  */
    break;

  case 203:
#line 382 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9307 "y.tab.c" /* yacc.c:1651  */
    break;

  case 204:
#line 383 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9313 "y.tab.c" /* yacc.c:1651  */
    break;

  case 205:
#line 384 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9319 "y.tab.c" /* yacc.c:1651  */
    break;

  case 206:
#line 385 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9325 "y.tab.c" /* yacc.c:1651  */
    break;

  case 207:
#line 386 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0x83,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9331 "y.tab.c" /* yacc.c:1651  */
    break;

  case 208:
#line 387 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0x83,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9337 "y.tab.c" /* yacc.c:1651  */
    break;

  case 209:
#line 388 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9343 "y.tab.c" /* yacc.c:1651  */
    break;

  case 210:
#line 389 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0x83,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9349 "y.tab.c" /* yacc.c:1651  */
    break;

  case 211:
#line 390 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0x83,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 9355 "y.tab.c" /* yacc.c:1651  */
    break;

  case 212:
#line 391 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0x83,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 9361 "y.tab.c" /* yacc.c:1651  */
    break;

  case 213:
#line 392 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9367 "y.tab.c" /* yacc.c:1651  */
    break;

  case 214:
#line 393 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9373 "y.tab.c" /* yacc.c:1651  */
    break;

  case 215:
#line 394 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9379 "y.tab.c" /* yacc.c:1651  */
    break;

  case 216:
#line 395 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9385 "y.tab.c" /* yacc.c:1651  */
    break;

  case 217:
#line 396 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9391 "y.tab.c" /* yacc.c:1651  */
    break;

  case 218:
#line 397 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9397 "y.tab.c" /* yacc.c:1651  */
    break;

  case 219:
#line 398 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9403 "y.tab.c" /* yacc.c:1651  */
    break;

  case 220:
#line 399 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9409 "y.tab.c" /* yacc.c:1651  */
    break;

  case 221:
#line 400 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9415 "y.tab.c" /* yacc.c:1651  */
    break;

  case 222:
#line 401 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA4,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9421 "y.tab.c" /* yacc.c:1651  */
    break;

  case 223:
#line 402 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0x80,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 9427 "y.tab.c" /* yacc.c:1651  */
    break;

  case 224:
#line 403 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0x80,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 9433 "y.tab.c" /* yacc.c:1651  */
    break;

  case 225:
#line 404 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0x80,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 9439 "y.tab.c" /* yacc.c:1651  */
    break;

  case 226:
#line 405 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0x80,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 9445 "y.tab.c" /* yacc.c:1651  */
    break;

  case 227:
#line 406 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0x80,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 9451 "y.tab.c" /* yacc.c:1651  */
    break;

  case 228:
#line 407 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0x80,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 9457 "y.tab.c" /* yacc.c:1651  */
    break;

  case 229:
#line 408 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x86,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 9463 "y.tab.c" /* yacc.c:1651  */
    break;

  case 230:
#line 409 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x08};  emit(instr,1); }
#line 9469 "y.tab.c" /* yacc.c:1651  */
    break;

  case 231:
#line 410 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x09};  emit(instr,1); }
#line 9475 "y.tab.c" /* yacc.c:1651  */
    break;

  case 232:
#line 411 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x0A};  emit(instr,1); }
#line 9481 "y.tab.c" /* yacc.c:1651  */
    break;

  case 233:
#line 412 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x0B};  emit(instr,1); }
#line 9487 "y.tab.c" /* yacc.c:1651  */
    break;

  case 234:
#line 413 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x0C};  emit(instr,1); }
#line 9493 "y.tab.c" /* yacc.c:1651  */
    break;

  case 235:
#line 414 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x0D};  emit(instr,1); }
#line 9499 "y.tab.c" /* yacc.c:1651  */
    break;

  case 236:
#line 415 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x0E};  emit(instr,1); }
#line 9505 "y.tab.c" /* yacc.c:1651  */
    break;

  case 237:
#line 416 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x0F};  emit(instr,1); }
#line 9511 "y.tab.c" /* yacc.c:1651  */
    break;

  case 238:
#line 417 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x82};  emit(instr,2); }
#line 9517 "y.tab.c" /* yacc.c:1651  */
    break;

  case 239:
#line 418 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x82};  emit(instr,2); }
#line 9523 "y.tab.c" /* yacc.c:1651  */
    break;

  case 240:
#line 419 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x87,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 9529 "y.tab.c" /* yacc.c:1651  */
    break;

  case 241:
#line 420 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x82}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 9535 "y.tab.c" /* yacc.c:1651  */
    break;

  case 242:
#line 421 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x82};  emit(instr,2); }
#line 9541 "y.tab.c" /* yacc.c:1651  */
    break;

  case 243:
#line 422 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x82}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 9547 "y.tab.c" /* yacc.c:1651  */
    break;

  case 244:
#line 423 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x82}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 9553 "y.tab.c" /* yacc.c:1651  */
    break;

  case 245:
#line 424 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x82}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 9559 "y.tab.c" /* yacc.c:1651  */
    break;

  case 246:
#line 425 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x81};  emit(instr,2); }
#line 9565 "y.tab.c" /* yacc.c:1651  */
    break;

  case 247:
#line 426 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x81};  emit(instr,2); }
#line 9571 "y.tab.c" /* yacc.c:1651  */
    break;

  case 248:
#line 427 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x81};  emit(instr,2); }
#line 9577 "y.tab.c" /* yacc.c:1651  */
    break;

  case 249:
#line 428 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x81};  emit(instr,2); }
#line 9583 "y.tab.c" /* yacc.c:1651  */
    break;

  case 250:
#line 429 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x81};  emit(instr,2); }
#line 9589 "y.tab.c" /* yacc.c:1651  */
    break;

  case 251:
#line 430 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x81};  emit(instr,2); }
#line 9595 "y.tab.c" /* yacc.c:1651  */
    break;

  case 252:
#line 431 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x81};  emit(instr,2); }
#line 9601 "y.tab.c" /* yacc.c:1651  */
    break;

  case 253:
#line 432 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x81};  emit(instr,2); }
#line 9607 "y.tab.c" /* yacc.c:1651  */
    break;

  case 254:
#line 433 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x81};  emit(instr,2); }
#line 9613 "y.tab.c" /* yacc.c:1651  */
    break;

  case 255:
#line 434 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x81};  emit(instr,2); }
#line 9619 "y.tab.c" /* yacc.c:1651  */
    break;

  case 256:
#line 435 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x81}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 9625 "y.tab.c" /* yacc.c:1651  */
    break;

  case 257:
#line 436 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x81}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 9631 "y.tab.c" /* yacc.c:1651  */
    break;

  case 258:
#line 437 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x81};  emit(instr,2); }
#line 9637 "y.tab.c" /* yacc.c:1651  */
    break;

  case 259:
#line 438 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x81}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 9643 "y.tab.c" /* yacc.c:1651  */
    break;

  case 260:
#line 439 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x81}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 9649 "y.tab.c" /* yacc.c:1651  */
    break;

  case 261:
#line 440 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x81}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 9655 "y.tab.c" /* yacc.c:1651  */
    break;

  case 262:
#line 441 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9661 "y.tab.c" /* yacc.c:1651  */
    break;

  case 263:
#line 442 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9667 "y.tab.c" /* yacc.c:1651  */
    break;

  case 264:
#line 443 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9673 "y.tab.c" /* yacc.c:1651  */
    break;

  case 265:
#line 444 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9679 "y.tab.c" /* yacc.c:1651  */
    break;

  case 266:
#line 445 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9685 "y.tab.c" /* yacc.c:1651  */
    break;

  case 267:
#line 446 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9691 "y.tab.c" /* yacc.c:1651  */
    break;

  case 268:
#line 447 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9697 "y.tab.c" /* yacc.c:1651  */
    break;

  case 269:
#line 448 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9703 "y.tab.c" /* yacc.c:1651  */
    break;

  case 270:
#line 449 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9709 "y.tab.c" /* yacc.c:1651  */
    break;

  case 271:
#line 450 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9715 "y.tab.c" /* yacc.c:1651  */
    break;

  case 272:
#line 451 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0x83,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9721 "y.tab.c" /* yacc.c:1651  */
    break;

  case 273:
#line 452 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0x83,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9727 "y.tab.c" /* yacc.c:1651  */
    break;

  case 274:
#line 453 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0x83,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9733 "y.tab.c" /* yacc.c:1651  */
    break;

  case 275:
#line 454 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0x83,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9739 "y.tab.c" /* yacc.c:1651  */
    break;

  case 276:
#line 455 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0x83,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 9745 "y.tab.c" /* yacc.c:1651  */
    break;

  case 277:
#line 456 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0x83,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 9751 "y.tab.c" /* yacc.c:1651  */
    break;

  case 278:
#line 457 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9757 "y.tab.c" /* yacc.c:1651  */
    break;

  case 279:
#line 458 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9763 "y.tab.c" /* yacc.c:1651  */
    break;

  case 280:
#line 459 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9769 "y.tab.c" /* yacc.c:1651  */
    break;

  case 281:
#line 460 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9775 "y.tab.c" /* yacc.c:1651  */
    break;

  case 282:
#line 461 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9781 "y.tab.c" /* yacc.c:1651  */
    break;

  case 283:
#line 462 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9787 "y.tab.c" /* yacc.c:1651  */
    break;

  case 284:
#line 463 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9793 "y.tab.c" /* yacc.c:1651  */
    break;

  case 285:
#line 464 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9799 "y.tab.c" /* yacc.c:1651  */
    break;

  case 286:
#line 465 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9805 "y.tab.c" /* yacc.c:1651  */
    break;

  case 287:
#line 466 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9811 "y.tab.c" /* yacc.c:1651  */
    break;

  case 288:
#line 467 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0x80,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9817 "y.tab.c" /* yacc.c:1651  */
    break;

  case 289:
#line 468 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0x80,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9823 "y.tab.c" /* yacc.c:1651  */
    break;

  case 290:
#line 469 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0x80,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 9829 "y.tab.c" /* yacc.c:1651  */
    break;

  case 291:
#line 470 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0x80,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 9835 "y.tab.c" /* yacc.c:1651  */
    break;

  case 292:
#line 471 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0x80,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 9841 "y.tab.c" /* yacc.c:1651  */
    break;

  case 293:
#line 472 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0x80,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 9847 "y.tab.c" /* yacc.c:1651  */
    break;

  case 294:
#line 473 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xD1};  emit(instr,2); }
#line 9853 "y.tab.c" /* yacc.c:1651  */
    break;

  case 295:
#line 474 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xD1};  emit(instr,2); }
#line 9859 "y.tab.c" /* yacc.c:1651  */
    break;

  case 296:
#line 475 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xD1};  emit(instr,2); }
#line 9865 "y.tab.c" /* yacc.c:1651  */
    break;

  case 297:
#line 476 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xD1};  emit(instr,2); }
#line 9871 "y.tab.c" /* yacc.c:1651  */
    break;

  case 298:
#line 477 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xD1};  emit(instr,2); }
#line 9877 "y.tab.c" /* yacc.c:1651  */
    break;

  case 299:
#line 478 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xD1};  emit(instr,2); }
#line 9883 "y.tab.c" /* yacc.c:1651  */
    break;

  case 300:
#line 479 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xD1};  emit(instr,2); }
#line 9889 "y.tab.c" /* yacc.c:1651  */
    break;

  case 301:
#line 480 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xD1};  emit(instr,2); }
#line 9895 "y.tab.c" /* yacc.c:1651  */
    break;

  case 302:
#line 481 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xD1};  emit(instr,2); }
#line 9901 "y.tab.c" /* yacc.c:1651  */
    break;

  case 303:
#line 482 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xD1};  emit(instr,2); }
#line 9907 "y.tab.c" /* yacc.c:1651  */
    break;

  case 304:
#line 483 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xD1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 9913 "y.tab.c" /* yacc.c:1651  */
    break;

  case 305:
#line 484 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xD1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 9919 "y.tab.c" /* yacc.c:1651  */
    break;

  case 306:
#line 485 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xD1};  emit(instr,2); }
#line 9925 "y.tab.c" /* yacc.c:1651  */
    break;

  case 307:
#line 486 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xD1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 9931 "y.tab.c" /* yacc.c:1651  */
    break;

  case 308:
#line 487 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xD1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 9937 "y.tab.c" /* yacc.c:1651  */
    break;

  case 309:
#line 488 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xD1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 9943 "y.tab.c" /* yacc.c:1651  */
    break;

  case 310:
#line 489 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xD6,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 9949 "y.tab.c" /* yacc.c:1651  */
    break;

  case 311:
#line 490 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x58};  emit(instr,1); }
#line 9955 "y.tab.c" /* yacc.c:1651  */
    break;

  case 312:
#line 491 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x59};  emit(instr,1); }
#line 9961 "y.tab.c" /* yacc.c:1651  */
    break;

  case 313:
#line 492 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x5A};  emit(instr,1); }
#line 9967 "y.tab.c" /* yacc.c:1651  */
    break;

  case 314:
#line 493 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x5B};  emit(instr,1); }
#line 9973 "y.tab.c" /* yacc.c:1651  */
    break;

  case 315:
#line 494 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xD2};  emit(instr,2); }
#line 9979 "y.tab.c" /* yacc.c:1651  */
    break;

  case 316:
#line 495 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xD2};  emit(instr,2); }
#line 9985 "y.tab.c" /* yacc.c:1651  */
    break;

  case 317:
#line 496 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xD2};  emit(instr,2); }
#line 9991 "y.tab.c" /* yacc.c:1651  */
    break;

  case 318:
#line 497 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xD2};  emit(instr,2); }
#line 9997 "y.tab.c" /* yacc.c:1651  */
    break;

  case 319:
#line 498 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xD2};  emit(instr,2); }
#line 10003 "y.tab.c" /* yacc.c:1651  */
    break;

  case 320:
#line 499 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xD2};  emit(instr,2); }
#line 10009 "y.tab.c" /* yacc.c:1651  */
    break;

  case 321:
#line 500 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 10015 "y.tab.c" /* yacc.c:1651  */
    break;

  case 322:
#line 501 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xD2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 10021 "y.tab.c" /* yacc.c:1651  */
    break;

  case 323:
#line 502 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xD2};  emit(instr,2); }
#line 10027 "y.tab.c" /* yacc.c:1651  */
    break;

  case 324:
#line 503 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xD2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 10033 "y.tab.c" /* yacc.c:1651  */
    break;

  case 325:
#line 504 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xD2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 10039 "y.tab.c" /* yacc.c:1651  */
    break;

  case 326:
#line 505 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xD2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 10045 "y.tab.c" /* yacc.c:1651  */
    break;

  case 327:
#line 506 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10051 "y.tab.c" /* yacc.c:1651  */
    break;

  case 328:
#line 507 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10057 "y.tab.c" /* yacc.c:1651  */
    break;

  case 329:
#line 508 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10063 "y.tab.c" /* yacc.c:1651  */
    break;

  case 330:
#line 509 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10069 "y.tab.c" /* yacc.c:1651  */
    break;

  case 331:
#line 510 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10075 "y.tab.c" /* yacc.c:1651  */
    break;

  case 332:
#line 511 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10081 "y.tab.c" /* yacc.c:1651  */
    break;

  case 333:
#line 512 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10087 "y.tab.c" /* yacc.c:1651  */
    break;

  case 334:
#line 513 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10093 "y.tab.c" /* yacc.c:1651  */
    break;

  case 335:
#line 514 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10099 "y.tab.c" /* yacc.c:1651  */
    break;

  case 336:
#line 515 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0xD3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10105 "y.tab.c" /* yacc.c:1651  */
    break;

  case 337:
#line 516 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0xD3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10111 "y.tab.c" /* yacc.c:1651  */
    break;

  case 338:
#line 517 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10117 "y.tab.c" /* yacc.c:1651  */
    break;

  case 339:
#line 518 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0xD3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10123 "y.tab.c" /* yacc.c:1651  */
    break;

  case 340:
#line 519 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0xD3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 10129 "y.tab.c" /* yacc.c:1651  */
    break;

  case 341:
#line 520 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0xD3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 10135 "y.tab.c" /* yacc.c:1651  */
    break;

  case 342:
#line 521 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10141 "y.tab.c" /* yacc.c:1651  */
    break;

  case 343:
#line 522 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10147 "y.tab.c" /* yacc.c:1651  */
    break;

  case 344:
#line 523 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10153 "y.tab.c" /* yacc.c:1651  */
    break;

  case 345:
#line 524 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10159 "y.tab.c" /* yacc.c:1651  */
    break;

  case 346:
#line 525 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10165 "y.tab.c" /* yacc.c:1651  */
    break;

  case 347:
#line 526 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10171 "y.tab.c" /* yacc.c:1651  */
    break;

  case 348:
#line 527 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10177 "y.tab.c" /* yacc.c:1651  */
    break;

  case 349:
#line 528 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10183 "y.tab.c" /* yacc.c:1651  */
    break;

  case 350:
#line 529 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10189 "y.tab.c" /* yacc.c:1651  */
    break;

  case 351:
#line 530 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA4,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10195 "y.tab.c" /* yacc.c:1651  */
    break;

  case 352:
#line 531 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xD0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 10201 "y.tab.c" /* yacc.c:1651  */
    break;

  case 353:
#line 532 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xD0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 10207 "y.tab.c" /* yacc.c:1651  */
    break;

  case 354:
#line 533 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 10213 "y.tab.c" /* yacc.c:1651  */
    break;

  case 355:
#line 534 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0xD0,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 10219 "y.tab.c" /* yacc.c:1651  */
    break;

  case 356:
#line 535 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0xD0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 10225 "y.tab.c" /* yacc.c:1651  */
    break;

  case 357:
#line 536 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0xD0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 10231 "y.tab.c" /* yacc.c:1651  */
    break;

  case 358:
#line 537 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD6,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 10237 "y.tab.c" /* yacc.c:1651  */
    break;

  case 359:
#line 538 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x58};  emit(instr,1); }
#line 10243 "y.tab.c" /* yacc.c:1651  */
    break;

  case 360:
#line 539 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x59};  emit(instr,1); }
#line 10249 "y.tab.c" /* yacc.c:1651  */
    break;

  case 361:
#line 540 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x5A};  emit(instr,1); }
#line 10255 "y.tab.c" /* yacc.c:1651  */
    break;

  case 362:
#line 541 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x5B};  emit(instr,1); }
#line 10261 "y.tab.c" /* yacc.c:1651  */
    break;

  case 363:
#line 542 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x5C};  emit(instr,1); }
#line 10267 "y.tab.c" /* yacc.c:1651  */
    break;

  case 364:
#line 543 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x5D};  emit(instr,1); }
#line 10273 "y.tab.c" /* yacc.c:1651  */
    break;

  case 365:
#line 544 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x5E};  emit(instr,1); }
#line 10279 "y.tab.c" /* yacc.c:1651  */
    break;

  case 366:
#line 545 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x5F};  emit(instr,1); }
#line 10285 "y.tab.c" /* yacc.c:1651  */
    break;

  case 367:
#line 546 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xD2};  emit(instr,2); }
#line 10291 "y.tab.c" /* yacc.c:1651  */
    break;

  case 368:
#line 547 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xD2};  emit(instr,2); }
#line 10297 "y.tab.c" /* yacc.c:1651  */
    break;

  case 369:
#line 548 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 10303 "y.tab.c" /* yacc.c:1651  */
    break;

  case 370:
#line 549 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xD2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 10309 "y.tab.c" /* yacc.c:1651  */
    break;

  case 371:
#line 550 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xD2};  emit(instr,2); }
#line 10315 "y.tab.c" /* yacc.c:1651  */
    break;

  case 372:
#line 551 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xD2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 10321 "y.tab.c" /* yacc.c:1651  */
    break;

  case 373:
#line 552 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xD2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 10327 "y.tab.c" /* yacc.c:1651  */
    break;

  case 374:
#line 553 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xD2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 10333 "y.tab.c" /* yacc.c:1651  */
    break;

  case 375:
#line 554 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xD1};  emit(instr,2); }
#line 10339 "y.tab.c" /* yacc.c:1651  */
    break;

  case 376:
#line 555 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xD1};  emit(instr,2); }
#line 10345 "y.tab.c" /* yacc.c:1651  */
    break;

  case 377:
#line 556 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xD1};  emit(instr,2); }
#line 10351 "y.tab.c" /* yacc.c:1651  */
    break;

  case 378:
#line 557 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xD1};  emit(instr,2); }
#line 10357 "y.tab.c" /* yacc.c:1651  */
    break;

  case 379:
#line 558 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xD1};  emit(instr,2); }
#line 10363 "y.tab.c" /* yacc.c:1651  */
    break;

  case 380:
#line 559 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xD1};  emit(instr,2); }
#line 10369 "y.tab.c" /* yacc.c:1651  */
    break;

  case 381:
#line 560 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xD1};  emit(instr,2); }
#line 10375 "y.tab.c" /* yacc.c:1651  */
    break;

  case 382:
#line 561 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xD1};  emit(instr,2); }
#line 10381 "y.tab.c" /* yacc.c:1651  */
    break;

  case 383:
#line 562 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xD1};  emit(instr,2); }
#line 10387 "y.tab.c" /* yacc.c:1651  */
    break;

  case 384:
#line 563 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xD1};  emit(instr,2); }
#line 10393 "y.tab.c" /* yacc.c:1651  */
    break;

  case 385:
#line 564 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xD1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 10399 "y.tab.c" /* yacc.c:1651  */
    break;

  case 386:
#line 565 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xD1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 10405 "y.tab.c" /* yacc.c:1651  */
    break;

  case 387:
#line 566 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xD1};  emit(instr,2); }
#line 10411 "y.tab.c" /* yacc.c:1651  */
    break;

  case 388:
#line 567 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xD1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 10417 "y.tab.c" /* yacc.c:1651  */
    break;

  case 389:
#line 568 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xD1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 10423 "y.tab.c" /* yacc.c:1651  */
    break;

  case 390:
#line 569 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xD1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 10429 "y.tab.c" /* yacc.c:1651  */
    break;

  case 391:
#line 570 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10435 "y.tab.c" /* yacc.c:1651  */
    break;

  case 392:
#line 571 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10441 "y.tab.c" /* yacc.c:1651  */
    break;

  case 393:
#line 572 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10447 "y.tab.c" /* yacc.c:1651  */
    break;

  case 394:
#line 573 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10453 "y.tab.c" /* yacc.c:1651  */
    break;

  case 395:
#line 574 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10459 "y.tab.c" /* yacc.c:1651  */
    break;

  case 396:
#line 575 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10465 "y.tab.c" /* yacc.c:1651  */
    break;

  case 397:
#line 576 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10471 "y.tab.c" /* yacc.c:1651  */
    break;

  case 398:
#line 577 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10477 "y.tab.c" /* yacc.c:1651  */
    break;

  case 399:
#line 578 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10483 "y.tab.c" /* yacc.c:1651  */
    break;

  case 400:
#line 579 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10489 "y.tab.c" /* yacc.c:1651  */
    break;

  case 401:
#line 580 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xD3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10495 "y.tab.c" /* yacc.c:1651  */
    break;

  case 402:
#line 581 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xD3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10501 "y.tab.c" /* yacc.c:1651  */
    break;

  case 403:
#line 582 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xD3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10507 "y.tab.c" /* yacc.c:1651  */
    break;

  case 404:
#line 583 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xD3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10513 "y.tab.c" /* yacc.c:1651  */
    break;

  case 405:
#line 584 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xD3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 10519 "y.tab.c" /* yacc.c:1651  */
    break;

  case 406:
#line 585 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xD3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 10525 "y.tab.c" /* yacc.c:1651  */
    break;

  case 407:
#line 586 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10531 "y.tab.c" /* yacc.c:1651  */
    break;

  case 408:
#line 587 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10537 "y.tab.c" /* yacc.c:1651  */
    break;

  case 409:
#line 588 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10543 "y.tab.c" /* yacc.c:1651  */
    break;

  case 410:
#line 589 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10549 "y.tab.c" /* yacc.c:1651  */
    break;

  case 411:
#line 590 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10555 "y.tab.c" /* yacc.c:1651  */
    break;

  case 412:
#line 591 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10561 "y.tab.c" /* yacc.c:1651  */
    break;

  case 413:
#line 592 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10567 "y.tab.c" /* yacc.c:1651  */
    break;

  case 414:
#line 593 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10573 "y.tab.c" /* yacc.c:1651  */
    break;

  case 415:
#line 594 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10579 "y.tab.c" /* yacc.c:1651  */
    break;

  case 416:
#line 595 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10585 "y.tab.c" /* yacc.c:1651  */
    break;

  case 417:
#line 596 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xD0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10591 "y.tab.c" /* yacc.c:1651  */
    break;

  case 418:
#line 597 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xD0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10597 "y.tab.c" /* yacc.c:1651  */
    break;

  case 419:
#line 598 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xD0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 10603 "y.tab.c" /* yacc.c:1651  */
    break;

  case 420:
#line 599 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xD0,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 10609 "y.tab.c" /* yacc.c:1651  */
    break;

  case 421:
#line 600 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xD0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 10615 "y.tab.c" /* yacc.c:1651  */
    break;

  case 422:
#line 601 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xD0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 10621 "y.tab.c" /* yacc.c:1651  */
    break;

  case 423:
#line 602 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xFF};  emit(instr,1); }
#line 10627 "y.tab.c" /* yacc.c:1651  */
    break;

  case 424:
#line 603 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x32,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 10633 "y.tab.c" /* yacc.c:1651  */
    break;

  case 425:
#line 604 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x23};  emit(instr,2); }
#line 10639 "y.tab.c" /* yacc.c:1651  */
    break;

  case 426:
#line 605 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x23};  emit(instr,2); }
#line 10645 "y.tab.c" /* yacc.c:1651  */
    break;

  case 427:
#line 606 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x23};  emit(instr,2); }
#line 10651 "y.tab.c" /* yacc.c:1651  */
    break;

  case 428:
#line 607 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x23};  emit(instr,2); }
#line 10657 "y.tab.c" /* yacc.c:1651  */
    break;

  case 429:
#line 608 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x23};  emit(instr,2); }
#line 10663 "y.tab.c" /* yacc.c:1651  */
    break;

  case 430:
#line 609 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x23};  emit(instr,2); }
#line 10669 "y.tab.c" /* yacc.c:1651  */
    break;

  case 431:
#line 610 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x23};  emit(instr,2); }
#line 10675 "y.tab.c" /* yacc.c:1651  */
    break;

  case 432:
#line 611 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x23};  emit(instr,2); }
#line 10681 "y.tab.c" /* yacc.c:1651  */
    break;

  case 433:
#line 612 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x23};  emit(instr,2); }
#line 10687 "y.tab.c" /* yacc.c:1651  */
    break;

  case 434:
#line 613 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x23};  emit(instr,2); }
#line 10693 "y.tab.c" /* yacc.c:1651  */
    break;

  case 435:
#line 614 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x23}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 10699 "y.tab.c" /* yacc.c:1651  */
    break;

  case 436:
#line 615 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x23}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 10705 "y.tab.c" /* yacc.c:1651  */
    break;

  case 437:
#line 616 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x23};  emit(instr,2); }
#line 10711 "y.tab.c" /* yacc.c:1651  */
    break;

  case 438:
#line 617 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x23}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 10717 "y.tab.c" /* yacc.c:1651  */
    break;

  case 439:
#line 618 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x23}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 10723 "y.tab.c" /* yacc.c:1651  */
    break;

  case 440:
#line 619 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x23}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 10729 "y.tab.c" /* yacc.c:1651  */
    break;

  case 441:
#line 620 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xF9};  emit(instr,1); }
#line 10735 "y.tab.c" /* yacc.c:1651  */
    break;

  case 442:
#line 621 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x15};  emit(instr,2); }
#line 10741 "y.tab.c" /* yacc.c:1651  */
    break;

  case 443:
#line 622 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x15};  emit(instr,2); }
#line 10747 "y.tab.c" /* yacc.c:1651  */
    break;

  case 444:
#line 623 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x15};  emit(instr,2); }
#line 10753 "y.tab.c" /* yacc.c:1651  */
    break;

  case 445:
#line 624 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x15};  emit(instr,2); }
#line 10759 "y.tab.c" /* yacc.c:1651  */
    break;

  case 446:
#line 625 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x15};  emit(instr,2); }
#line 10765 "y.tab.c" /* yacc.c:1651  */
    break;

  case 447:
#line 626 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x15};  emit(instr,2); }
#line 10771 "y.tab.c" /* yacc.c:1651  */
    break;

  case 448:
#line 627 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x15};  emit(instr,2); }
#line 10777 "y.tab.c" /* yacc.c:1651  */
    break;

  case 449:
#line 628 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x15};  emit(instr,2); }
#line 10783 "y.tab.c" /* yacc.c:1651  */
    break;

  case 450:
#line 629 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x15};  emit(instr,2); }
#line 10789 "y.tab.c" /* yacc.c:1651  */
    break;

  case 451:
#line 630 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x15};  emit(instr,2); }
#line 10795 "y.tab.c" /* yacc.c:1651  */
    break;

  case 452:
#line 631 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x15}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 10801 "y.tab.c" /* yacc.c:1651  */
    break;

  case 453:
#line 632 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x15}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 10807 "y.tab.c" /* yacc.c:1651  */
    break;

  case 454:
#line 633 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x15};  emit(instr,2); }
#line 10813 "y.tab.c" /* yacc.c:1651  */
    break;

  case 455:
#line 634 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x15}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 10819 "y.tab.c" /* yacc.c:1651  */
    break;

  case 456:
#line 635 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x15}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 10825 "y.tab.c" /* yacc.c:1651  */
    break;

  case 457:
#line 636 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x15}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 10831 "y.tab.c" /* yacc.c:1651  */
    break;

  case 458:
#line 637 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xFA};  emit(instr,1); }
#line 10837 "y.tab.c" /* yacc.c:1651  */
    break;

  case 459:
#line 638 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x15};  emit(instr,2); }
#line 10843 "y.tab.c" /* yacc.c:1651  */
    break;

  case 460:
#line 639 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x15};  emit(instr,2); }
#line 10849 "y.tab.c" /* yacc.c:1651  */
    break;

  case 461:
#line 640 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x15};  emit(instr,2); }
#line 10855 "y.tab.c" /* yacc.c:1651  */
    break;

  case 462:
#line 641 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x15};  emit(instr,2); }
#line 10861 "y.tab.c" /* yacc.c:1651  */
    break;

  case 463:
#line 642 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x15};  emit(instr,2); }
#line 10867 "y.tab.c" /* yacc.c:1651  */
    break;

  case 464:
#line 643 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x15};  emit(instr,2); }
#line 10873 "y.tab.c" /* yacc.c:1651  */
    break;

  case 465:
#line 644 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x15};  emit(instr,2); }
#line 10879 "y.tab.c" /* yacc.c:1651  */
    break;

  case 466:
#line 645 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x15};  emit(instr,2); }
#line 10885 "y.tab.c" /* yacc.c:1651  */
    break;

  case 467:
#line 646 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x15};  emit(instr,2); }
#line 10891 "y.tab.c" /* yacc.c:1651  */
    break;

  case 468:
#line 647 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x15};  emit(instr,2); }
#line 10897 "y.tab.c" /* yacc.c:1651  */
    break;

  case 469:
#line 648 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x15}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 10903 "y.tab.c" /* yacc.c:1651  */
    break;

  case 470:
#line 649 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x15}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 10909 "y.tab.c" /* yacc.c:1651  */
    break;

  case 471:
#line 650 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x15};  emit(instr,2); }
#line 10915 "y.tab.c" /* yacc.c:1651  */
    break;

  case 472:
#line 651 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x15}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 10921 "y.tab.c" /* yacc.c:1651  */
    break;

  case 473:
#line 652 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x15}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 10927 "y.tab.c" /* yacc.c:1651  */
    break;

  case 474:
#line 653 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x15}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 10933 "y.tab.c" /* yacc.c:1651  */
    break;

  case 475:
#line 654 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC6,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 10939 "y.tab.c" /* yacc.c:1651  */
    break;

  case 476:
#line 655 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x48};  emit(instr,1); }
#line 10945 "y.tab.c" /* yacc.c:1651  */
    break;

  case 477:
#line 656 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x49};  emit(instr,1); }
#line 10951 "y.tab.c" /* yacc.c:1651  */
    break;

  case 478:
#line 657 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x4A};  emit(instr,1); }
#line 10957 "y.tab.c" /* yacc.c:1651  */
    break;

  case 479:
#line 658 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x4B};  emit(instr,1); }
#line 10963 "y.tab.c" /* yacc.c:1651  */
    break;

  case 480:
#line 659 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xC2};  emit(instr,2); }
#line 10969 "y.tab.c" /* yacc.c:1651  */
    break;

  case 481:
#line 660 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xC2};  emit(instr,2); }
#line 10975 "y.tab.c" /* yacc.c:1651  */
    break;

  case 482:
#line 661 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xC2};  emit(instr,2); }
#line 10981 "y.tab.c" /* yacc.c:1651  */
    break;

  case 483:
#line 662 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xC2};  emit(instr,2); }
#line 10987 "y.tab.c" /* yacc.c:1651  */
    break;

  case 484:
#line 663 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xC2};  emit(instr,2); }
#line 10993 "y.tab.c" /* yacc.c:1651  */
    break;

  case 485:
#line 664 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xC2};  emit(instr,2); }
#line 10999 "y.tab.c" /* yacc.c:1651  */
    break;

  case 486:
#line 665 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 11005 "y.tab.c" /* yacc.c:1651  */
    break;

  case 487:
#line 666 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xC2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 11011 "y.tab.c" /* yacc.c:1651  */
    break;

  case 488:
#line 667 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xC2};  emit(instr,2); }
#line 11017 "y.tab.c" /* yacc.c:1651  */
    break;

  case 489:
#line 668 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xC2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 11023 "y.tab.c" /* yacc.c:1651  */
    break;

  case 490:
#line 669 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xC2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 11029 "y.tab.c" /* yacc.c:1651  */
    break;

  case 491:
#line 670 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xC2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 11035 "y.tab.c" /* yacc.c:1651  */
    break;

  case 492:
#line 671 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xC1};  emit(instr,2); }
#line 11041 "y.tab.c" /* yacc.c:1651  */
    break;

  case 493:
#line 672 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xC1};  emit(instr,2); }
#line 11047 "y.tab.c" /* yacc.c:1651  */
    break;

  case 494:
#line 673 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xC1};  emit(instr,2); }
#line 11053 "y.tab.c" /* yacc.c:1651  */
    break;

  case 495:
#line 674 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xC1};  emit(instr,2); }
#line 11059 "y.tab.c" /* yacc.c:1651  */
    break;

  case 496:
#line 675 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xC1};  emit(instr,2); }
#line 11065 "y.tab.c" /* yacc.c:1651  */
    break;

  case 497:
#line 676 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xC1};  emit(instr,2); }
#line 11071 "y.tab.c" /* yacc.c:1651  */
    break;

  case 498:
#line 677 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xC1};  emit(instr,2); }
#line 11077 "y.tab.c" /* yacc.c:1651  */
    break;

  case 499:
#line 678 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xC1};  emit(instr,2); }
#line 11083 "y.tab.c" /* yacc.c:1651  */
    break;

  case 500:
#line 679 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xC1};  emit(instr,2); }
#line 11089 "y.tab.c" /* yacc.c:1651  */
    break;

  case 501:
#line 680 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xC1};  emit(instr,2); }
#line 11095 "y.tab.c" /* yacc.c:1651  */
    break;

  case 502:
#line 681 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xC1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 11101 "y.tab.c" /* yacc.c:1651  */
    break;

  case 503:
#line 682 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xC1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 11107 "y.tab.c" /* yacc.c:1651  */
    break;

  case 504:
#line 683 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xC1};  emit(instr,2); }
#line 11113 "y.tab.c" /* yacc.c:1651  */
    break;

  case 505:
#line 684 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xC1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 11119 "y.tab.c" /* yacc.c:1651  */
    break;

  case 506:
#line 685 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xC1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 11125 "y.tab.c" /* yacc.c:1651  */
    break;

  case 507:
#line 686 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xC1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 11131 "y.tab.c" /* yacc.c:1651  */
    break;

  case 508:
#line 687 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11137 "y.tab.c" /* yacc.c:1651  */
    break;

  case 509:
#line 688 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11143 "y.tab.c" /* yacc.c:1651  */
    break;

  case 510:
#line 689 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11149 "y.tab.c" /* yacc.c:1651  */
    break;

  case 511:
#line 690 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11155 "y.tab.c" /* yacc.c:1651  */
    break;

  case 512:
#line 691 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11161 "y.tab.c" /* yacc.c:1651  */
    break;

  case 513:
#line 692 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11167 "y.tab.c" /* yacc.c:1651  */
    break;

  case 514:
#line 693 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11173 "y.tab.c" /* yacc.c:1651  */
    break;

  case 515:
#line 694 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11179 "y.tab.c" /* yacc.c:1651  */
    break;

  case 516:
#line 695 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11185 "y.tab.c" /* yacc.c:1651  */
    break;

  case 517:
#line 696 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA4,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11191 "y.tab.c" /* yacc.c:1651  */
    break;

  case 518:
#line 697 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0xC3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11197 "y.tab.c" /* yacc.c:1651  */
    break;

  case 519:
#line 698 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0xC3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11203 "y.tab.c" /* yacc.c:1651  */
    break;

  case 520:
#line 699 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11209 "y.tab.c" /* yacc.c:1651  */
    break;

  case 521:
#line 700 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0xC3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11215 "y.tab.c" /* yacc.c:1651  */
    break;

  case 522:
#line 701 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0xC3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 11221 "y.tab.c" /* yacc.c:1651  */
    break;

  case 523:
#line 702 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0xC3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 11227 "y.tab.c" /* yacc.c:1651  */
    break;

  case 524:
#line 703 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11233 "y.tab.c" /* yacc.c:1651  */
    break;

  case 525:
#line 704 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11239 "y.tab.c" /* yacc.c:1651  */
    break;

  case 526:
#line 705 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11245 "y.tab.c" /* yacc.c:1651  */
    break;

  case 527:
#line 706 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11251 "y.tab.c" /* yacc.c:1651  */
    break;

  case 528:
#line 707 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11257 "y.tab.c" /* yacc.c:1651  */
    break;

  case 529:
#line 708 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11263 "y.tab.c" /* yacc.c:1651  */
    break;

  case 530:
#line 709 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11269 "y.tab.c" /* yacc.c:1651  */
    break;

  case 531:
#line 710 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11275 "y.tab.c" /* yacc.c:1651  */
    break;

  case 532:
#line 711 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11281 "y.tab.c" /* yacc.c:1651  */
    break;

  case 533:
#line 712 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA4,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11287 "y.tab.c" /* yacc.c:1651  */
    break;

  case 534:
#line 713 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xC0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 11293 "y.tab.c" /* yacc.c:1651  */
    break;

  case 535:
#line 714 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xC0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 11299 "y.tab.c" /* yacc.c:1651  */
    break;

  case 536:
#line 715 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0xC0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11305 "y.tab.c" /* yacc.c:1651  */
    break;

  case 537:
#line 716 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0xC0,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 11311 "y.tab.c" /* yacc.c:1651  */
    break;

  case 538:
#line 717 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0xC0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 11317 "y.tab.c" /* yacc.c:1651  */
    break;

  case 539:
#line 718 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0xC0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 11323 "y.tab.c" /* yacc.c:1651  */
    break;

  case 540:
#line 719 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC6,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 11329 "y.tab.c" /* yacc.c:1651  */
    break;

  case 541:
#line 720 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x48};  emit(instr,1); }
#line 11335 "y.tab.c" /* yacc.c:1651  */
    break;

  case 542:
#line 721 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x49};  emit(instr,1); }
#line 11341 "y.tab.c" /* yacc.c:1651  */
    break;

  case 543:
#line 722 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x4A};  emit(instr,1); }
#line 11347 "y.tab.c" /* yacc.c:1651  */
    break;

  case 544:
#line 723 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x4B};  emit(instr,1); }
#line 11353 "y.tab.c" /* yacc.c:1651  */
    break;

  case 545:
#line 724 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x4C};  emit(instr,1); }
#line 11359 "y.tab.c" /* yacc.c:1651  */
    break;

  case 546:
#line 725 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x4D};  emit(instr,1); }
#line 11365 "y.tab.c" /* yacc.c:1651  */
    break;

  case 547:
#line 726 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x4E};  emit(instr,1); }
#line 11371 "y.tab.c" /* yacc.c:1651  */
    break;

  case 548:
#line 727 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x4F};  emit(instr,1); }
#line 11377 "y.tab.c" /* yacc.c:1651  */
    break;

  case 549:
#line 728 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xC2};  emit(instr,2); }
#line 11383 "y.tab.c" /* yacc.c:1651  */
    break;

  case 550:
#line 729 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xC2};  emit(instr,2); }
#line 11389 "y.tab.c" /* yacc.c:1651  */
    break;

  case 551:
#line 730 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 11395 "y.tab.c" /* yacc.c:1651  */
    break;

  case 552:
#line 731 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xC2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 11401 "y.tab.c" /* yacc.c:1651  */
    break;

  case 553:
#line 732 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xC2};  emit(instr,2); }
#line 11407 "y.tab.c" /* yacc.c:1651  */
    break;

  case 554:
#line 733 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xC2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 11413 "y.tab.c" /* yacc.c:1651  */
    break;

  case 555:
#line 734 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xC2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 11419 "y.tab.c" /* yacc.c:1651  */
    break;

  case 556:
#line 735 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xC2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 11425 "y.tab.c" /* yacc.c:1651  */
    break;

  case 557:
#line 736 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xC1};  emit(instr,2); }
#line 11431 "y.tab.c" /* yacc.c:1651  */
    break;

  case 558:
#line 737 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xC1};  emit(instr,2); }
#line 11437 "y.tab.c" /* yacc.c:1651  */
    break;

  case 559:
#line 738 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xC1};  emit(instr,2); }
#line 11443 "y.tab.c" /* yacc.c:1651  */
    break;

  case 560:
#line 739 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xC1};  emit(instr,2); }
#line 11449 "y.tab.c" /* yacc.c:1651  */
    break;

  case 561:
#line 740 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xC1};  emit(instr,2); }
#line 11455 "y.tab.c" /* yacc.c:1651  */
    break;

  case 562:
#line 741 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xC1};  emit(instr,2); }
#line 11461 "y.tab.c" /* yacc.c:1651  */
    break;

  case 563:
#line 742 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xC1};  emit(instr,2); }
#line 11467 "y.tab.c" /* yacc.c:1651  */
    break;

  case 564:
#line 743 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xC1};  emit(instr,2); }
#line 11473 "y.tab.c" /* yacc.c:1651  */
    break;

  case 565:
#line 744 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xC1};  emit(instr,2); }
#line 11479 "y.tab.c" /* yacc.c:1651  */
    break;

  case 566:
#line 745 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xC1};  emit(instr,2); }
#line 11485 "y.tab.c" /* yacc.c:1651  */
    break;

  case 567:
#line 746 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xC1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 11491 "y.tab.c" /* yacc.c:1651  */
    break;

  case 568:
#line 747 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xC1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 11497 "y.tab.c" /* yacc.c:1651  */
    break;

  case 569:
#line 748 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xC1};  emit(instr,2); }
#line 11503 "y.tab.c" /* yacc.c:1651  */
    break;

  case 570:
#line 749 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xC1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 11509 "y.tab.c" /* yacc.c:1651  */
    break;

  case 571:
#line 750 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xC1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 11515 "y.tab.c" /* yacc.c:1651  */
    break;

  case 572:
#line 751 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xC1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 11521 "y.tab.c" /* yacc.c:1651  */
    break;

  case 573:
#line 752 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11527 "y.tab.c" /* yacc.c:1651  */
    break;

  case 574:
#line 753 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11533 "y.tab.c" /* yacc.c:1651  */
    break;

  case 575:
#line 754 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11539 "y.tab.c" /* yacc.c:1651  */
    break;

  case 576:
#line 755 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11545 "y.tab.c" /* yacc.c:1651  */
    break;

  case 577:
#line 756 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11551 "y.tab.c" /* yacc.c:1651  */
    break;

  case 578:
#line 757 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11557 "y.tab.c" /* yacc.c:1651  */
    break;

  case 579:
#line 758 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11563 "y.tab.c" /* yacc.c:1651  */
    break;

  case 580:
#line 759 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11569 "y.tab.c" /* yacc.c:1651  */
    break;

  case 581:
#line 760 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11575 "y.tab.c" /* yacc.c:1651  */
    break;

  case 582:
#line 761 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11581 "y.tab.c" /* yacc.c:1651  */
    break;

  case 583:
#line 762 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xC3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11587 "y.tab.c" /* yacc.c:1651  */
    break;

  case 584:
#line 763 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xC3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11593 "y.tab.c" /* yacc.c:1651  */
    break;

  case 585:
#line 764 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xC3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11599 "y.tab.c" /* yacc.c:1651  */
    break;

  case 586:
#line 765 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xC3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11605 "y.tab.c" /* yacc.c:1651  */
    break;

  case 587:
#line 766 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xC3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 11611 "y.tab.c" /* yacc.c:1651  */
    break;

  case 588:
#line 767 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xC3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 11617 "y.tab.c" /* yacc.c:1651  */
    break;

  case 589:
#line 768 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11623 "y.tab.c" /* yacc.c:1651  */
    break;

  case 590:
#line 769 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11629 "y.tab.c" /* yacc.c:1651  */
    break;

  case 591:
#line 770 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11635 "y.tab.c" /* yacc.c:1651  */
    break;

  case 592:
#line 771 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11641 "y.tab.c" /* yacc.c:1651  */
    break;

  case 593:
#line 772 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11647 "y.tab.c" /* yacc.c:1651  */
    break;

  case 594:
#line 773 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11653 "y.tab.c" /* yacc.c:1651  */
    break;

  case 595:
#line 774 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11659 "y.tab.c" /* yacc.c:1651  */
    break;

  case 596:
#line 775 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11665 "y.tab.c" /* yacc.c:1651  */
    break;

  case 597:
#line 776 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11671 "y.tab.c" /* yacc.c:1651  */
    break;

  case 598:
#line 777 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11677 "y.tab.c" /* yacc.c:1651  */
    break;

  case 599:
#line 778 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xC0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11683 "y.tab.c" /* yacc.c:1651  */
    break;

  case 600:
#line 779 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xC0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11689 "y.tab.c" /* yacc.c:1651  */
    break;

  case 601:
#line 780 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xC0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 11695 "y.tab.c" /* yacc.c:1651  */
    break;

  case 602:
#line 781 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xC0,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 11701 "y.tab.c" /* yacc.c:1651  */
    break;

  case 603:
#line 782 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xC0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 11707 "y.tab.c" /* yacc.c:1651  */
    break;

  case 604:
#line 783 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xC0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 11713 "y.tab.c" /* yacc.c:1651  */
    break;

  case 605:
#line 784 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0x9E,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11719 "y.tab.c" /* yacc.c:1651  */
    break;

  case 606:
#line 785 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xAC};  emit(instr,2); }
#line 11725 "y.tab.c" /* yacc.c:1651  */
    break;

  case 607:
#line 786 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xAC};  emit(instr,2); }
#line 11731 "y.tab.c" /* yacc.c:1651  */
    break;

  case 608:
#line 787 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xAC};  emit(instr,2); }
#line 11737 "y.tab.c" /* yacc.c:1651  */
    break;

  case 609:
#line 788 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xAC};  emit(instr,2); }
#line 11743 "y.tab.c" /* yacc.c:1651  */
    break;

  case 610:
#line 789 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xAC};  emit(instr,2); }
#line 11749 "y.tab.c" /* yacc.c:1651  */
    break;

  case 611:
#line 790 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xAC};  emit(instr,2); }
#line 11755 "y.tab.c" /* yacc.c:1651  */
    break;

  case 612:
#line 791 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xAC};  emit(instr,2); }
#line 11761 "y.tab.c" /* yacc.c:1651  */
    break;

  case 613:
#line 792 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xAC};  emit(instr,2); }
#line 11767 "y.tab.c" /* yacc.c:1651  */
    break;

  case 614:
#line 793 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xAC};  emit(instr,2); }
#line 11773 "y.tab.c" /* yacc.c:1651  */
    break;

  case 615:
#line 794 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xAC};  emit(instr,2); }
#line 11779 "y.tab.c" /* yacc.c:1651  */
    break;

  case 616:
#line 795 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xAC}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 11785 "y.tab.c" /* yacc.c:1651  */
    break;

  case 617:
#line 796 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xAC}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 11791 "y.tab.c" /* yacc.c:1651  */
    break;

  case 618:
#line 797 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xAC};  emit(instr,2); }
#line 11797 "y.tab.c" /* yacc.c:1651  */
    break;

  case 619:
#line 798 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xAC}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 11803 "y.tab.c" /* yacc.c:1651  */
    break;

  case 620:
#line 799 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xAC}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 11809 "y.tab.c" /* yacc.c:1651  */
    break;

  case 621:
#line 800 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xAC}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 11815 "y.tab.c" /* yacc.c:1651  */
    break;

  case 622:
#line 801 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xAD,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 11821 "y.tab.c" /* yacc.c:1651  */
    break;

  case 623:
#line 802 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xAD,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 11827 "y.tab.c" /* yacc.c:1651  */
    break;

  case 624:
#line 803 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xAD,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 11833 "y.tab.c" /* yacc.c:1651  */
    break;

  case 625:
#line 804 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xAD,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 11839 "y.tab.c" /* yacc.c:1651  */
    break;

  case 626:
#line 805 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xAD,0,0}; _SET16(instr,3,(yyvsp[-5].value)); instr[1] = (yyvsp[-2].value); emit(instr,5); }
#line 11845 "y.tab.c" /* yacc.c:1651  */
    break;

  case 627:
#line 806 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xAD,0,0}; _SET16(instr,3,(yyvsp[-4].value)); instr[1] = (yyvsp[-2].value); emit(instr,5); }
#line 11851 "y.tab.c" /* yacc.c:1651  */
    break;

  case 628:
#line 807 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0x9F,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 11857 "y.tab.c" /* yacc.c:1651  */
    break;

  case 629:
#line 808 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xAE};  emit(instr,2); }
#line 11863 "y.tab.c" /* yacc.c:1651  */
    break;

  case 630:
#line 809 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xAE};  emit(instr,2); }
#line 11869 "y.tab.c" /* yacc.c:1651  */
    break;

  case 631:
#line 810 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xAE};  emit(instr,2); }
#line 11875 "y.tab.c" /* yacc.c:1651  */
    break;

  case 632:
#line 811 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xAE};  emit(instr,2); }
#line 11881 "y.tab.c" /* yacc.c:1651  */
    break;

  case 633:
#line 812 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xAE};  emit(instr,2); }
#line 11887 "y.tab.c" /* yacc.c:1651  */
    break;

  case 634:
#line 813 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xAE};  emit(instr,2); }
#line 11893 "y.tab.c" /* yacc.c:1651  */
    break;

  case 635:
#line 814 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xAE};  emit(instr,2); }
#line 11899 "y.tab.c" /* yacc.c:1651  */
    break;

  case 636:
#line 815 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xAE};  emit(instr,2); }
#line 11905 "y.tab.c" /* yacc.c:1651  */
    break;

  case 637:
#line 816 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xAE};  emit(instr,2); }
#line 11911 "y.tab.c" /* yacc.c:1651  */
    break;

  case 638:
#line 817 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xAE};  emit(instr,2); }
#line 11917 "y.tab.c" /* yacc.c:1651  */
    break;

  case 639:
#line 818 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xAE}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 11923 "y.tab.c" /* yacc.c:1651  */
    break;

  case 640:
#line 819 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xAE}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 11929 "y.tab.c" /* yacc.c:1651  */
    break;

  case 641:
#line 820 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xAE};  emit(instr,2); }
#line 11935 "y.tab.c" /* yacc.c:1651  */
    break;

  case 642:
#line 821 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xAE}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 11941 "y.tab.c" /* yacc.c:1651  */
    break;

  case 643:
#line 822 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xAE}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 11947 "y.tab.c" /* yacc.c:1651  */
    break;

  case 644:
#line 823 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xAE}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 11953 "y.tab.c" /* yacc.c:1651  */
    break;

  case 645:
#line 824 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xAF,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 11959 "y.tab.c" /* yacc.c:1651  */
    break;

  case 646:
#line 825 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xAF,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 11965 "y.tab.c" /* yacc.c:1651  */
    break;

  case 647:
#line 826 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xAF,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 11971 "y.tab.c" /* yacc.c:1651  */
    break;

  case 648:
#line 827 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA2,0xAF,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 11977 "y.tab.c" /* yacc.c:1651  */
    break;

  case 649:
#line 828 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xAF,0,0}; _SET16(instr,3,(yyvsp[-5].value)); instr[1] = (yyvsp[-2].value); emit(instr,5); }
#line 11983 "y.tab.c" /* yacc.c:1651  */
    break;

  case 650:
#line 829 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xAF,0,0}; _SET16(instr,3,(yyvsp[-4].value)); instr[1] = (yyvsp[-2].value); emit(instr,5); }
#line 11989 "y.tab.c" /* yacc.c:1651  */
    break;

  case 651:
#line 830 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x93};  emit(instr,1); }
#line 11995 "y.tab.c" /* yacc.c:1651  */
    break;

  case 652:
#line 831 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x94};  emit(instr,1); }
#line 12001 "y.tab.c" /* yacc.c:1651  */
    break;

  case 653:
#line 832 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x17};  emit(instr,2); }
#line 12007 "y.tab.c" /* yacc.c:1651  */
    break;

  case 654:
#line 833 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x17};  emit(instr,2); }
#line 12013 "y.tab.c" /* yacc.c:1651  */
    break;

  case 655:
#line 834 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x17};  emit(instr,2); }
#line 12019 "y.tab.c" /* yacc.c:1651  */
    break;

  case 656:
#line 835 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x17};  emit(instr,2); }
#line 12025 "y.tab.c" /* yacc.c:1651  */
    break;

  case 657:
#line 836 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x82};  emit(instr,1); }
#line 12031 "y.tab.c" /* yacc.c:1651  */
    break;

  case 658:
#line 837 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x80};  emit(instr,1); }
#line 12037 "y.tab.c" /* yacc.c:1651  */
    break;

  case 659:
#line 838 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x81};  emit(instr,1); }
#line 12043 "y.tab.c" /* yacc.c:1651  */
    break;

  case 660:
#line 839 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x17};  emit(instr,2); }
#line 12049 "y.tab.c" /* yacc.c:1651  */
    break;

  case 661:
#line 840 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x17};  emit(instr,2); }
#line 12055 "y.tab.c" /* yacc.c:1651  */
    break;

  case 662:
#line 841 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xFE};  emit(instr,1); }
#line 12061 "y.tab.c" /* yacc.c:1651  */
    break;

  case 663:
#line 842 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x17}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 12067 "y.tab.c" /* yacc.c:1651  */
    break;

  case 664:
#line 843 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x17}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 12073 "y.tab.c" /* yacc.c:1651  */
    break;

  case 665:
#line 844 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x17};  emit(instr,2); }
#line 12079 "y.tab.c" /* yacc.c:1651  */
    break;

  case 666:
#line 845 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x17}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 12085 "y.tab.c" /* yacc.c:1651  */
    break;

  case 667:
#line 846 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x17}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 12091 "y.tab.c" /* yacc.c:1651  */
    break;

  case 668:
#line 847 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x17}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 12097 "y.tab.c" /* yacc.c:1651  */
    break;

  case 669:
#line 848 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xB8};  emit(instr,1); }
#line 12103 "y.tab.c" /* yacc.c:1651  */
    break;

  case 670:
#line 849 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xB9};  emit(instr,1); }
#line 12109 "y.tab.c" /* yacc.c:1651  */
    break;

  case 671:
#line 850 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xBA};  emit(instr,1); }
#line 12115 "y.tab.c" /* yacc.c:1651  */
    break;

  case 672:
#line 851 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xBB};  emit(instr,1); }
#line 12121 "y.tab.c" /* yacc.c:1651  */
    break;

  case 673:
#line 852 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xBC};  emit(instr,1); }
#line 12127 "y.tab.c" /* yacc.c:1651  */
    break;

  case 674:
#line 853 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xBD};  emit(instr,1); }
#line 12133 "y.tab.c" /* yacc.c:1651  */
    break;

  case 675:
#line 854 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xBE};  emit(instr,1); }
#line 12139 "y.tab.c" /* yacc.c:1651  */
    break;

  case 676:
#line 855 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xBF};  emit(instr,1); }
#line 12145 "y.tab.c" /* yacc.c:1651  */
    break;

  case 677:
#line 856 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x17};  emit(instr,2); }
#line 12151 "y.tab.c" /* yacc.c:1651  */
    break;

  case 678:
#line 857 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x17};  emit(instr,2); }
#line 12157 "y.tab.c" /* yacc.c:1651  */
    break;

  case 679:
#line 858 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x17}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 12163 "y.tab.c" /* yacc.c:1651  */
    break;

  case 680:
#line 859 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x17}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 12169 "y.tab.c" /* yacc.c:1651  */
    break;

  case 681:
#line 860 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x17};  emit(instr,2); }
#line 12175 "y.tab.c" /* yacc.c:1651  */
    break;

  case 682:
#line 861 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x17}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 12181 "y.tab.c" /* yacc.c:1651  */
    break;

  case 683:
#line 862 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x17}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 12187 "y.tab.c" /* yacc.c:1651  */
    break;

  case 684:
#line 863 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x17}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 12193 "y.tab.c" /* yacc.c:1651  */
    break;

  case 685:
#line 864 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x37};  emit(instr,2); }
#line 12199 "y.tab.c" /* yacc.c:1651  */
    break;

  case 686:
#line 865 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x36};  emit(instr,2); }
#line 12205 "y.tab.c" /* yacc.c:1651  */
    break;

  case 687:
#line 866 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xF8};  emit(instr,1); }
#line 12211 "y.tab.c" /* yacc.c:1651  */
    break;

  case 688:
#line 867 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x16};  emit(instr,2); }
#line 12217 "y.tab.c" /* yacc.c:1651  */
    break;

  case 689:
#line 868 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x16};  emit(instr,2); }
#line 12223 "y.tab.c" /* yacc.c:1651  */
    break;

  case 690:
#line 869 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x16};  emit(instr,2); }
#line 12229 "y.tab.c" /* yacc.c:1651  */
    break;

  case 691:
#line 870 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x16};  emit(instr,2); }
#line 12235 "y.tab.c" /* yacc.c:1651  */
    break;

  case 692:
#line 871 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x72};  emit(instr,1); }
#line 12241 "y.tab.c" /* yacc.c:1651  */
    break;

  case 693:
#line 872 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x70};  emit(instr,1); }
#line 12247 "y.tab.c" /* yacc.c:1651  */
    break;

  case 694:
#line 873 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x71};  emit(instr,1); }
#line 12253 "y.tab.c" /* yacc.c:1651  */
    break;

  case 695:
#line 874 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x16};  emit(instr,2); }
#line 12259 "y.tab.c" /* yacc.c:1651  */
    break;

  case 696:
#line 875 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x16};  emit(instr,2); }
#line 12265 "y.tab.c" /* yacc.c:1651  */
    break;

  case 697:
#line 876 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xFD};  emit(instr,1); }
#line 12271 "y.tab.c" /* yacc.c:1651  */
    break;

  case 698:
#line 877 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x16}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 12277 "y.tab.c" /* yacc.c:1651  */
    break;

  case 699:
#line 878 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x16}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 12283 "y.tab.c" /* yacc.c:1651  */
    break;

  case 700:
#line 879 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x16};  emit(instr,2); }
#line 12289 "y.tab.c" /* yacc.c:1651  */
    break;

  case 701:
#line 880 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x16}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 12295 "y.tab.c" /* yacc.c:1651  */
    break;

  case 702:
#line 881 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x16}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 12301 "y.tab.c" /* yacc.c:1651  */
    break;

  case 703:
#line 882 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x16}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 12307 "y.tab.c" /* yacc.c:1651  */
    break;

  case 704:
#line 883 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xA8};  emit(instr,1); }
#line 12313 "y.tab.c" /* yacc.c:1651  */
    break;

  case 705:
#line 884 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xA9};  emit(instr,1); }
#line 12319 "y.tab.c" /* yacc.c:1651  */
    break;

  case 706:
#line 885 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xAA};  emit(instr,1); }
#line 12325 "y.tab.c" /* yacc.c:1651  */
    break;

  case 707:
#line 886 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xAB};  emit(instr,1); }
#line 12331 "y.tab.c" /* yacc.c:1651  */
    break;

  case 708:
#line 887 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xAC};  emit(instr,1); }
#line 12337 "y.tab.c" /* yacc.c:1651  */
    break;

  case 709:
#line 888 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xAD};  emit(instr,1); }
#line 12343 "y.tab.c" /* yacc.c:1651  */
    break;

  case 710:
#line 889 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xAE};  emit(instr,1); }
#line 12349 "y.tab.c" /* yacc.c:1651  */
    break;

  case 711:
#line 890 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xAF};  emit(instr,1); }
#line 12355 "y.tab.c" /* yacc.c:1651  */
    break;

  case 712:
#line 891 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x16};  emit(instr,2); }
#line 12361 "y.tab.c" /* yacc.c:1651  */
    break;

  case 713:
#line 892 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x16};  emit(instr,2); }
#line 12367 "y.tab.c" /* yacc.c:1651  */
    break;

  case 714:
#line 893 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x16}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 12373 "y.tab.c" /* yacc.c:1651  */
    break;

  case 715:
#line 894 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x16}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 12379 "y.tab.c" /* yacc.c:1651  */
    break;

  case 716:
#line 895 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x16};  emit(instr,2); }
#line 12385 "y.tab.c" /* yacc.c:1651  */
    break;

  case 717:
#line 896 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x16}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 12391 "y.tab.c" /* yacc.c:1651  */
    break;

  case 718:
#line 897 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x16}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 12397 "y.tab.c" /* yacc.c:1651  */
    break;

  case 719:
#line 898 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x16}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 12403 "y.tab.c" /* yacc.c:1651  */
    break;

  case 720:
#line 899 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x03,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 12409 "y.tab.c" /* yacc.c:1651  */
    break;

  case 721:
#line 900 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x22};  emit(instr,2); }
#line 12415 "y.tab.c" /* yacc.c:1651  */
    break;

  case 722:
#line 901 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x22};  emit(instr,2); }
#line 12421 "y.tab.c" /* yacc.c:1651  */
    break;

  case 723:
#line 902 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x22};  emit(instr,2); }
#line 12427 "y.tab.c" /* yacc.c:1651  */
    break;

  case 724:
#line 903 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x22};  emit(instr,2); }
#line 12433 "y.tab.c" /* yacc.c:1651  */
    break;

  case 725:
#line 904 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x22};  emit(instr,2); }
#line 12439 "y.tab.c" /* yacc.c:1651  */
    break;

  case 726:
#line 905 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x22};  emit(instr,2); }
#line 12445 "y.tab.c" /* yacc.c:1651  */
    break;

  case 727:
#line 906 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x22};  emit(instr,2); }
#line 12451 "y.tab.c" /* yacc.c:1651  */
    break;

  case 728:
#line 907 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x22};  emit(instr,2); }
#line 12457 "y.tab.c" /* yacc.c:1651  */
    break;

  case 729:
#line 908 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x22};  emit(instr,2); }
#line 12463 "y.tab.c" /* yacc.c:1651  */
    break;

  case 730:
#line 909 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x22};  emit(instr,2); }
#line 12469 "y.tab.c" /* yacc.c:1651  */
    break;

  case 731:
#line 910 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x22}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 12475 "y.tab.c" /* yacc.c:1651  */
    break;

  case 732:
#line 911 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x22}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 12481 "y.tab.c" /* yacc.c:1651  */
    break;

  case 733:
#line 912 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x22};  emit(instr,2); }
#line 12487 "y.tab.c" /* yacc.c:1651  */
    break;

  case 734:
#line 913 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x22}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 12493 "y.tab.c" /* yacc.c:1651  */
    break;

  case 735:
#line 914 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x22}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 12499 "y.tab.c" /* yacc.c:1651  */
    break;

  case 736:
#line 915 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x22}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 12505 "y.tab.c" /* yacc.c:1651  */
    break;

  case 737:
#line 916 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xD8,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12511 "y.tab.c" /* yacc.c:1651  */
    break;

  case 738:
#line 917 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xD9,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12517 "y.tab.c" /* yacc.c:1651  */
    break;

  case 739:
#line 918 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xDA,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12523 "y.tab.c" /* yacc.c:1651  */
    break;

  case 740:
#line 919 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xDB,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12529 "y.tab.c" /* yacc.c:1651  */
    break;

  case 741:
#line 920 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xDC,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12535 "y.tab.c" /* yacc.c:1651  */
    break;

  case 742:
#line 921 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xDD,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12541 "y.tab.c" /* yacc.c:1651  */
    break;

  case 743:
#line 922 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xDE,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12547 "y.tab.c" /* yacc.c:1651  */
    break;

  case 744:
#line 923 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xDF,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12553 "y.tab.c" /* yacc.c:1651  */
    break;

  case 745:
#line 924 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xE8,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12559 "y.tab.c" /* yacc.c:1651  */
    break;

  case 746:
#line 925 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xE9,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12565 "y.tab.c" /* yacc.c:1651  */
    break;

  case 747:
#line 926 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xEA,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12571 "y.tab.c" /* yacc.c:1651  */
    break;

  case 748:
#line 927 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xEB,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12577 "y.tab.c" /* yacc.c:1651  */
    break;

  case 749:
#line 928 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xEC,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12583 "y.tab.c" /* yacc.c:1651  */
    break;

  case 750:
#line 929 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xED,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12589 "y.tab.c" /* yacc.c:1651  */
    break;

  case 751:
#line 930 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xEE,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12595 "y.tab.c" /* yacc.c:1651  */
    break;

  case 752:
#line 931 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xEF,0,0}; instr[1] = (yyvsp[-4].value); instr[2] = _REL8(3,(yyvsp[-1].value)); emit(instr,3); }
#line 12601 "y.tab.c" /* yacc.c:1651  */
    break;

  case 753:
#line 932 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC9,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 12607 "y.tab.c" /* yacc.c:1651  */
    break;

  case 754:
#line 933 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xCE,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 12613 "y.tab.c" /* yacc.c:1651  */
    break;

  case 755:
#line 934 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xCA,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 12619 "y.tab.c" /* yacc.c:1651  */
    break;

  case 756:
#line 935 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xCF,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 12625 "y.tab.c" /* yacc.c:1651  */
    break;

  case 757:
#line 936 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC8,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 12631 "y.tab.c" /* yacc.c:1651  */
    break;

  case 758:
#line 937 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xCD,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 12637 "y.tab.c" /* yacc.c:1651  */
    break;

  case 759:
#line 938 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x30,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 12643 "y.tab.c" /* yacc.c:1651  */
    break;

  case 760:
#line 939 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x67,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 12649 "y.tab.c" /* yacc.c:1651  */
    break;

  case 761:
#line 940 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x34};  emit(instr,1); }
#line 12655 "y.tab.c" /* yacc.c:1651  */
    break;

  case 762:
#line 941 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x35};  emit(instr,1); }
#line 12661 "y.tab.c" /* yacc.c:1651  */
    break;

  case 763:
#line 942 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x36};  emit(instr,1); }
#line 12667 "y.tab.c" /* yacc.c:1651  */
    break;

  case 764:
#line 943 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x37};  emit(instr,1); }
#line 12673 "y.tab.c" /* yacc.c:1651  */
    break;

  case 765:
#line 944 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x42};  emit(instr,1); }
#line 12679 "y.tab.c" /* yacc.c:1651  */
    break;

  case 766:
#line 945 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x40};  emit(instr,1); }
#line 12685 "y.tab.c" /* yacc.c:1651  */
    break;

  case 767:
#line 946 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x41};  emit(instr,1); }
#line 12691 "y.tab.c" /* yacc.c:1651  */
    break;

  case 768:
#line 947 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xE4,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 12697 "y.tab.c" /* yacc.c:1651  */
    break;

  case 769:
#line 948 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xE5,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 12703 "y.tab.c" /* yacc.c:1651  */
    break;

  case 770:
#line 949 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xE2};  emit(instr,1); }
#line 12709 "y.tab.c" /* yacc.c:1651  */
    break;

  case 771:
#line 950 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xE3,0}; instr[1] = (yyvsp[-4].value); emit(instr,2); }
#line 12715 "y.tab.c" /* yacc.c:1651  */
    break;

  case 772:
#line 951 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xE0,0,0}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,3); }
#line 12721 "y.tab.c" /* yacc.c:1651  */
    break;

  case 773:
#line 952 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xE1,0,0}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,3); }
#line 12727 "y.tab.c" /* yacc.c:1651  */
    break;

  case 774:
#line 953 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x77,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 12733 "y.tab.c" /* yacc.c:1651  */
    break;

  case 775:
#line 954 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x78};  emit(instr,1); }
#line 12739 "y.tab.c" /* yacc.c:1651  */
    break;

  case 776:
#line 955 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x79};  emit(instr,1); }
#line 12745 "y.tab.c" /* yacc.c:1651  */
    break;

  case 777:
#line 956 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x7A};  emit(instr,1); }
#line 12751 "y.tab.c" /* yacc.c:1651  */
    break;

  case 778:
#line 957 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x7B};  emit(instr,1); }
#line 12757 "y.tab.c" /* yacc.c:1651  */
    break;

  case 779:
#line 958 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x7C};  emit(instr,1); }
#line 12763 "y.tab.c" /* yacc.c:1651  */
    break;

  case 780:
#line 959 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x7D};  emit(instr,1); }
#line 12769 "y.tab.c" /* yacc.c:1651  */
    break;

  case 781:
#line 960 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x7E};  emit(instr,1); }
#line 12775 "y.tab.c" /* yacc.c:1651  */
    break;

  case 782:
#line 961 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x7F};  emit(instr,1); }
#line 12781 "y.tab.c" /* yacc.c:1651  */
    break;

  case 783:
#line 962 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xF4,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 12787 "y.tab.c" /* yacc.c:1651  */
    break;

  case 784:
#line 963 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xF5,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 12793 "y.tab.c" /* yacc.c:1651  */
    break;

  case 785:
#line 964 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xF2};  emit(instr,1); }
#line 12799 "y.tab.c" /* yacc.c:1651  */
    break;

  case 786:
#line 965 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xF3,0}; instr[1] = (yyvsp[-4].value); emit(instr,2); }
#line 12805 "y.tab.c" /* yacc.c:1651  */
    break;

  case 787:
#line 966 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xF0,0,0}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,3); }
#line 12811 "y.tab.c" /* yacc.c:1651  */
    break;

  case 788:
#line 967 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xF1,0,0}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,3); }
#line 12817 "y.tab.c" /* yacc.c:1651  */
    break;

  case 789:
#line 968 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0x9C,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 12823 "y.tab.c" /* yacc.c:1651  */
    break;

  case 790:
#line 969 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xA8};  emit(instr,2); }
#line 12829 "y.tab.c" /* yacc.c:1651  */
    break;

  case 791:
#line 970 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xA8};  emit(instr,2); }
#line 12835 "y.tab.c" /* yacc.c:1651  */
    break;

  case 792:
#line 971 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xA8};  emit(instr,2); }
#line 12841 "y.tab.c" /* yacc.c:1651  */
    break;

  case 793:
#line 972 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xA8};  emit(instr,2); }
#line 12847 "y.tab.c" /* yacc.c:1651  */
    break;

  case 794:
#line 973 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xA8};  emit(instr,2); }
#line 12853 "y.tab.c" /* yacc.c:1651  */
    break;

  case 795:
#line 974 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xA8};  emit(instr,2); }
#line 12859 "y.tab.c" /* yacc.c:1651  */
    break;

  case 796:
#line 975 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xA8};  emit(instr,2); }
#line 12865 "y.tab.c" /* yacc.c:1651  */
    break;

  case 797:
#line 976 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xA8};  emit(instr,2); }
#line 12871 "y.tab.c" /* yacc.c:1651  */
    break;

  case 798:
#line 977 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xA8};  emit(instr,2); }
#line 12877 "y.tab.c" /* yacc.c:1651  */
    break;

  case 799:
#line 978 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xA8};  emit(instr,2); }
#line 12883 "y.tab.c" /* yacc.c:1651  */
    break;

  case 800:
#line 979 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xA8}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 12889 "y.tab.c" /* yacc.c:1651  */
    break;

  case 801:
#line 980 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xA8}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 12895 "y.tab.c" /* yacc.c:1651  */
    break;

  case 802:
#line 981 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xA8};  emit(instr,2); }
#line 12901 "y.tab.c" /* yacc.c:1651  */
    break;

  case 803:
#line 982 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xA8}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 12907 "y.tab.c" /* yacc.c:1651  */
    break;

  case 804:
#line 983 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xA8}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 12913 "y.tab.c" /* yacc.c:1651  */
    break;

  case 805:
#line 984 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xA8}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 12919 "y.tab.c" /* yacc.c:1651  */
    break;

  case 806:
#line 985 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xA9,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 12925 "y.tab.c" /* yacc.c:1651  */
    break;

  case 807:
#line 986 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xA9,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 12931 "y.tab.c" /* yacc.c:1651  */
    break;

  case 808:
#line 987 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xA9,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 12937 "y.tab.c" /* yacc.c:1651  */
    break;

  case 809:
#line 988 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xA9,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 12943 "y.tab.c" /* yacc.c:1651  */
    break;

  case 810:
#line 989 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xA9,0,0}; _SET16(instr,3,(yyvsp[-5].value)); instr[1] = (yyvsp[-2].value); emit(instr,5); }
#line 12949 "y.tab.c" /* yacc.c:1651  */
    break;

  case 811:
#line 990 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xA9,0,0}; _SET16(instr,3,(yyvsp[-4].value)); instr[1] = (yyvsp[-2].value); emit(instr,5); }
#line 12955 "y.tab.c" /* yacc.c:1651  */
    break;

  case 812:
#line 991 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0x9D,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 12961 "y.tab.c" /* yacc.c:1651  */
    break;

  case 813:
#line 992 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xAA};  emit(instr,2); }
#line 12967 "y.tab.c" /* yacc.c:1651  */
    break;

  case 814:
#line 993 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xAA};  emit(instr,2); }
#line 12973 "y.tab.c" /* yacc.c:1651  */
    break;

  case 815:
#line 994 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xAA};  emit(instr,2); }
#line 12979 "y.tab.c" /* yacc.c:1651  */
    break;

  case 816:
#line 995 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xAA};  emit(instr,2); }
#line 12985 "y.tab.c" /* yacc.c:1651  */
    break;

  case 817:
#line 996 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xAA};  emit(instr,2); }
#line 12991 "y.tab.c" /* yacc.c:1651  */
    break;

  case 818:
#line 997 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xAA};  emit(instr,2); }
#line 12997 "y.tab.c" /* yacc.c:1651  */
    break;

  case 819:
#line 998 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xAA};  emit(instr,2); }
#line 13003 "y.tab.c" /* yacc.c:1651  */
    break;

  case 820:
#line 999 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xAA};  emit(instr,2); }
#line 13009 "y.tab.c" /* yacc.c:1651  */
    break;

  case 821:
#line 1000 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xAA};  emit(instr,2); }
#line 13015 "y.tab.c" /* yacc.c:1651  */
    break;

  case 822:
#line 1001 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xAA};  emit(instr,2); }
#line 13021 "y.tab.c" /* yacc.c:1651  */
    break;

  case 823:
#line 1002 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xAA}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13027 "y.tab.c" /* yacc.c:1651  */
    break;

  case 824:
#line 1003 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xAA}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13033 "y.tab.c" /* yacc.c:1651  */
    break;

  case 825:
#line 1004 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xAA};  emit(instr,2); }
#line 13039 "y.tab.c" /* yacc.c:1651  */
    break;

  case 826:
#line 1005 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xAA}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13045 "y.tab.c" /* yacc.c:1651  */
    break;

  case 827:
#line 1006 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xAA}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13051 "y.tab.c" /* yacc.c:1651  */
    break;

  case 828:
#line 1007 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xAA}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13057 "y.tab.c" /* yacc.c:1651  */
    break;

  case 829:
#line 1008 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xAB,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 13063 "y.tab.c" /* yacc.c:1651  */
    break;

  case 830:
#line 1009 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xAB,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 13069 "y.tab.c" /* yacc.c:1651  */
    break;

  case 831:
#line 1010 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xAB,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 13075 "y.tab.c" /* yacc.c:1651  */
    break;

  case 832:
#line 1011 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xAB,0,0}; _SET16(instr,2,(yyvsp[-4].value)); emit(instr,4); }
#line 13081 "y.tab.c" /* yacc.c:1651  */
    break;

  case 833:
#line 1012 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xAB,0,0}; _SET16(instr,3,(yyvsp[-5].value)); instr[1] = (yyvsp[-2].value); emit(instr,5); }
#line 13087 "y.tab.c" /* yacc.c:1651  */
    break;

  case 834:
#line 1013 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xAB,0,0}; _SET16(instr,3,(yyvsp[-4].value)); instr[1] = (yyvsp[-2].value); emit(instr,5); }
#line 13093 "y.tab.c" /* yacc.c:1651  */
    break;

  case 835:
#line 1014 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x28};  emit(instr,2); }
#line 13099 "y.tab.c" /* yacc.c:1651  */
    break;

  case 836:
#line 1015 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x29};  emit(instr,2); }
#line 13105 "y.tab.c" /* yacc.c:1651  */
    break;

  case 837:
#line 1016 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x2A};  emit(instr,2); }
#line 13111 "y.tab.c" /* yacc.c:1651  */
    break;

  case 838:
#line 1017 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x2B};  emit(instr,2); }
#line 13117 "y.tab.c" /* yacc.c:1651  */
    break;

  case 839:
#line 1018 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x2C};  emit(instr,2); }
#line 13123 "y.tab.c" /* yacc.c:1651  */
    break;

  case 840:
#line 1019 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x2D};  emit(instr,2); }
#line 13129 "y.tab.c" /* yacc.c:1651  */
    break;

  case 841:
#line 1020 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x2E};  emit(instr,2); }
#line 13135 "y.tab.c" /* yacc.c:1651  */
    break;

  case 842:
#line 1021 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x2F};  emit(instr,2); }
#line 13141 "y.tab.c" /* yacc.c:1651  */
    break;

  case 843:
#line 1022 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x28};  emit(instr,2); }
#line 13147 "y.tab.c" /* yacc.c:1651  */
    break;

  case 844:
#line 1023 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x29};  emit(instr,2); }
#line 13153 "y.tab.c" /* yacc.c:1651  */
    break;

  case 845:
#line 1024 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x2A};  emit(instr,2); }
#line 13159 "y.tab.c" /* yacc.c:1651  */
    break;

  case 846:
#line 1025 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x2B};  emit(instr,2); }
#line 13165 "y.tab.c" /* yacc.c:1651  */
    break;

  case 847:
#line 1026 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x2C};  emit(instr,2); }
#line 13171 "y.tab.c" /* yacc.c:1651  */
    break;

  case 848:
#line 1027 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x2D};  emit(instr,2); }
#line 13177 "y.tab.c" /* yacc.c:1651  */
    break;

  case 849:
#line 1028 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x2E};  emit(instr,2); }
#line 13183 "y.tab.c" /* yacc.c:1651  */
    break;

  case 850:
#line 1029 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x2F};  emit(instr,2); }
#line 13189 "y.tab.c" /* yacc.c:1651  */
    break;

  case 851:
#line 1030 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x28};  emit(instr,2); }
#line 13195 "y.tab.c" /* yacc.c:1651  */
    break;

  case 852:
#line 1031 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x29};  emit(instr,2); }
#line 13201 "y.tab.c" /* yacc.c:1651  */
    break;

  case 853:
#line 1032 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x2A};  emit(instr,2); }
#line 13207 "y.tab.c" /* yacc.c:1651  */
    break;

  case 854:
#line 1033 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x2B};  emit(instr,2); }
#line 13213 "y.tab.c" /* yacc.c:1651  */
    break;

  case 855:
#line 1034 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x2C};  emit(instr,2); }
#line 13219 "y.tab.c" /* yacc.c:1651  */
    break;

  case 856:
#line 1035 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x2D};  emit(instr,2); }
#line 13225 "y.tab.c" /* yacc.c:1651  */
    break;

  case 857:
#line 1036 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x2E};  emit(instr,2); }
#line 13231 "y.tab.c" /* yacc.c:1651  */
    break;

  case 858:
#line 1037 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x2F};  emit(instr,2); }
#line 13237 "y.tab.c" /* yacc.c:1651  */
    break;

  case 859:
#line 1038 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x28};  emit(instr,2); }
#line 13243 "y.tab.c" /* yacc.c:1651  */
    break;

  case 860:
#line 1039 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x29};  emit(instr,2); }
#line 13249 "y.tab.c" /* yacc.c:1651  */
    break;

  case 861:
#line 1040 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x2A};  emit(instr,2); }
#line 13255 "y.tab.c" /* yacc.c:1651  */
    break;

  case 862:
#line 1041 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x2B};  emit(instr,2); }
#line 13261 "y.tab.c" /* yacc.c:1651  */
    break;

  case 863:
#line 1042 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x2C};  emit(instr,2); }
#line 13267 "y.tab.c" /* yacc.c:1651  */
    break;

  case 864:
#line 1043 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x2D};  emit(instr,2); }
#line 13273 "y.tab.c" /* yacc.c:1651  */
    break;

  case 865:
#line 1044 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x2E};  emit(instr,2); }
#line 13279 "y.tab.c" /* yacc.c:1651  */
    break;

  case 866:
#line 1045 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x2F};  emit(instr,2); }
#line 13285 "y.tab.c" /* yacc.c:1651  */
    break;

  case 867:
#line 1046 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x28};  emit(instr,2); }
#line 13291 "y.tab.c" /* yacc.c:1651  */
    break;

  case 868:
#line 1047 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x29};  emit(instr,2); }
#line 13297 "y.tab.c" /* yacc.c:1651  */
    break;

  case 869:
#line 1048 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x2A};  emit(instr,2); }
#line 13303 "y.tab.c" /* yacc.c:1651  */
    break;

  case 870:
#line 1049 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x2B};  emit(instr,2); }
#line 13309 "y.tab.c" /* yacc.c:1651  */
    break;

  case 871:
#line 1050 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x2C};  emit(instr,2); }
#line 13315 "y.tab.c" /* yacc.c:1651  */
    break;

  case 872:
#line 1051 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x2D};  emit(instr,2); }
#line 13321 "y.tab.c" /* yacc.c:1651  */
    break;

  case 873:
#line 1052 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x2E};  emit(instr,2); }
#line 13327 "y.tab.c" /* yacc.c:1651  */
    break;

  case 874:
#line 1053 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x2F};  emit(instr,2); }
#line 13333 "y.tab.c" /* yacc.c:1651  */
    break;

  case 875:
#line 1054 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x28};  emit(instr,2); }
#line 13339 "y.tab.c" /* yacc.c:1651  */
    break;

  case 876:
#line 1055 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x29};  emit(instr,2); }
#line 13345 "y.tab.c" /* yacc.c:1651  */
    break;

  case 877:
#line 1056 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x2A};  emit(instr,2); }
#line 13351 "y.tab.c" /* yacc.c:1651  */
    break;

  case 878:
#line 1057 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x2B};  emit(instr,2); }
#line 13357 "y.tab.c" /* yacc.c:1651  */
    break;

  case 879:
#line 1058 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x2C};  emit(instr,2); }
#line 13363 "y.tab.c" /* yacc.c:1651  */
    break;

  case 880:
#line 1059 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x2D};  emit(instr,2); }
#line 13369 "y.tab.c" /* yacc.c:1651  */
    break;

  case 881:
#line 1060 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x2E};  emit(instr,2); }
#line 13375 "y.tab.c" /* yacc.c:1651  */
    break;

  case 882:
#line 1061 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x2F};  emit(instr,2); }
#line 13381 "y.tab.c" /* yacc.c:1651  */
    break;

  case 883:
#line 1062 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x28};  emit(instr,2); }
#line 13387 "y.tab.c" /* yacc.c:1651  */
    break;

  case 884:
#line 1063 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x29};  emit(instr,2); }
#line 13393 "y.tab.c" /* yacc.c:1651  */
    break;

  case 885:
#line 1064 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x2A};  emit(instr,2); }
#line 13399 "y.tab.c" /* yacc.c:1651  */
    break;

  case 886:
#line 1065 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x2B};  emit(instr,2); }
#line 13405 "y.tab.c" /* yacc.c:1651  */
    break;

  case 887:
#line 1066 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x2C};  emit(instr,2); }
#line 13411 "y.tab.c" /* yacc.c:1651  */
    break;

  case 888:
#line 1067 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x2D};  emit(instr,2); }
#line 13417 "y.tab.c" /* yacc.c:1651  */
    break;

  case 889:
#line 1068 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x2E};  emit(instr,2); }
#line 13423 "y.tab.c" /* yacc.c:1651  */
    break;

  case 890:
#line 1069 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x2F};  emit(instr,2); }
#line 13429 "y.tab.c" /* yacc.c:1651  */
    break;

  case 891:
#line 1070 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x28};  emit(instr,2); }
#line 13435 "y.tab.c" /* yacc.c:1651  */
    break;

  case 892:
#line 1071 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x29};  emit(instr,2); }
#line 13441 "y.tab.c" /* yacc.c:1651  */
    break;

  case 893:
#line 1072 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x2A};  emit(instr,2); }
#line 13447 "y.tab.c" /* yacc.c:1651  */
    break;

  case 894:
#line 1073 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x2B};  emit(instr,2); }
#line 13453 "y.tab.c" /* yacc.c:1651  */
    break;

  case 895:
#line 1074 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x2C};  emit(instr,2); }
#line 13459 "y.tab.c" /* yacc.c:1651  */
    break;

  case 896:
#line 1075 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x2D};  emit(instr,2); }
#line 13465 "y.tab.c" /* yacc.c:1651  */
    break;

  case 897:
#line 1076 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x2E};  emit(instr,2); }
#line 13471 "y.tab.c" /* yacc.c:1651  */
    break;

  case 898:
#line 1077 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x2F};  emit(instr,2); }
#line 13477 "y.tab.c" /* yacc.c:1651  */
    break;

  case 899:
#line 1078 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x28};  emit(instr,2); }
#line 13483 "y.tab.c" /* yacc.c:1651  */
    break;

  case 900:
#line 1079 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x29};  emit(instr,2); }
#line 13489 "y.tab.c" /* yacc.c:1651  */
    break;

  case 901:
#line 1080 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x2A};  emit(instr,2); }
#line 13495 "y.tab.c" /* yacc.c:1651  */
    break;

  case 902:
#line 1081 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x2B};  emit(instr,2); }
#line 13501 "y.tab.c" /* yacc.c:1651  */
    break;

  case 903:
#line 1082 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x2C};  emit(instr,2); }
#line 13507 "y.tab.c" /* yacc.c:1651  */
    break;

  case 904:
#line 1083 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x2D};  emit(instr,2); }
#line 13513 "y.tab.c" /* yacc.c:1651  */
    break;

  case 905:
#line 1084 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x2E};  emit(instr,2); }
#line 13519 "y.tab.c" /* yacc.c:1651  */
    break;

  case 906:
#line 1085 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x2F};  emit(instr,2); }
#line 13525 "y.tab.c" /* yacc.c:1651  */
    break;

  case 907:
#line 1086 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x28};  emit(instr,2); }
#line 13531 "y.tab.c" /* yacc.c:1651  */
    break;

  case 908:
#line 1087 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x29};  emit(instr,2); }
#line 13537 "y.tab.c" /* yacc.c:1651  */
    break;

  case 909:
#line 1088 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x2A};  emit(instr,2); }
#line 13543 "y.tab.c" /* yacc.c:1651  */
    break;

  case 910:
#line 1089 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x2B};  emit(instr,2); }
#line 13549 "y.tab.c" /* yacc.c:1651  */
    break;

  case 911:
#line 1090 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x2C};  emit(instr,2); }
#line 13555 "y.tab.c" /* yacc.c:1651  */
    break;

  case 912:
#line 1091 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x2D};  emit(instr,2); }
#line 13561 "y.tab.c" /* yacc.c:1651  */
    break;

  case 913:
#line 1092 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x2E};  emit(instr,2); }
#line 13567 "y.tab.c" /* yacc.c:1651  */
    break;

  case 914:
#line 1093 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x2F};  emit(instr,2); }
#line 13573 "y.tab.c" /* yacc.c:1651  */
    break;

  case 915:
#line 1094 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x28}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13579 "y.tab.c" /* yacc.c:1651  */
    break;

  case 916:
#line 1095 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x29}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13585 "y.tab.c" /* yacc.c:1651  */
    break;

  case 917:
#line 1096 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x2A}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13591 "y.tab.c" /* yacc.c:1651  */
    break;

  case 918:
#line 1097 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x2B}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13597 "y.tab.c" /* yacc.c:1651  */
    break;

  case 919:
#line 1098 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x2C}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13603 "y.tab.c" /* yacc.c:1651  */
    break;

  case 920:
#line 1099 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x2D}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13609 "y.tab.c" /* yacc.c:1651  */
    break;

  case 921:
#line 1100 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x2E}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13615 "y.tab.c" /* yacc.c:1651  */
    break;

  case 922:
#line 1101 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x2F}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13621 "y.tab.c" /* yacc.c:1651  */
    break;

  case 923:
#line 1102 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x28}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13627 "y.tab.c" /* yacc.c:1651  */
    break;

  case 924:
#line 1103 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x29}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13633 "y.tab.c" /* yacc.c:1651  */
    break;

  case 925:
#line 1104 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x2A}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13639 "y.tab.c" /* yacc.c:1651  */
    break;

  case 926:
#line 1105 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x2B}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13645 "y.tab.c" /* yacc.c:1651  */
    break;

  case 927:
#line 1106 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x2C}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13651 "y.tab.c" /* yacc.c:1651  */
    break;

  case 928:
#line 1107 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x2D}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13657 "y.tab.c" /* yacc.c:1651  */
    break;

  case 929:
#line 1108 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x2E}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13663 "y.tab.c" /* yacc.c:1651  */
    break;

  case 930:
#line 1109 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x2F}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 13669 "y.tab.c" /* yacc.c:1651  */
    break;

  case 931:
#line 1110 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x28};  emit(instr,2); }
#line 13675 "y.tab.c" /* yacc.c:1651  */
    break;

  case 932:
#line 1111 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x29};  emit(instr,2); }
#line 13681 "y.tab.c" /* yacc.c:1651  */
    break;

  case 933:
#line 1112 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x2A};  emit(instr,2); }
#line 13687 "y.tab.c" /* yacc.c:1651  */
    break;

  case 934:
#line 1113 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x2B};  emit(instr,2); }
#line 13693 "y.tab.c" /* yacc.c:1651  */
    break;

  case 935:
#line 1114 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x2C};  emit(instr,2); }
#line 13699 "y.tab.c" /* yacc.c:1651  */
    break;

  case 936:
#line 1115 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x2D};  emit(instr,2); }
#line 13705 "y.tab.c" /* yacc.c:1651  */
    break;

  case 937:
#line 1116 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x2E};  emit(instr,2); }
#line 13711 "y.tab.c" /* yacc.c:1651  */
    break;

  case 938:
#line 1117 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x2F};  emit(instr,2); }
#line 13717 "y.tab.c" /* yacc.c:1651  */
    break;

  case 939:
#line 1118 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x28}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13723 "y.tab.c" /* yacc.c:1651  */
    break;

  case 940:
#line 1119 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x29}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13729 "y.tab.c" /* yacc.c:1651  */
    break;

  case 941:
#line 1120 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x2A}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13735 "y.tab.c" /* yacc.c:1651  */
    break;

  case 942:
#line 1121 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x2B}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13741 "y.tab.c" /* yacc.c:1651  */
    break;

  case 943:
#line 1122 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x2C}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13747 "y.tab.c" /* yacc.c:1651  */
    break;

  case 944:
#line 1123 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x2D}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13753 "y.tab.c" /* yacc.c:1651  */
    break;

  case 945:
#line 1124 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x2E}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13759 "y.tab.c" /* yacc.c:1651  */
    break;

  case 946:
#line 1125 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x2F}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 13765 "y.tab.c" /* yacc.c:1651  */
    break;

  case 947:
#line 1126 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x28}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13771 "y.tab.c" /* yacc.c:1651  */
    break;

  case 948:
#line 1127 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x29}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13777 "y.tab.c" /* yacc.c:1651  */
    break;

  case 949:
#line 1128 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x2A}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13783 "y.tab.c" /* yacc.c:1651  */
    break;

  case 950:
#line 1129 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x2B}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13789 "y.tab.c" /* yacc.c:1651  */
    break;

  case 951:
#line 1130 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x2C}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13795 "y.tab.c" /* yacc.c:1651  */
    break;

  case 952:
#line 1131 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x2D}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13801 "y.tab.c" /* yacc.c:1651  */
    break;

  case 953:
#line 1132 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x2E}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13807 "y.tab.c" /* yacc.c:1651  */
    break;

  case 954:
#line 1133 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x2F}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13813 "y.tab.c" /* yacc.c:1651  */
    break;

  case 955:
#line 1134 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x28}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13819 "y.tab.c" /* yacc.c:1651  */
    break;

  case 956:
#line 1135 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x29}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13825 "y.tab.c" /* yacc.c:1651  */
    break;

  case 957:
#line 1136 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x2A}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13831 "y.tab.c" /* yacc.c:1651  */
    break;

  case 958:
#line 1137 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x2B}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13837 "y.tab.c" /* yacc.c:1651  */
    break;

  case 959:
#line 1138 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x2C}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13843 "y.tab.c" /* yacc.c:1651  */
    break;

  case 960:
#line 1139 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x2D}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13849 "y.tab.c" /* yacc.c:1651  */
    break;

  case 961:
#line 1140 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x2E}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13855 "y.tab.c" /* yacc.c:1651  */
    break;

  case 962:
#line 1141 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x2F}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 13861 "y.tab.c" /* yacc.c:1651  */
    break;

  case 963:
#line 1142 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x38};  emit(instr,2); }
#line 13867 "y.tab.c" /* yacc.c:1651  */
    break;

  case 964:
#line 1143 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x39};  emit(instr,2); }
#line 13873 "y.tab.c" /* yacc.c:1651  */
    break;

  case 965:
#line 1144 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x3A};  emit(instr,2); }
#line 13879 "y.tab.c" /* yacc.c:1651  */
    break;

  case 966:
#line 1145 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x3B};  emit(instr,2); }
#line 13885 "y.tab.c" /* yacc.c:1651  */
    break;

  case 967:
#line 1146 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x3C};  emit(instr,2); }
#line 13891 "y.tab.c" /* yacc.c:1651  */
    break;

  case 968:
#line 1147 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x3D};  emit(instr,2); }
#line 13897 "y.tab.c" /* yacc.c:1651  */
    break;

  case 969:
#line 1148 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x3E};  emit(instr,2); }
#line 13903 "y.tab.c" /* yacc.c:1651  */
    break;

  case 970:
#line 1149 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x3F};  emit(instr,2); }
#line 13909 "y.tab.c" /* yacc.c:1651  */
    break;

  case 971:
#line 1150 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x38};  emit(instr,2); }
#line 13915 "y.tab.c" /* yacc.c:1651  */
    break;

  case 972:
#line 1151 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x39};  emit(instr,2); }
#line 13921 "y.tab.c" /* yacc.c:1651  */
    break;

  case 973:
#line 1152 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x3A};  emit(instr,2); }
#line 13927 "y.tab.c" /* yacc.c:1651  */
    break;

  case 974:
#line 1153 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x3B};  emit(instr,2); }
#line 13933 "y.tab.c" /* yacc.c:1651  */
    break;

  case 975:
#line 1154 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x3C};  emit(instr,2); }
#line 13939 "y.tab.c" /* yacc.c:1651  */
    break;

  case 976:
#line 1155 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x3D};  emit(instr,2); }
#line 13945 "y.tab.c" /* yacc.c:1651  */
    break;

  case 977:
#line 1156 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x3E};  emit(instr,2); }
#line 13951 "y.tab.c" /* yacc.c:1651  */
    break;

  case 978:
#line 1157 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x3F};  emit(instr,2); }
#line 13957 "y.tab.c" /* yacc.c:1651  */
    break;

  case 979:
#line 1158 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x38};  emit(instr,2); }
#line 13963 "y.tab.c" /* yacc.c:1651  */
    break;

  case 980:
#line 1159 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x39};  emit(instr,2); }
#line 13969 "y.tab.c" /* yacc.c:1651  */
    break;

  case 981:
#line 1160 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x3A};  emit(instr,2); }
#line 13975 "y.tab.c" /* yacc.c:1651  */
    break;

  case 982:
#line 1161 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x3B};  emit(instr,2); }
#line 13981 "y.tab.c" /* yacc.c:1651  */
    break;

  case 983:
#line 1162 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x3C};  emit(instr,2); }
#line 13987 "y.tab.c" /* yacc.c:1651  */
    break;

  case 984:
#line 1163 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x3D};  emit(instr,2); }
#line 13993 "y.tab.c" /* yacc.c:1651  */
    break;

  case 985:
#line 1164 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x3E};  emit(instr,2); }
#line 13999 "y.tab.c" /* yacc.c:1651  */
    break;

  case 986:
#line 1165 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x3F};  emit(instr,2); }
#line 14005 "y.tab.c" /* yacc.c:1651  */
    break;

  case 987:
#line 1166 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x38};  emit(instr,2); }
#line 14011 "y.tab.c" /* yacc.c:1651  */
    break;

  case 988:
#line 1167 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x39};  emit(instr,2); }
#line 14017 "y.tab.c" /* yacc.c:1651  */
    break;

  case 989:
#line 1168 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x3A};  emit(instr,2); }
#line 14023 "y.tab.c" /* yacc.c:1651  */
    break;

  case 990:
#line 1169 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x3B};  emit(instr,2); }
#line 14029 "y.tab.c" /* yacc.c:1651  */
    break;

  case 991:
#line 1170 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x3C};  emit(instr,2); }
#line 14035 "y.tab.c" /* yacc.c:1651  */
    break;

  case 992:
#line 1171 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x3D};  emit(instr,2); }
#line 14041 "y.tab.c" /* yacc.c:1651  */
    break;

  case 993:
#line 1172 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x3E};  emit(instr,2); }
#line 14047 "y.tab.c" /* yacc.c:1651  */
    break;

  case 994:
#line 1173 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x3F};  emit(instr,2); }
#line 14053 "y.tab.c" /* yacc.c:1651  */
    break;

  case 995:
#line 1174 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x38};  emit(instr,2); }
#line 14059 "y.tab.c" /* yacc.c:1651  */
    break;

  case 996:
#line 1175 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x39};  emit(instr,2); }
#line 14065 "y.tab.c" /* yacc.c:1651  */
    break;

  case 997:
#line 1176 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x3A};  emit(instr,2); }
#line 14071 "y.tab.c" /* yacc.c:1651  */
    break;

  case 998:
#line 1177 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x3B};  emit(instr,2); }
#line 14077 "y.tab.c" /* yacc.c:1651  */
    break;

  case 999:
#line 1178 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x3C};  emit(instr,2); }
#line 14083 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1000:
#line 1179 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x3D};  emit(instr,2); }
#line 14089 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1001:
#line 1180 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x3E};  emit(instr,2); }
#line 14095 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1002:
#line 1181 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x3F};  emit(instr,2); }
#line 14101 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1003:
#line 1182 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x38};  emit(instr,2); }
#line 14107 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1004:
#line 1183 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x39};  emit(instr,2); }
#line 14113 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1005:
#line 1184 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x3A};  emit(instr,2); }
#line 14119 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1006:
#line 1185 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x3B};  emit(instr,2); }
#line 14125 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1007:
#line 1186 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x3C};  emit(instr,2); }
#line 14131 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1008:
#line 1187 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x3D};  emit(instr,2); }
#line 14137 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1009:
#line 1188 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x3E};  emit(instr,2); }
#line 14143 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1010:
#line 1189 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x3F};  emit(instr,2); }
#line 14149 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1011:
#line 1190 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x38};  emit(instr,2); }
#line 14155 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1012:
#line 1191 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x39};  emit(instr,2); }
#line 14161 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1013:
#line 1192 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x3A};  emit(instr,2); }
#line 14167 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1014:
#line 1193 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x3B};  emit(instr,2); }
#line 14173 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1015:
#line 1194 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x3C};  emit(instr,2); }
#line 14179 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1016:
#line 1195 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x3D};  emit(instr,2); }
#line 14185 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1017:
#line 1196 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x3E};  emit(instr,2); }
#line 14191 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1018:
#line 1197 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x3F};  emit(instr,2); }
#line 14197 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1019:
#line 1198 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x38};  emit(instr,2); }
#line 14203 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1020:
#line 1199 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x39};  emit(instr,2); }
#line 14209 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1021:
#line 1200 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x3A};  emit(instr,2); }
#line 14215 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1022:
#line 1201 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x3B};  emit(instr,2); }
#line 14221 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1023:
#line 1202 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x3C};  emit(instr,2); }
#line 14227 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1024:
#line 1203 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x3D};  emit(instr,2); }
#line 14233 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1025:
#line 1204 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x3E};  emit(instr,2); }
#line 14239 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1026:
#line 1205 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x3F};  emit(instr,2); }
#line 14245 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1027:
#line 1206 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x38};  emit(instr,2); }
#line 14251 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1028:
#line 1207 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x39};  emit(instr,2); }
#line 14257 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1029:
#line 1208 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x3A};  emit(instr,2); }
#line 14263 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1030:
#line 1209 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x3B};  emit(instr,2); }
#line 14269 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1031:
#line 1210 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x3C};  emit(instr,2); }
#line 14275 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1032:
#line 1211 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x3D};  emit(instr,2); }
#line 14281 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1033:
#line 1212 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x3E};  emit(instr,2); }
#line 14287 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1034:
#line 1213 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x3F};  emit(instr,2); }
#line 14293 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1035:
#line 1214 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x38};  emit(instr,2); }
#line 14299 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1036:
#line 1215 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x39};  emit(instr,2); }
#line 14305 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1037:
#line 1216 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x3A};  emit(instr,2); }
#line 14311 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1038:
#line 1217 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x3B};  emit(instr,2); }
#line 14317 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1039:
#line 1218 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x3C};  emit(instr,2); }
#line 14323 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1040:
#line 1219 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x3D};  emit(instr,2); }
#line 14329 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1041:
#line 1220 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x3E};  emit(instr,2); }
#line 14335 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1042:
#line 1221 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x3F};  emit(instr,2); }
#line 14341 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1043:
#line 1222 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x38}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14347 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1044:
#line 1223 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x39}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14353 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1045:
#line 1224 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x3A}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14359 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1046:
#line 1225 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x3B}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14365 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1047:
#line 1226 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x3C}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14371 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1048:
#line 1227 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x3D}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14377 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1049:
#line 1228 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x3E}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14383 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1050:
#line 1229 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x3F}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14389 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1051:
#line 1230 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x38}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14395 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1052:
#line 1231 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x39}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14401 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1053:
#line 1232 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x3A}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14407 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1054:
#line 1233 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x3B}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14413 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1055:
#line 1234 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x3C}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14419 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1056:
#line 1235 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x3D}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14425 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1057:
#line 1236 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x3E}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14431 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1058:
#line 1237 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x3F}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14437 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1059:
#line 1238 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x38};  emit(instr,2); }
#line 14443 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1060:
#line 1239 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x39};  emit(instr,2); }
#line 14449 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1061:
#line 1240 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x3A};  emit(instr,2); }
#line 14455 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1062:
#line 1241 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x3B};  emit(instr,2); }
#line 14461 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1063:
#line 1242 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x3C};  emit(instr,2); }
#line 14467 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1064:
#line 1243 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x3D};  emit(instr,2); }
#line 14473 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1065:
#line 1244 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x3E};  emit(instr,2); }
#line 14479 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1066:
#line 1245 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x3F};  emit(instr,2); }
#line 14485 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1067:
#line 1246 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x38}; instr[1] = (yyvsp[-7].value); emit(instr,3); }
#line 14491 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1068:
#line 1247 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x39}; instr[1] = (yyvsp[-7].value); emit(instr,3); }
#line 14497 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1069:
#line 1248 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x3A}; instr[1] = (yyvsp[-7].value); emit(instr,3); }
#line 14503 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1070:
#line 1249 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x3B}; instr[1] = (yyvsp[-7].value); emit(instr,3); }
#line 14509 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1071:
#line 1250 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x3C}; instr[1] = (yyvsp[-7].value); emit(instr,3); }
#line 14515 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1072:
#line 1251 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x3D}; instr[1] = (yyvsp[-7].value); emit(instr,3); }
#line 14521 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1073:
#line 1252 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x3E}; instr[1] = (yyvsp[-7].value); emit(instr,3); }
#line 14527 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1074:
#line 1253 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x3F}; instr[1] = (yyvsp[-7].value); emit(instr,3); }
#line 14533 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1075:
#line 1254 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x38}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14539 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1076:
#line 1255 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x39}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14545 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1077:
#line 1256 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x3A}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14551 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1078:
#line 1257 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x3B}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14557 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1079:
#line 1258 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x3C}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14563 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1080:
#line 1259 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x3D}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14569 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1081:
#line 1260 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x3E}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14575 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1082:
#line 1261 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x3F}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14581 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1083:
#line 1262 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x38}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14587 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1084:
#line 1263 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x39}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14593 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1085:
#line 1264 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x3A}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14599 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1086:
#line 1265 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x3B}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14605 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1087:
#line 1266 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x3C}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14611 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1088:
#line 1267 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x3D}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14617 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1089:
#line 1268 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x3E}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14623 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1090:
#line 1269 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x3F}; _SET16(instr,1,(yyvsp[-7].value)); emit(instr,4); }
#line 14629 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1091:
#line 1270 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x21};  emit(instr,2); }
#line 14635 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1092:
#line 1271 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x21};  emit(instr,2); }
#line 14641 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1093:
#line 1272 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x21};  emit(instr,2); }
#line 14647 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1094:
#line 1273 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x21};  emit(instr,2); }
#line 14653 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1095:
#line 1274 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x21};  emit(instr,2); }
#line 14659 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1096:
#line 1275 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x21};  emit(instr,2); }
#line 14665 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1097:
#line 1276 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x21};  emit(instr,2); }
#line 14671 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1098:
#line 1277 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x21};  emit(instr,2); }
#line 14677 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1099:
#line 1278 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x21};  emit(instr,2); }
#line 14683 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1100:
#line 1279 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x21};  emit(instr,2); }
#line 14689 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1101:
#line 1280 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x21}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 14695 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1102:
#line 1281 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x21}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 14701 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1103:
#line 1282 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x21};  emit(instr,2); }
#line 14707 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1104:
#line 1283 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x21}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14713 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1105:
#line 1284 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x21}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 14719 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1106:
#line 1285 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x21}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 14725 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1107:
#line 1286 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x20};  emit(instr,2); }
#line 14731 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1108:
#line 1287 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x20};  emit(instr,2); }
#line 14737 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1109:
#line 1288 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x20};  emit(instr,2); }
#line 14743 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1110:
#line 1289 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x20};  emit(instr,2); }
#line 14749 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1111:
#line 1290 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x20};  emit(instr,2); }
#line 14755 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1112:
#line 1291 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x20};  emit(instr,2); }
#line 14761 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1113:
#line 1292 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x20};  emit(instr,2); }
#line 14767 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1114:
#line 1293 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x20};  emit(instr,2); }
#line 14773 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1115:
#line 1294 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x20};  emit(instr,2); }
#line 14779 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1116:
#line 1295 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x20};  emit(instr,2); }
#line 14785 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1117:
#line 1296 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x20}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 14791 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1118:
#line 1297 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x20}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 14797 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1119:
#line 1298 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x20};  emit(instr,2); }
#line 14803 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1120:
#line 1299 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x20}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 14809 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1121:
#line 1300 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x20}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 14815 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1122:
#line 1301 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x20}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 14821 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1123:
#line 1302 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x99};  emit(instr,2); }
#line 14827 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1124:
#line 1303 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x99};  emit(instr,2); }
#line 14833 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1125:
#line 1304 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x99};  emit(instr,2); }
#line 14839 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1126:
#line 1305 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x99};  emit(instr,2); }
#line 14845 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1127:
#line 1306 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x99};  emit(instr,2); }
#line 14851 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1128:
#line 1307 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x99};  emit(instr,2); }
#line 14857 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1129:
#line 1308 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x99};  emit(instr,2); }
#line 14863 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1130:
#line 1309 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x99};  emit(instr,2); }
#line 14869 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1131:
#line 1310 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x99};  emit(instr,2); }
#line 14875 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1132:
#line 1311 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x99};  emit(instr,2); }
#line 14881 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1133:
#line 1312 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x99}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 14887 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1134:
#line 1313 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x99}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 14893 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1135:
#line 1314 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x99};  emit(instr,2); }
#line 14899 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1136:
#line 1315 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x99}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 14905 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1137:
#line 1316 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x99}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 14911 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1138:
#line 1317 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x99}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 14917 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1139:
#line 1318 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x52};  emit(instr,1); }
#line 14923 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1140:
#line 1319 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x62,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 14929 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1141:
#line 1320 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x7A};  emit(instr,2); }
#line 14935 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1142:
#line 1321 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x7A};  emit(instr,2); }
#line 14941 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1143:
#line 1322 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x7A};  emit(instr,2); }
#line 14947 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1144:
#line 1323 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x7A};  emit(instr,2); }
#line 14953 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1145:
#line 1324 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x7A};  emit(instr,2); }
#line 14959 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1146:
#line 1325 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x7A};  emit(instr,2); }
#line 14965 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1147:
#line 1326 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x7A};  emit(instr,2); }
#line 14971 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1148:
#line 1327 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x7A};  emit(instr,2); }
#line 14977 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1149:
#line 1328 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x7A};  emit(instr,2); }
#line 14983 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1150:
#line 1329 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x7A};  emit(instr,2); }
#line 14989 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1151:
#line 1330 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x7A}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 14995 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1152:
#line 1331 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x7A}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15001 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1153:
#line 1332 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x7A};  emit(instr,2); }
#line 15007 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1154:
#line 1333 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x7A}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 15013 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1155:
#line 1334 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x7A}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15019 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1156:
#line 1335 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x7A}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15025 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1157:
#line 1336 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x8A};  emit(instr,2); }
#line 15031 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1158:
#line 1337 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x8A};  emit(instr,2); }
#line 15037 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1159:
#line 1338 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x8A};  emit(instr,2); }
#line 15043 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1160:
#line 1339 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x8A};  emit(instr,2); }
#line 15049 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1161:
#line 1340 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0x98,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 15055 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1162:
#line 1341 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0x98,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 15061 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1163:
#line 1342 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0x98,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 15067 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1164:
#line 1343 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0x98,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 15073 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1165:
#line 1344 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x48};  emit(instr,2); }
#line 15079 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1166:
#line 1345 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x49};  emit(instr,2); }
#line 15085 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1167:
#line 1346 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x4A};  emit(instr,2); }
#line 15091 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1168:
#line 1347 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x4B};  emit(instr,2); }
#line 15097 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1169:
#line 1348 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x48};  emit(instr,2); }
#line 15103 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1170:
#line 1349 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x49};  emit(instr,2); }
#line 15109 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1171:
#line 1350 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x4A};  emit(instr,2); }
#line 15115 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1172:
#line 1351 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x4B};  emit(instr,2); }
#line 15121 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1173:
#line 1352 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x48};  emit(instr,2); }
#line 15127 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1174:
#line 1353 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x49};  emit(instr,2); }
#line 15133 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1175:
#line 1354 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x4A};  emit(instr,2); }
#line 15139 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1176:
#line 1355 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x4B};  emit(instr,2); }
#line 15145 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1177:
#line 1356 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x48};  emit(instr,2); }
#line 15151 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1178:
#line 1357 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x49};  emit(instr,2); }
#line 15157 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1179:
#line 1358 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x4A};  emit(instr,2); }
#line 15163 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1180:
#line 1359 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x4B};  emit(instr,2); }
#line 15169 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1181:
#line 1360 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x48};  emit(instr,2); }
#line 15175 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1182:
#line 1361 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x49};  emit(instr,2); }
#line 15181 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1183:
#line 1362 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x4A};  emit(instr,2); }
#line 15187 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1184:
#line 1363 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x4B};  emit(instr,2); }
#line 15193 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1185:
#line 1364 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x48};  emit(instr,2); }
#line 15199 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1186:
#line 1365 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x49};  emit(instr,2); }
#line 15205 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1187:
#line 1366 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x4A};  emit(instr,2); }
#line 15211 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1188:
#line 1367 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x4B};  emit(instr,2); }
#line 15217 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1189:
#line 1368 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x48};  emit(instr,2); }
#line 15223 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1190:
#line 1369 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x49};  emit(instr,2); }
#line 15229 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1191:
#line 1370 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x4A};  emit(instr,2); }
#line 15235 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1192:
#line 1371 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x4B};  emit(instr,2); }
#line 15241 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1193:
#line 1372 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x48};  emit(instr,2); }
#line 15247 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1194:
#line 1373 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x49};  emit(instr,2); }
#line 15253 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1195:
#line 1374 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x4A};  emit(instr,2); }
#line 15259 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1196:
#line 1375 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x4B};  emit(instr,2); }
#line 15265 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1197:
#line 1376 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x48};  emit(instr,2); }
#line 15271 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1198:
#line 1377 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x49};  emit(instr,2); }
#line 15277 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1199:
#line 1378 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x4A};  emit(instr,2); }
#line 15283 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1200:
#line 1379 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x4B};  emit(instr,2); }
#line 15289 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1201:
#line 1380 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x48};  emit(instr,2); }
#line 15295 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1202:
#line 1381 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x49};  emit(instr,2); }
#line 15301 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1203:
#line 1382 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x4A};  emit(instr,2); }
#line 15307 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1204:
#line 1383 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x4B};  emit(instr,2); }
#line 15313 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1205:
#line 1384 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x48}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15319 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1206:
#line 1385 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x49}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15325 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1207:
#line 1386 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x4A}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15331 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1208:
#line 1387 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x4B}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15337 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1209:
#line 1388 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x48}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15343 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1210:
#line 1389 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x49}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15349 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1211:
#line 1390 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x4A}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15355 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1212:
#line 1391 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x4B}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15361 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1213:
#line 1392 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x48};  emit(instr,2); }
#line 15367 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1214:
#line 1393 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x49};  emit(instr,2); }
#line 15373 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1215:
#line 1394 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x4A};  emit(instr,2); }
#line 15379 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1216:
#line 1395 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x4B};  emit(instr,2); }
#line 15385 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1217:
#line 1396 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x48}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 15391 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1218:
#line 1397 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x49}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 15397 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1219:
#line 1398 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x4A}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 15403 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1220:
#line 1399 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x4B}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 15409 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1221:
#line 1400 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x48}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15415 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1222:
#line 1401 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x49}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15421 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1223:
#line 1402 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x4A}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15427 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1224:
#line 1403 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x4B}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15433 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1225:
#line 1404 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x48}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15439 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1226:
#line 1405 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x49}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15445 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1227:
#line 1406 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x4A}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15451 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1228:
#line 1407 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x4B}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15457 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1229:
#line 1408 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x7F};  emit(instr,2); }
#line 15463 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1230:
#line 1409 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x7F};  emit(instr,2); }
#line 15469 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1231:
#line 1410 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x7F};  emit(instr,2); }
#line 15475 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1232:
#line 1411 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x7F};  emit(instr,2); }
#line 15481 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1233:
#line 1412 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x7F};  emit(instr,2); }
#line 15487 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1234:
#line 1413 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x7F};  emit(instr,2); }
#line 15493 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1235:
#line 1414 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x7F};  emit(instr,2); }
#line 15499 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1236:
#line 1415 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x7F};  emit(instr,2); }
#line 15505 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1237:
#line 1416 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x7F};  emit(instr,2); }
#line 15511 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1238:
#line 1417 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x7F};  emit(instr,2); }
#line 15517 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1239:
#line 1418 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x7F}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15523 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1240:
#line 1419 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x7F}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15529 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1241:
#line 1420 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x7F};  emit(instr,2); }
#line 15535 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1242:
#line 1421 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x7F}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 15541 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1243:
#line 1422 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x7F}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15547 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1244:
#line 1423 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x7F}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15553 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1245:
#line 1424 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x50};  emit(instr,1); }
#line 15559 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1246:
#line 1425 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x51};  emit(instr,1); }
#line 15565 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1247:
#line 1426 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x8A};  emit(instr,2); }
#line 15571 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1248:
#line 1427 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x8A};  emit(instr,2); }
#line 15577 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1249:
#line 1428 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x8A};  emit(instr,2); }
#line 15583 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1250:
#line 1429 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x8A}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 15589 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1251:
#line 1430 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x8A}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 15595 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1252:
#line 1431 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x8A};  emit(instr,2); }
#line 15601 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1253:
#line 1432 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x8A}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 15607 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1254:
#line 1433 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x8A}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 15613 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1255:
#line 1434 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x8A}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 15619 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1256:
#line 1435 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x60,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 15625 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1257:
#line 1436 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x61,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 15631 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1258:
#line 1437 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0x98,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 15637 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1259:
#line 1438 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0x98,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 15643 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1260:
#line 1439 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x57,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 15649 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1261:
#line 1440 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0x98,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 15655 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1262:
#line 1441 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0x98,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 15661 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1263:
#line 1442 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0x98,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 15667 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1264:
#line 1443 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0x98,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 15673 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1265:
#line 1444 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0x98,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 15679 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1266:
#line 1445 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0x98,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 15685 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1267:
#line 1446 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15691 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1268:
#line 1447 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15697 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1269:
#line 1448 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15703 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1270:
#line 1449 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15709 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1271:
#line 1450 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15715 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1272:
#line 1451 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15721 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1273:
#line 1452 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15727 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1274:
#line 1453 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15733 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1275:
#line 1454 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15739 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1276:
#line 1455 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA4,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 15745 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1277:
#line 1456 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0x7C,0}; instr[3] = (yyvsp[-4].value); instr[1] = (yyvsp[-1].value); emit(instr,4); }
#line 15751 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1278:
#line 1457 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0x7C,0}; instr[3] = (yyvsp[-3].value); instr[1] = (yyvsp[-1].value); emit(instr,4); }
#line 15757 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1279:
#line 1458 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0x7C,0}; instr[2] = (yyvsp[-5].value); emit(instr,3); }
#line 15763 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1280:
#line 1459 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0x7C,0}; instr[3] = (yyvsp[-6].value); instr[1] = (yyvsp[-4].value); emit(instr,4); }
#line 15769 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1281:
#line 1460 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0x7C,0}; instr[4] = (yyvsp[-6].value); _SET16(instr,1,(yyvsp[-4].value)); emit(instr,5); }
#line 15775 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1282:
#line 1461 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0x7C,0}; instr[4] = (yyvsp[-6].value); _SET16(instr,1,(yyvsp[-4].value)); emit(instr,5); }
#line 15781 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1283:
#line 1462 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x7D};  emit(instr,2); }
#line 15787 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1284:
#line 1463 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x7D};  emit(instr,2); }
#line 15793 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1285:
#line 1464 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x7D};  emit(instr,2); }
#line 15799 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1286:
#line 1465 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x7D};  emit(instr,2); }
#line 15805 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1287:
#line 1466 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x7D};  emit(instr,2); }
#line 15811 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1288:
#line 1467 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x7D};  emit(instr,2); }
#line 15817 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1289:
#line 1468 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x7D};  emit(instr,2); }
#line 15823 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1290:
#line 1469 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x7D};  emit(instr,2); }
#line 15829 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1291:
#line 1470 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x7D};  emit(instr,2); }
#line 15835 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1292:
#line 1471 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x7D};  emit(instr,2); }
#line 15841 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1293:
#line 1472 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x7D}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15847 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1294:
#line 1473 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x7D}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15853 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1295:
#line 1474 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x7D};  emit(instr,2); }
#line 15859 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1296:
#line 1475 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x7D}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 15865 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1297:
#line 1476 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x7D}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15871 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1298:
#line 1477 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x7D}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15877 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1299:
#line 1478 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x7E};  emit(instr,2); }
#line 15883 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1300:
#line 1479 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x7E};  emit(instr,2); }
#line 15889 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1301:
#line 1480 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x7E};  emit(instr,2); }
#line 15895 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1302:
#line 1481 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x7E};  emit(instr,2); }
#line 15901 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1303:
#line 1482 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x7E};  emit(instr,2); }
#line 15907 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1304:
#line 1483 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x7E};  emit(instr,2); }
#line 15913 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1305:
#line 1484 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x7E};  emit(instr,2); }
#line 15919 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1306:
#line 1485 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x7E};  emit(instr,2); }
#line 15925 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1307:
#line 1486 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x7E};  emit(instr,2); }
#line 15931 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1308:
#line 1487 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x7E};  emit(instr,2); }
#line 15937 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1309:
#line 1488 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x7E}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15943 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1310:
#line 1489 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x7E}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 15949 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1311:
#line 1490 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x7E};  emit(instr,2); }
#line 15955 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1312:
#line 1491 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x7E}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 15961 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1313:
#line 1492 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x7E}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15967 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1314:
#line 1493 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x7E}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 15973 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1315:
#line 1494 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x7B};  emit(instr,2); }
#line 15979 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1316:
#line 1495 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x7B};  emit(instr,2); }
#line 15985 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1317:
#line 1496 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x7B};  emit(instr,2); }
#line 15991 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1318:
#line 1497 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x7B};  emit(instr,2); }
#line 15997 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1319:
#line 1498 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x7B};  emit(instr,2); }
#line 16003 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1320:
#line 1499 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x7B};  emit(instr,2); }
#line 16009 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1321:
#line 1500 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x7B};  emit(instr,2); }
#line 16015 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1322:
#line 1501 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x7B};  emit(instr,2); }
#line 16021 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1323:
#line 1502 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x7B};  emit(instr,2); }
#line 16027 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1324:
#line 1503 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x7B};  emit(instr,2); }
#line 16033 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1325:
#line 1504 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x7B}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16039 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1326:
#line 1505 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x7B}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16045 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1327:
#line 1506 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x7B};  emit(instr,2); }
#line 16051 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1328:
#line 1507 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x7B}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 16057 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1329:
#line 1508 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x7B}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16063 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1330:
#line 1509 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x7B}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16069 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1331:
#line 1510 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x78};  emit(instr,2); }
#line 16075 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1332:
#line 1511 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x78};  emit(instr,2); }
#line 16081 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1333:
#line 1512 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x78};  emit(instr,2); }
#line 16087 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1334:
#line 1513 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x78};  emit(instr,2); }
#line 16093 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1335:
#line 1514 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x78};  emit(instr,2); }
#line 16099 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1336:
#line 1515 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x78};  emit(instr,2); }
#line 16105 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1337:
#line 1516 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x78};  emit(instr,2); }
#line 16111 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1338:
#line 1517 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x78};  emit(instr,2); }
#line 16117 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1339:
#line 1518 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x78};  emit(instr,2); }
#line 16123 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1340:
#line 1519 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x78};  emit(instr,2); }
#line 16129 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1341:
#line 1520 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x78}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16135 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1342:
#line 1521 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x78}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16141 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1343:
#line 1522 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x78};  emit(instr,2); }
#line 16147 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1344:
#line 1523 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x78}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 16153 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1345:
#line 1524 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x78}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16159 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1346:
#line 1525 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x78}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16165 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1347:
#line 1526 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x79};  emit(instr,2); }
#line 16171 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1348:
#line 1527 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x79};  emit(instr,2); }
#line 16177 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1349:
#line 1528 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x79};  emit(instr,2); }
#line 16183 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1350:
#line 1529 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x79};  emit(instr,2); }
#line 16189 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1351:
#line 1530 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x79};  emit(instr,2); }
#line 16195 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1352:
#line 1531 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x79};  emit(instr,2); }
#line 16201 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1353:
#line 1532 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x79};  emit(instr,2); }
#line 16207 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1354:
#line 1533 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x79};  emit(instr,2); }
#line 16213 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1355:
#line 1534 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x79};  emit(instr,2); }
#line 16219 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1356:
#line 1535 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x79};  emit(instr,2); }
#line 16225 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1357:
#line 1536 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x79}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16231 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1358:
#line 1537 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x79}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16237 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1359:
#line 1538 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x79};  emit(instr,2); }
#line 16243 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1360:
#line 1539 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x79}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 16249 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1361:
#line 1540 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x79}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16255 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1362:
#line 1541 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x79}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16261 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1363:
#line 1542 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x99};  emit(instr,2); }
#line 16267 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1364:
#line 1543 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x99};  emit(instr,2); }
#line 16273 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1365:
#line 1544 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x99};  emit(instr,2); }
#line 16279 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1366:
#line 1545 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x99};  emit(instr,2); }
#line 16285 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1367:
#line 1546 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x99};  emit(instr,2); }
#line 16291 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1368:
#line 1547 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x99};  emit(instr,2); }
#line 16297 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1369:
#line 1548 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x99};  emit(instr,2); }
#line 16303 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1370:
#line 1549 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x99};  emit(instr,2); }
#line 16309 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1371:
#line 1550 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x99};  emit(instr,2); }
#line 16315 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1372:
#line 1551 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x99};  emit(instr,2); }
#line 16321 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1373:
#line 1552 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x99}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16327 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1374:
#line 1553 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x99}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16333 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1375:
#line 1554 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x99};  emit(instr,2); }
#line 16339 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1376:
#line 1555 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x99}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 16345 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1377:
#line 1556 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x99}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16351 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1378:
#line 1557 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x99}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16357 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1379:
#line 1558 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x8A};  emit(instr,2); }
#line 16363 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1380:
#line 1559 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x8A};  emit(instr,2); }
#line 16369 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1381:
#line 1560 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x8A};  emit(instr,2); }
#line 16375 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1382:
#line 1561 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x8A};  emit(instr,2); }
#line 16381 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1383:
#line 1562 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x8A};  emit(instr,2); }
#line 16387 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1384:
#line 1563 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x8A};  emit(instr,2); }
#line 16393 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1385:
#line 1564 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x8A};  emit(instr,2); }
#line 16399 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1386:
#line 1565 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x8A};  emit(instr,2); }
#line 16405 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1387:
#line 1566 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x8A};  emit(instr,2); }
#line 16411 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1388:
#line 1567 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x8A};  emit(instr,2); }
#line 16417 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1389:
#line 1568 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x8A}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 16423 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1390:
#line 1569 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x8A}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 16429 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1391:
#line 1570 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x8A};  emit(instr,2); }
#line 16435 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1392:
#line 1571 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x8A}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 16441 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1393:
#line 1572 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x8A}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 16447 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1394:
#line 1573 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x8A}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 16453 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1395:
#line 1574 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16459 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1396:
#line 1575 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16465 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1397:
#line 1576 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16471 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1398:
#line 1577 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16477 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1399:
#line 1578 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16483 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1400:
#line 1579 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16489 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1401:
#line 1580 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16495 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1402:
#line 1581 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16501 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1403:
#line 1582 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16507 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1404:
#line 1583 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0x7C,0}; instr[2] = (yyvsp[-3].value); emit(instr,3); }
#line 16513 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1405:
#line 1584 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0x7C,0}; instr[3] = (yyvsp[-4].value); instr[1] = (yyvsp[-1].value); emit(instr,4); }
#line 16519 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1406:
#line 1585 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0x7C,0}; instr[3] = (yyvsp[-3].value); instr[1] = (yyvsp[-1].value); emit(instr,4); }
#line 16525 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1407:
#line 1586 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0x7C,0}; instr[2] = (yyvsp[-5].value); emit(instr,3); }
#line 16531 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1408:
#line 1587 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0x7C,0}; instr[3] = (yyvsp[-6].value); instr[1] = (yyvsp[-4].value); emit(instr,4); }
#line 16537 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1409:
#line 1588 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0x7C,0}; instr[4] = (yyvsp[-6].value); _SET16(instr,1,(yyvsp[-4].value)); emit(instr,5); }
#line 16543 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1410:
#line 1589 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0x7C,0}; instr[4] = (yyvsp[-6].value); _SET16(instr,1,(yyvsp[-4].value)); emit(instr,5); }
#line 16549 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1411:
#line 1590 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x98,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 16555 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1412:
#line 1591 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x99,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 16561 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1413:
#line 1592 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x9A,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 16567 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1414:
#line 1593 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x9B,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 16573 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1415:
#line 1594 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x9C,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 16579 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1416:
#line 1595 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x9D,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 16585 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1417:
#line 1596 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x9E,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 16591 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1418:
#line 1597 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x9F,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 16597 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1419:
#line 1598 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0x98,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 16603 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1420:
#line 1599 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0x98,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 16609 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1421:
#line 1600 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0x98,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 16615 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1422:
#line 1601 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0x98,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 16621 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1423:
#line 1602 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0x98,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 16627 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1424:
#line 1603 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0x98,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 16633 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1425:
#line 1604 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0x98,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 16639 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1426:
#line 1605 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0x98,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 16645 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1427:
#line 1606 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x89};  emit(instr,2); }
#line 16651 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1428:
#line 1607 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x89};  emit(instr,2); }
#line 16657 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1429:
#line 1608 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x89};  emit(instr,2); }
#line 16663 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1430:
#line 1609 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x89};  emit(instr,2); }
#line 16669 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1431:
#line 1610 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x89};  emit(instr,2); }
#line 16675 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1432:
#line 1611 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x89};  emit(instr,2); }
#line 16681 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1433:
#line 1612 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x89};  emit(instr,2); }
#line 16687 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1434:
#line 1613 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x89};  emit(instr,2); }
#line 16693 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1435:
#line 1614 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x89};  emit(instr,2); }
#line 16699 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1436:
#line 1615 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x89};  emit(instr,2); }
#line 16705 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1437:
#line 1616 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x89}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16711 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1438:
#line 1617 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x89}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16717 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1439:
#line 1618 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x89};  emit(instr,2); }
#line 16723 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1440:
#line 1619 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x89}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 16729 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1441:
#line 1620 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x89}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16735 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1442:
#line 1621 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x89}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16741 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1443:
#line 1622 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x88};  emit(instr,2); }
#line 16747 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1444:
#line 1623 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x88};  emit(instr,2); }
#line 16753 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1445:
#line 1624 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x88};  emit(instr,2); }
#line 16759 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1446:
#line 1625 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x88};  emit(instr,2); }
#line 16765 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1447:
#line 1626 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x88};  emit(instr,2); }
#line 16771 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1448:
#line 1627 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x88};  emit(instr,2); }
#line 16777 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1449:
#line 1628 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x88};  emit(instr,2); }
#line 16783 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1450:
#line 1629 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x88};  emit(instr,2); }
#line 16789 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1451:
#line 1630 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x88};  emit(instr,2); }
#line 16795 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1452:
#line 1631 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x88};  emit(instr,2); }
#line 16801 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1453:
#line 1632 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x88}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16807 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1454:
#line 1633 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x88}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 16813 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1455:
#line 1634 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x88};  emit(instr,2); }
#line 16819 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1456:
#line 1635 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x88}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 16825 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1457:
#line 1636 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x88}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16831 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1458:
#line 1637 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x88}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 16837 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1459:
#line 1638 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x48};  emit(instr,2); }
#line 16843 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1460:
#line 1639 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x49};  emit(instr,2); }
#line 16849 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1461:
#line 1640 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x4A};  emit(instr,2); }
#line 16855 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1462:
#line 1641 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x4B};  emit(instr,2); }
#line 16861 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1463:
#line 1642 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x4C};  emit(instr,2); }
#line 16867 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1464:
#line 1643 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x4D};  emit(instr,2); }
#line 16873 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1465:
#line 1644 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x4E};  emit(instr,2); }
#line 16879 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1466:
#line 1645 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x4F};  emit(instr,2); }
#line 16885 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1467:
#line 1646 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x48};  emit(instr,2); }
#line 16891 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1468:
#line 1647 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x49};  emit(instr,2); }
#line 16897 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1469:
#line 1648 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x4A};  emit(instr,2); }
#line 16903 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1470:
#line 1649 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x4B};  emit(instr,2); }
#line 16909 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1471:
#line 1650 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x4C};  emit(instr,2); }
#line 16915 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1472:
#line 1651 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x4D};  emit(instr,2); }
#line 16921 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1473:
#line 1652 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x4E};  emit(instr,2); }
#line 16927 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1474:
#line 1653 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x4F};  emit(instr,2); }
#line 16933 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1475:
#line 1654 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x48};  emit(instr,2); }
#line 16939 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1476:
#line 1655 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x49};  emit(instr,2); }
#line 16945 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1477:
#line 1656 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x4A};  emit(instr,2); }
#line 16951 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1478:
#line 1657 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x4B};  emit(instr,2); }
#line 16957 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1479:
#line 1658 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x4C};  emit(instr,2); }
#line 16963 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1480:
#line 1659 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x4D};  emit(instr,2); }
#line 16969 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1481:
#line 1660 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x4E};  emit(instr,2); }
#line 16975 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1482:
#line 1661 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x4F};  emit(instr,2); }
#line 16981 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1483:
#line 1662 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x48};  emit(instr,2); }
#line 16987 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1484:
#line 1663 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x49};  emit(instr,2); }
#line 16993 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1485:
#line 1664 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x4A};  emit(instr,2); }
#line 16999 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1486:
#line 1665 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x4B};  emit(instr,2); }
#line 17005 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1487:
#line 1666 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x4C};  emit(instr,2); }
#line 17011 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1488:
#line 1667 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x4D};  emit(instr,2); }
#line 17017 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1489:
#line 1668 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x4E};  emit(instr,2); }
#line 17023 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1490:
#line 1669 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x4F};  emit(instr,2); }
#line 17029 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1491:
#line 1670 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x48};  emit(instr,2); }
#line 17035 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1492:
#line 1671 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x49};  emit(instr,2); }
#line 17041 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1493:
#line 1672 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x4A};  emit(instr,2); }
#line 17047 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1494:
#line 1673 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x4B};  emit(instr,2); }
#line 17053 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1495:
#line 1674 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x4C};  emit(instr,2); }
#line 17059 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1496:
#line 1675 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x4D};  emit(instr,2); }
#line 17065 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1497:
#line 1676 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x4E};  emit(instr,2); }
#line 17071 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1498:
#line 1677 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x4F};  emit(instr,2); }
#line 17077 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1499:
#line 1678 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x48};  emit(instr,2); }
#line 17083 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1500:
#line 1679 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x49};  emit(instr,2); }
#line 17089 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1501:
#line 1680 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x4A};  emit(instr,2); }
#line 17095 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1502:
#line 1681 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x4B};  emit(instr,2); }
#line 17101 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1503:
#line 1682 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x4C};  emit(instr,2); }
#line 17107 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1504:
#line 1683 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x4D};  emit(instr,2); }
#line 17113 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1505:
#line 1684 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x4E};  emit(instr,2); }
#line 17119 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1506:
#line 1685 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x4F};  emit(instr,2); }
#line 17125 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1507:
#line 1686 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x48};  emit(instr,2); }
#line 17131 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1508:
#line 1687 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x49};  emit(instr,2); }
#line 17137 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1509:
#line 1688 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x4A};  emit(instr,2); }
#line 17143 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1510:
#line 1689 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x4B};  emit(instr,2); }
#line 17149 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1511:
#line 1690 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x4C};  emit(instr,2); }
#line 17155 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1512:
#line 1691 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x4D};  emit(instr,2); }
#line 17161 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1513:
#line 1692 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x4E};  emit(instr,2); }
#line 17167 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1514:
#line 1693 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x4F};  emit(instr,2); }
#line 17173 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1515:
#line 1694 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x48};  emit(instr,2); }
#line 17179 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1516:
#line 1695 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x49};  emit(instr,2); }
#line 17185 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1517:
#line 1696 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x4A};  emit(instr,2); }
#line 17191 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1518:
#line 1697 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x4B};  emit(instr,2); }
#line 17197 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1519:
#line 1698 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x4C};  emit(instr,2); }
#line 17203 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1520:
#line 1699 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x4D};  emit(instr,2); }
#line 17209 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1521:
#line 1700 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x4E};  emit(instr,2); }
#line 17215 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1522:
#line 1701 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x4F};  emit(instr,2); }
#line 17221 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1523:
#line 1702 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x48};  emit(instr,2); }
#line 17227 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1524:
#line 1703 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x49};  emit(instr,2); }
#line 17233 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1525:
#line 1704 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x4A};  emit(instr,2); }
#line 17239 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1526:
#line 1705 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x4B};  emit(instr,2); }
#line 17245 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1527:
#line 1706 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x4C};  emit(instr,2); }
#line 17251 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1528:
#line 1707 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x4D};  emit(instr,2); }
#line 17257 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1529:
#line 1708 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x4E};  emit(instr,2); }
#line 17263 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1530:
#line 1709 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x4F};  emit(instr,2); }
#line 17269 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1531:
#line 1710 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x48};  emit(instr,2); }
#line 17275 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1532:
#line 1711 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x49};  emit(instr,2); }
#line 17281 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1533:
#line 1712 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x4A};  emit(instr,2); }
#line 17287 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1534:
#line 1713 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x4B};  emit(instr,2); }
#line 17293 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1535:
#line 1714 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x4C};  emit(instr,2); }
#line 17299 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1536:
#line 1715 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x4D};  emit(instr,2); }
#line 17305 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1537:
#line 1716 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x4E};  emit(instr,2); }
#line 17311 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1538:
#line 1717 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x4F};  emit(instr,2); }
#line 17317 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1539:
#line 1718 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x48}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17323 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1540:
#line 1719 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x49}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17329 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1541:
#line 1720 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x4A}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17335 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1542:
#line 1721 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x4B}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17341 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1543:
#line 1722 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x4C}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17347 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1544:
#line 1723 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x4D}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17353 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1545:
#line 1724 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x4E}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17359 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1546:
#line 1725 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x4F}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17365 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1547:
#line 1726 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x48}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17371 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1548:
#line 1727 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x49}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17377 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1549:
#line 1728 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x4A}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17383 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1550:
#line 1729 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x4B}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17389 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1551:
#line 1730 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x4C}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17395 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1552:
#line 1731 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x4D}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17401 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1553:
#line 1732 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x4E}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17407 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1554:
#line 1733 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x4F}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17413 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1555:
#line 1734 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x48};  emit(instr,2); }
#line 17419 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1556:
#line 1735 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x49};  emit(instr,2); }
#line 17425 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1557:
#line 1736 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x4A};  emit(instr,2); }
#line 17431 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1558:
#line 1737 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x4B};  emit(instr,2); }
#line 17437 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1559:
#line 1738 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x4C};  emit(instr,2); }
#line 17443 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1560:
#line 1739 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x4D};  emit(instr,2); }
#line 17449 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1561:
#line 1740 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x4E};  emit(instr,2); }
#line 17455 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1562:
#line 1741 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x4F};  emit(instr,2); }
#line 17461 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1563:
#line 1742 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x48}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17467 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1564:
#line 1743 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x49}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17473 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1565:
#line 1744 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x4A}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17479 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1566:
#line 1745 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x4B}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17485 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1567:
#line 1746 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x4C}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17491 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1568:
#line 1747 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x4D}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17497 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1569:
#line 1748 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x4E}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17503 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1570:
#line 1749 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x4F}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17509 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1571:
#line 1750 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x48}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17515 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1572:
#line 1751 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x49}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17521 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1573:
#line 1752 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x4A}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17527 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1574:
#line 1753 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x4B}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17533 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1575:
#line 1754 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x4C}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17539 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1576:
#line 1755 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x4D}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17545 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1577:
#line 1756 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x4E}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17551 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1578:
#line 1757 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x4F}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17557 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1579:
#line 1758 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x48}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17563 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1580:
#line 1759 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x49}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17569 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1581:
#line 1760 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x4A}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17575 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1582:
#line 1761 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x4B}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17581 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1583:
#line 1762 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x4C}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17587 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1584:
#line 1763 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x4D}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17593 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1585:
#line 1764 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x4E}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17599 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1586:
#line 1765 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x4F}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17605 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1587:
#line 1766 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x35};  emit(instr,2); }
#line 17611 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1588:
#line 1767 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x34};  emit(instr,2); }
#line 17617 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1589:
#line 1768 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x00};  emit(instr,1); }
#line 17623 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1590:
#line 1769 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xE6,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 17629 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1591:
#line 1770 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x68};  emit(instr,1); }
#line 17635 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1592:
#line 1771 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x69};  emit(instr,1); }
#line 17641 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1593:
#line 1772 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x6A};  emit(instr,1); }
#line 17647 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1594:
#line 1773 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x6B};  emit(instr,1); }
#line 17653 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1595:
#line 1774 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xE2};  emit(instr,2); }
#line 17659 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1596:
#line 1775 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xE2};  emit(instr,2); }
#line 17665 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1597:
#line 1776 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xE2};  emit(instr,2); }
#line 17671 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1598:
#line 1777 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xE2};  emit(instr,2); }
#line 17677 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1599:
#line 1778 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xE2};  emit(instr,2); }
#line 17683 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1600:
#line 1779 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xE2};  emit(instr,2); }
#line 17689 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1601:
#line 1780 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xE2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17695 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1602:
#line 1781 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xE2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 17701 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1603:
#line 1782 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xE2};  emit(instr,2); }
#line 17707 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1604:
#line 1783 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xE2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 17713 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1605:
#line 1784 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xE2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17719 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1606:
#line 1785 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xE2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 17725 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1607:
#line 1786 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xE1};  emit(instr,2); }
#line 17731 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1608:
#line 1787 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xE1};  emit(instr,2); }
#line 17737 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1609:
#line 1788 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xE1};  emit(instr,2); }
#line 17743 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1610:
#line 1789 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xE1};  emit(instr,2); }
#line 17749 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1611:
#line 1790 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xE1};  emit(instr,2); }
#line 17755 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1612:
#line 1791 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xE1};  emit(instr,2); }
#line 17761 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1613:
#line 1792 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xE1};  emit(instr,2); }
#line 17767 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1614:
#line 1793 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xE1};  emit(instr,2); }
#line 17773 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1615:
#line 1794 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xE1};  emit(instr,2); }
#line 17779 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1616:
#line 1795 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xE1};  emit(instr,2); }
#line 17785 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1617:
#line 1796 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xE1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 17791 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1618:
#line 1797 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xE1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 17797 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1619:
#line 1798 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xE1};  emit(instr,2); }
#line 17803 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1620:
#line 1799 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xE1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 17809 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1621:
#line 1800 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xE1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 17815 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1622:
#line 1801 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xE1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 17821 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1623:
#line 1802 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17827 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1624:
#line 1803 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17833 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1625:
#line 1804 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17839 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1626:
#line 1805 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17845 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1627:
#line 1806 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17851 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1628:
#line 1807 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17857 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1629:
#line 1808 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17863 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1630:
#line 1809 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17869 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1631:
#line 1810 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17875 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1632:
#line 1811 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA4,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17881 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1633:
#line 1812 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0xE3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 17887 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1634:
#line 1813 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0xE3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 17893 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1635:
#line 1814 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 17899 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1636:
#line 1815 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0xE3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 17905 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1637:
#line 1816 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0xE3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 17911 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1638:
#line 1817 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0xE3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 17917 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1639:
#line 1818 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17923 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1640:
#line 1819 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17929 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1641:
#line 1820 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17935 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1642:
#line 1821 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17941 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1643:
#line 1822 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17947 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1644:
#line 1823 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17953 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1645:
#line 1824 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17959 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1646:
#line 1825 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17965 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1647:
#line 1826 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17971 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1648:
#line 1827 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA4,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17977 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1649:
#line 1828 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xD0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 17983 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1650:
#line 1829 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xD0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 17989 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1651:
#line 1830 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0xD0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 17995 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1652:
#line 1831 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0xD0,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 18001 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1653:
#line 1832 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0xD0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 18007 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1654:
#line 1833 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0xD0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 18013 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1655:
#line 1834 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xE6,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 18019 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1656:
#line 1835 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x68};  emit(instr,1); }
#line 18025 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1657:
#line 1836 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x69};  emit(instr,1); }
#line 18031 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1658:
#line 1837 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x6A};  emit(instr,1); }
#line 18037 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1659:
#line 1838 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x6B};  emit(instr,1); }
#line 18043 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1660:
#line 1839 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x6C};  emit(instr,1); }
#line 18049 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1661:
#line 1840 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x6D};  emit(instr,1); }
#line 18055 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1662:
#line 1841 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x6E};  emit(instr,1); }
#line 18061 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1663:
#line 1842 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x6F};  emit(instr,1); }
#line 18067 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1664:
#line 1843 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xE2};  emit(instr,2); }
#line 18073 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1665:
#line 1844 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xE2};  emit(instr,2); }
#line 18079 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1666:
#line 1845 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xE7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 18085 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1667:
#line 1846 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xE2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 18091 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1668:
#line 1847 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xE2};  emit(instr,2); }
#line 18097 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1669:
#line 1848 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xE2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 18103 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1670:
#line 1849 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xE2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 18109 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1671:
#line 1850 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xE2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 18115 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1672:
#line 1851 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xE1};  emit(instr,2); }
#line 18121 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1673:
#line 1852 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xE1};  emit(instr,2); }
#line 18127 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1674:
#line 1853 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xE1};  emit(instr,2); }
#line 18133 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1675:
#line 1854 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xE1};  emit(instr,2); }
#line 18139 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1676:
#line 1855 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xE1};  emit(instr,2); }
#line 18145 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1677:
#line 1856 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xE1};  emit(instr,2); }
#line 18151 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1678:
#line 1857 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xE1};  emit(instr,2); }
#line 18157 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1679:
#line 1858 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xE1};  emit(instr,2); }
#line 18163 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1680:
#line 1859 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xE1};  emit(instr,2); }
#line 18169 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1681:
#line 1860 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xE1};  emit(instr,2); }
#line 18175 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1682:
#line 1861 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xE1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 18181 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1683:
#line 1862 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xE1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 18187 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1684:
#line 1863 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xE1};  emit(instr,2); }
#line 18193 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1685:
#line 1864 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xE1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 18199 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1686:
#line 1865 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xE1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 18205 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1687:
#line 1866 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xE1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 18211 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1688:
#line 1867 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18217 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1689:
#line 1868 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18223 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1690:
#line 1869 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18229 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1691:
#line 1870 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18235 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1692:
#line 1871 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18241 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1693:
#line 1872 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18247 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1694:
#line 1873 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18253 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1695:
#line 1874 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18259 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1696:
#line 1875 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18265 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1697:
#line 1876 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18271 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1698:
#line 1877 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xE3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 18277 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1699:
#line 1878 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xE3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 18283 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1700:
#line 1879 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xE3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18289 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1701:
#line 1880 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xE3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 18295 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1702:
#line 1881 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xE3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 18301 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1703:
#line 1882 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xE3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 18307 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1704:
#line 1883 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18313 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1705:
#line 1884 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18319 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1706:
#line 1885 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18325 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1707:
#line 1886 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18331 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1708:
#line 1887 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18337 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1709:
#line 1888 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18343 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1710:
#line 1889 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18349 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1711:
#line 1890 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18355 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1712:
#line 1891 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18361 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1713:
#line 1892 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18367 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1714:
#line 1893 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xE0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 18373 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1715:
#line 1894 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xE0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 18379 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1716:
#line 1895 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xE0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 18385 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1717:
#line 1896 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xE0,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 18391 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1718:
#line 1897 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xE0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 18397 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1719:
#line 1898 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xE0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 18403 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1720:
#line 1899 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x65};  emit(instr,1); }
#line 18409 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1721:
#line 1900 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x64};  emit(instr,1); }
#line 18415 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1722:
#line 1901 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x55};  emit(instr,1); }
#line 18421 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1723:
#line 1902 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x54};  emit(instr,1); }
#line 18427 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1724:
#line 1903 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x76};  emit(instr,1); }
#line 18433 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1725:
#line 1904 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x08};  emit(instr,2); }
#line 18439 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1726:
#line 1905 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x09};  emit(instr,2); }
#line 18445 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1727:
#line 1906 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x0A};  emit(instr,2); }
#line 18451 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1728:
#line 1907 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x0B};  emit(instr,2); }
#line 18457 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1729:
#line 1908 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x0C};  emit(instr,2); }
#line 18463 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1730:
#line 1909 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x0D};  emit(instr,2); }
#line 18469 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1731:
#line 1910 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x0E};  emit(instr,2); }
#line 18475 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1732:
#line 1911 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x0F};  emit(instr,2); }
#line 18481 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1733:
#line 1912 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x08};  emit(instr,2); }
#line 18487 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1734:
#line 1913 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x09};  emit(instr,2); }
#line 18493 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1735:
#line 1914 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x0A};  emit(instr,2); }
#line 18499 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1736:
#line 1915 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x0B};  emit(instr,2); }
#line 18505 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1737:
#line 1916 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x0C};  emit(instr,2); }
#line 18511 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1738:
#line 1917 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x0D};  emit(instr,2); }
#line 18517 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1739:
#line 1918 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x0E};  emit(instr,2); }
#line 18523 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1740:
#line 1919 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x0F};  emit(instr,2); }
#line 18529 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1741:
#line 1920 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x08};  emit(instr,2); }
#line 18535 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1742:
#line 1921 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x09};  emit(instr,2); }
#line 18541 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1743:
#line 1922 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x0A};  emit(instr,2); }
#line 18547 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1744:
#line 1923 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x0B};  emit(instr,2); }
#line 18553 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1745:
#line 1924 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x0C};  emit(instr,2); }
#line 18559 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1746:
#line 1925 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x0D};  emit(instr,2); }
#line 18565 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1747:
#line 1926 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x0E};  emit(instr,2); }
#line 18571 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1748:
#line 1927 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x0F};  emit(instr,2); }
#line 18577 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1749:
#line 1928 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x08};  emit(instr,2); }
#line 18583 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1750:
#line 1929 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x09};  emit(instr,2); }
#line 18589 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1751:
#line 1930 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x0A};  emit(instr,2); }
#line 18595 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1752:
#line 1931 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x0B};  emit(instr,2); }
#line 18601 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1753:
#line 1932 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x0C};  emit(instr,2); }
#line 18607 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1754:
#line 1933 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x0D};  emit(instr,2); }
#line 18613 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1755:
#line 1934 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x0E};  emit(instr,2); }
#line 18619 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1756:
#line 1935 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x0F};  emit(instr,2); }
#line 18625 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1757:
#line 1936 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x08};  emit(instr,2); }
#line 18631 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1758:
#line 1937 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x09};  emit(instr,2); }
#line 18637 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1759:
#line 1938 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x0A};  emit(instr,2); }
#line 18643 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1760:
#line 1939 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x0B};  emit(instr,2); }
#line 18649 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1761:
#line 1940 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x0C};  emit(instr,2); }
#line 18655 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1762:
#line 1941 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x0D};  emit(instr,2); }
#line 18661 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1763:
#line 1942 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x0E};  emit(instr,2); }
#line 18667 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1764:
#line 1943 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x0F};  emit(instr,2); }
#line 18673 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1765:
#line 1944 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x08};  emit(instr,2); }
#line 18679 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1766:
#line 1945 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x09};  emit(instr,2); }
#line 18685 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1767:
#line 1946 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x0A};  emit(instr,2); }
#line 18691 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1768:
#line 1947 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x0B};  emit(instr,2); }
#line 18697 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1769:
#line 1948 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x0C};  emit(instr,2); }
#line 18703 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1770:
#line 1949 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x0D};  emit(instr,2); }
#line 18709 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1771:
#line 1950 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x0E};  emit(instr,2); }
#line 18715 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1772:
#line 1951 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x0F};  emit(instr,2); }
#line 18721 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1773:
#line 1952 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x08};  emit(instr,2); }
#line 18727 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1774:
#line 1953 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x09};  emit(instr,2); }
#line 18733 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1775:
#line 1954 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x0A};  emit(instr,2); }
#line 18739 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1776:
#line 1955 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x0B};  emit(instr,2); }
#line 18745 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1777:
#line 1956 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x0C};  emit(instr,2); }
#line 18751 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1778:
#line 1957 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x0D};  emit(instr,2); }
#line 18757 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1779:
#line 1958 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x0E};  emit(instr,2); }
#line 18763 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1780:
#line 1959 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x0F};  emit(instr,2); }
#line 18769 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1781:
#line 1960 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x08};  emit(instr,2); }
#line 18775 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1782:
#line 1961 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x09};  emit(instr,2); }
#line 18781 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1783:
#line 1962 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x0A};  emit(instr,2); }
#line 18787 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1784:
#line 1963 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x0B};  emit(instr,2); }
#line 18793 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1785:
#line 1964 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x0C};  emit(instr,2); }
#line 18799 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1786:
#line 1965 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x0D};  emit(instr,2); }
#line 18805 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1787:
#line 1966 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x0E};  emit(instr,2); }
#line 18811 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1788:
#line 1967 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x0F};  emit(instr,2); }
#line 18817 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1789:
#line 1968 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x08};  emit(instr,2); }
#line 18823 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1790:
#line 1969 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x09};  emit(instr,2); }
#line 18829 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1791:
#line 1970 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x0A};  emit(instr,2); }
#line 18835 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1792:
#line 1971 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x0B};  emit(instr,2); }
#line 18841 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1793:
#line 1972 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x0C};  emit(instr,2); }
#line 18847 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1794:
#line 1973 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x0D};  emit(instr,2); }
#line 18853 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1795:
#line 1974 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x0E};  emit(instr,2); }
#line 18859 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1796:
#line 1975 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x0F};  emit(instr,2); }
#line 18865 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1797:
#line 1976 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x08};  emit(instr,2); }
#line 18871 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1798:
#line 1977 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x09};  emit(instr,2); }
#line 18877 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1799:
#line 1978 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x0A};  emit(instr,2); }
#line 18883 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1800:
#line 1979 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x0B};  emit(instr,2); }
#line 18889 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1801:
#line 1980 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x0C};  emit(instr,2); }
#line 18895 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1802:
#line 1981 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x0D};  emit(instr,2); }
#line 18901 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1803:
#line 1982 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x0E};  emit(instr,2); }
#line 18907 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1804:
#line 1983 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x0F};  emit(instr,2); }
#line 18913 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1805:
#line 1984 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x08}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18919 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1806:
#line 1985 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x09}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18925 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1807:
#line 1986 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x0A}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18931 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1808:
#line 1987 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x0B}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18937 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1809:
#line 1988 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x0C}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18943 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1810:
#line 1989 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x0D}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18949 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1811:
#line 1990 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x0E}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18955 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1812:
#line 1991 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x0F}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18961 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1813:
#line 1992 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x08}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18967 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1814:
#line 1993 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x09}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18973 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1815:
#line 1994 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x0A}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18979 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1816:
#line 1995 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x0B}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18985 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1817:
#line 1996 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x0C}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18991 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1818:
#line 1997 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x0D}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 18997 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1819:
#line 1998 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x0E}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 19003 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1820:
#line 1999 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x0F}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 19009 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1821:
#line 2000 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x08};  emit(instr,2); }
#line 19015 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1822:
#line 2001 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x09};  emit(instr,2); }
#line 19021 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1823:
#line 2002 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x0A};  emit(instr,2); }
#line 19027 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1824:
#line 2003 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x0B};  emit(instr,2); }
#line 19033 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1825:
#line 2004 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x0C};  emit(instr,2); }
#line 19039 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1826:
#line 2005 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x0D};  emit(instr,2); }
#line 19045 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1827:
#line 2006 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x0E};  emit(instr,2); }
#line 19051 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1828:
#line 2007 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x0F};  emit(instr,2); }
#line 19057 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1829:
#line 2008 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x08}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 19063 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1830:
#line 2009 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x09}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 19069 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1831:
#line 2010 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x0A}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 19075 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1832:
#line 2011 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x0B}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 19081 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1833:
#line 2012 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x0C}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 19087 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1834:
#line 2013 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x0D}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 19093 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1835:
#line 2014 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x0E}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 19099 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1836:
#line 2015 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x0F}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 19105 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1837:
#line 2016 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x08}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19111 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1838:
#line 2017 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x09}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19117 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1839:
#line 2018 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x0A}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19123 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1840:
#line 2019 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x0B}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19129 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1841:
#line 2020 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x0C}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19135 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1842:
#line 2021 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x0D}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19141 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1843:
#line 2022 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x0E}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19147 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1844:
#line 2023 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x0F}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19153 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1845:
#line 2024 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x08}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19159 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1846:
#line 2025 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x09}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19165 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1847:
#line 2026 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x0A}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19171 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1848:
#line 2027 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x0B}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19177 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1849:
#line 2028 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x0C}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19183 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1850:
#line 2029 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x0D}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19189 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1851:
#line 2030 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x0E}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19195 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1852:
#line 2031 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x0F}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 19201 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1853:
#line 2032 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x12};  emit(instr,2); }
#line 19207 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1854:
#line 2033 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x12};  emit(instr,2); }
#line 19213 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1855:
#line 2034 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x12};  emit(instr,2); }
#line 19219 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1856:
#line 2035 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x12};  emit(instr,2); }
#line 19225 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1857:
#line 2036 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x12};  emit(instr,2); }
#line 19231 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1858:
#line 2037 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x12};  emit(instr,2); }
#line 19237 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1859:
#line 2038 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x12};  emit(instr,2); }
#line 19243 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1860:
#line 2039 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x12};  emit(instr,2); }
#line 19249 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1861:
#line 2040 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x12};  emit(instr,2); }
#line 19255 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1862:
#line 2041 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x12};  emit(instr,2); }
#line 19261 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1863:
#line 2042 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x12}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19267 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1864:
#line 2043 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x12}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19273 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1865:
#line 2044 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x12};  emit(instr,2); }
#line 19279 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1866:
#line 2045 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x12}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 19285 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1867:
#line 2046 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x12}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19291 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1868:
#line 2047 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x12}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19297 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1869:
#line 2048 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x95};  emit(instr,1); }
#line 19303 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1870:
#line 2049 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x33};  emit(instr,1); }
#line 19309 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1871:
#line 2050 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xB7};  emit(instr,2); }
#line 19315 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1872:
#line 2051 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xB7};  emit(instr,2); }
#line 19321 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1873:
#line 2052 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xB7};  emit(instr,2); }
#line 19327 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1874:
#line 2053 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xB7};  emit(instr,2); }
#line 19333 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1875:
#line 2054 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xB7};  emit(instr,2); }
#line 19339 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1876:
#line 2055 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xB7};  emit(instr,2); }
#line 19345 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1877:
#line 2056 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xB7};  emit(instr,2); }
#line 19351 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1878:
#line 2057 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xB7};  emit(instr,2); }
#line 19357 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1879:
#line 2058 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xB7};  emit(instr,2); }
#line 19363 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1880:
#line 2059 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xB7};  emit(instr,2); }
#line 19369 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1881:
#line 2060 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xB7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19375 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1882:
#line 2061 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xB7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19381 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1883:
#line 2062 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xB7};  emit(instr,2); }
#line 19387 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1884:
#line 2063 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xB7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 19393 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1885:
#line 2064 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xB7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19399 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1886:
#line 2065 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xB7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19405 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1887:
#line 2066 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x33};  emit(instr,1); }
#line 19411 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1888:
#line 2067 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xB7};  emit(instr,2); }
#line 19417 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1889:
#line 2068 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xB7};  emit(instr,2); }
#line 19423 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1890:
#line 2069 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xB7};  emit(instr,2); }
#line 19429 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1891:
#line 2070 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xB7};  emit(instr,2); }
#line 19435 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1892:
#line 2071 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xB7};  emit(instr,2); }
#line 19441 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1893:
#line 2072 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xB7};  emit(instr,2); }
#line 19447 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1894:
#line 2073 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xB7};  emit(instr,2); }
#line 19453 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1895:
#line 2074 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xB7};  emit(instr,2); }
#line 19459 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1896:
#line 2075 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xB7};  emit(instr,2); }
#line 19465 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1897:
#line 2076 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xB7};  emit(instr,2); }
#line 19471 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1898:
#line 2077 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xB7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19477 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1899:
#line 2078 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xB7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19483 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1900:
#line 2079 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xB7};  emit(instr,2); }
#line 19489 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1901:
#line 2080 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xB7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 19495 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1902:
#line 2081 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xB7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19501 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1903:
#line 2082 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xB7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19507 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1904:
#line 2083 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x43};  emit(instr,1); }
#line 19513 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1905:
#line 2084 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xC7};  emit(instr,2); }
#line 19519 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1906:
#line 2085 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xC7};  emit(instr,2); }
#line 19525 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1907:
#line 2086 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xC7};  emit(instr,2); }
#line 19531 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1908:
#line 2087 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xC7};  emit(instr,2); }
#line 19537 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1909:
#line 2088 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xC7};  emit(instr,2); }
#line 19543 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1910:
#line 2089 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xC7};  emit(instr,2); }
#line 19549 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1911:
#line 2090 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xC7};  emit(instr,2); }
#line 19555 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1912:
#line 2091 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xC7};  emit(instr,2); }
#line 19561 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1913:
#line 2092 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xC7};  emit(instr,2); }
#line 19567 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1914:
#line 2093 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xC7};  emit(instr,2); }
#line 19573 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1915:
#line 2094 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xC7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19579 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1916:
#line 2095 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xC7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19585 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1917:
#line 2096 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xC7};  emit(instr,2); }
#line 19591 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1918:
#line 2097 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xC7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 19597 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1919:
#line 2098 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xC7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19603 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1920:
#line 2099 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xC7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19609 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1921:
#line 2100 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x43};  emit(instr,1); }
#line 19615 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1922:
#line 2101 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xC7};  emit(instr,2); }
#line 19621 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1923:
#line 2102 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xC7};  emit(instr,2); }
#line 19627 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1924:
#line 2103 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xC7};  emit(instr,2); }
#line 19633 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1925:
#line 2104 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xC7};  emit(instr,2); }
#line 19639 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1926:
#line 2105 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xC7};  emit(instr,2); }
#line 19645 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1927:
#line 2106 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xC7};  emit(instr,2); }
#line 19651 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1928:
#line 2107 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xC7};  emit(instr,2); }
#line 19657 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1929:
#line 2108 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xC7};  emit(instr,2); }
#line 19663 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1930:
#line 2109 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xC7};  emit(instr,2); }
#line 19669 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1931:
#line 2110 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xC7};  emit(instr,2); }
#line 19675 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1932:
#line 2111 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xC7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19681 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1933:
#line 2112 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xC7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 19687 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1934:
#line 2113 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xC7};  emit(instr,2); }
#line 19693 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1935:
#line 2114 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xC7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 19699 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1936:
#line 2115 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xC7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19705 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1937:
#line 2116 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xC7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 19711 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1938:
#line 2117 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x01};  emit(instr,1); }
#line 19717 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1939:
#line 2118 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x02};  emit(instr,1); }
#line 19723 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1940:
#line 2119 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x18};  emit(instr,2); }
#line 19729 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1941:
#line 2120 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x19};  emit(instr,2); }
#line 19735 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1942:
#line 2121 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x1A};  emit(instr,2); }
#line 19741 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1943:
#line 2122 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x1B};  emit(instr,2); }
#line 19747 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1944:
#line 2123 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x1C};  emit(instr,2); }
#line 19753 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1945:
#line 2124 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x1D};  emit(instr,2); }
#line 19759 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1946:
#line 2125 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x1E};  emit(instr,2); }
#line 19765 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1947:
#line 2126 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x1F};  emit(instr,2); }
#line 19771 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1948:
#line 2127 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x18};  emit(instr,2); }
#line 19777 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1949:
#line 2128 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x19};  emit(instr,2); }
#line 19783 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1950:
#line 2129 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x1A};  emit(instr,2); }
#line 19789 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1951:
#line 2130 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x1B};  emit(instr,2); }
#line 19795 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1952:
#line 2131 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x1C};  emit(instr,2); }
#line 19801 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1953:
#line 2132 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x1D};  emit(instr,2); }
#line 19807 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1954:
#line 2133 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x1E};  emit(instr,2); }
#line 19813 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1955:
#line 2134 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x1F};  emit(instr,2); }
#line 19819 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1956:
#line 2135 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x18};  emit(instr,2); }
#line 19825 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1957:
#line 2136 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x19};  emit(instr,2); }
#line 19831 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1958:
#line 2137 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x1A};  emit(instr,2); }
#line 19837 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1959:
#line 2138 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x1B};  emit(instr,2); }
#line 19843 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1960:
#line 2139 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x1C};  emit(instr,2); }
#line 19849 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1961:
#line 2140 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x1D};  emit(instr,2); }
#line 19855 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1962:
#line 2141 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x1E};  emit(instr,2); }
#line 19861 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1963:
#line 2142 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x1F};  emit(instr,2); }
#line 19867 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1964:
#line 2143 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x18};  emit(instr,2); }
#line 19873 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1965:
#line 2144 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x19};  emit(instr,2); }
#line 19879 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1966:
#line 2145 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x1A};  emit(instr,2); }
#line 19885 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1967:
#line 2146 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x1B};  emit(instr,2); }
#line 19891 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1968:
#line 2147 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x1C};  emit(instr,2); }
#line 19897 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1969:
#line 2148 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x1D};  emit(instr,2); }
#line 19903 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1970:
#line 2149 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x1E};  emit(instr,2); }
#line 19909 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1971:
#line 2150 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x1F};  emit(instr,2); }
#line 19915 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1972:
#line 2151 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x18};  emit(instr,2); }
#line 19921 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1973:
#line 2152 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x19};  emit(instr,2); }
#line 19927 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1974:
#line 2153 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x1A};  emit(instr,2); }
#line 19933 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1975:
#line 2154 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x1B};  emit(instr,2); }
#line 19939 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1976:
#line 2155 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x1C};  emit(instr,2); }
#line 19945 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1977:
#line 2156 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x1D};  emit(instr,2); }
#line 19951 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1978:
#line 2157 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x1E};  emit(instr,2); }
#line 19957 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1979:
#line 2158 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x1F};  emit(instr,2); }
#line 19963 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1980:
#line 2159 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x18};  emit(instr,2); }
#line 19969 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1981:
#line 2160 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x19};  emit(instr,2); }
#line 19975 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1982:
#line 2161 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x1A};  emit(instr,2); }
#line 19981 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1983:
#line 2162 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x1B};  emit(instr,2); }
#line 19987 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1984:
#line 2163 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x1C};  emit(instr,2); }
#line 19993 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1985:
#line 2164 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x1D};  emit(instr,2); }
#line 19999 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1986:
#line 2165 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x1E};  emit(instr,2); }
#line 20005 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1987:
#line 2166 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x1F};  emit(instr,2); }
#line 20011 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1988:
#line 2167 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x18};  emit(instr,2); }
#line 20017 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1989:
#line 2168 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x19};  emit(instr,2); }
#line 20023 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1990:
#line 2169 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x1A};  emit(instr,2); }
#line 20029 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1991:
#line 2170 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x1B};  emit(instr,2); }
#line 20035 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1992:
#line 2171 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x1C};  emit(instr,2); }
#line 20041 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1993:
#line 2172 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x1D};  emit(instr,2); }
#line 20047 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1994:
#line 2173 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x1E};  emit(instr,2); }
#line 20053 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1995:
#line 2174 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x1F};  emit(instr,2); }
#line 20059 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1996:
#line 2175 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x18};  emit(instr,2); }
#line 20065 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1997:
#line 2176 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x19};  emit(instr,2); }
#line 20071 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1998:
#line 2177 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x1A};  emit(instr,2); }
#line 20077 "y.tab.c" /* yacc.c:1651  */
    break;

  case 1999:
#line 2178 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x1B};  emit(instr,2); }
#line 20083 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2000:
#line 2179 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x1C};  emit(instr,2); }
#line 20089 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2001:
#line 2180 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x1D};  emit(instr,2); }
#line 20095 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2002:
#line 2181 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x1E};  emit(instr,2); }
#line 20101 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2003:
#line 2182 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x1F};  emit(instr,2); }
#line 20107 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2004:
#line 2183 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x18};  emit(instr,2); }
#line 20113 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2005:
#line 2184 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x19};  emit(instr,2); }
#line 20119 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2006:
#line 2185 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x1A};  emit(instr,2); }
#line 20125 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2007:
#line 2186 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x1B};  emit(instr,2); }
#line 20131 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2008:
#line 2187 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x1C};  emit(instr,2); }
#line 20137 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2009:
#line 2188 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x1D};  emit(instr,2); }
#line 20143 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2010:
#line 2189 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x1E};  emit(instr,2); }
#line 20149 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2011:
#line 2190 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x1F};  emit(instr,2); }
#line 20155 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2012:
#line 2191 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x18};  emit(instr,2); }
#line 20161 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2013:
#line 2192 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x19};  emit(instr,2); }
#line 20167 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2014:
#line 2193 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x1A};  emit(instr,2); }
#line 20173 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2015:
#line 2194 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x1B};  emit(instr,2); }
#line 20179 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2016:
#line 2195 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x1C};  emit(instr,2); }
#line 20185 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2017:
#line 2196 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x1D};  emit(instr,2); }
#line 20191 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2018:
#line 2197 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x1E};  emit(instr,2); }
#line 20197 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2019:
#line 2198 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x1F};  emit(instr,2); }
#line 20203 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2020:
#line 2199 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x18}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20209 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2021:
#line 2200 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x19}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20215 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2022:
#line 2201 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x1A}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20221 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2023:
#line 2202 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x1B}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20227 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2024:
#line 2203 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x1C}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20233 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2025:
#line 2204 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x1D}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20239 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2026:
#line 2205 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x1E}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20245 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2027:
#line 2206 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x1F}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20251 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2028:
#line 2207 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x18}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20257 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2029:
#line 2208 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x19}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20263 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2030:
#line 2209 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x1A}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20269 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2031:
#line 2210 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x1B}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20275 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2032:
#line 2211 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x1C}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20281 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2033:
#line 2212 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x1D}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20287 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2034:
#line 2213 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x1E}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20293 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2035:
#line 2214 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x1F}; instr[1] = (yyvsp[-2].value); emit(instr,3); }
#line 20299 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2036:
#line 2215 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x18};  emit(instr,2); }
#line 20305 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2037:
#line 2216 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x19};  emit(instr,2); }
#line 20311 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2038:
#line 2217 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x1A};  emit(instr,2); }
#line 20317 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2039:
#line 2218 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x1B};  emit(instr,2); }
#line 20323 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2040:
#line 2219 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x1C};  emit(instr,2); }
#line 20329 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2041:
#line 2220 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x1D};  emit(instr,2); }
#line 20335 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2042:
#line 2221 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x1E};  emit(instr,2); }
#line 20341 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2043:
#line 2222 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x1F};  emit(instr,2); }
#line 20347 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2044:
#line 2223 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x18}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 20353 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2045:
#line 2224 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x19}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 20359 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2046:
#line 2225 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x1A}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 20365 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2047:
#line 2226 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x1B}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 20371 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2048:
#line 2227 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x1C}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 20377 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2049:
#line 2228 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x1D}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 20383 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2050:
#line 2229 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x1E}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 20389 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2051:
#line 2230 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x1F}; instr[1] = (yyvsp[-5].value); emit(instr,3); }
#line 20395 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2052:
#line 2231 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x18}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20401 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2053:
#line 2232 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x19}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20407 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2054:
#line 2233 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x1A}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20413 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2055:
#line 2234 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x1B}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20419 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2056:
#line 2235 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x1C}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20425 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2057:
#line 2236 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x1D}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20431 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2058:
#line 2237 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x1E}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20437 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2059:
#line 2238 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x1F}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20443 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2060:
#line 2239 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x18}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20449 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2061:
#line 2240 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x19}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20455 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2062:
#line 2241 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x1A}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20461 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2063:
#line 2242 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x1B}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20467 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2064:
#line 2243 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x1C}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20473 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2065:
#line 2244 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x1D}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20479 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2066:
#line 2245 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x1E}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20485 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2067:
#line 2246 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x1F}; _SET16(instr,1,(yyvsp[-5].value)); emit(instr,4); }
#line 20491 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2068:
#line 2247 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB6,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 20497 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2069:
#line 2248 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x38};  emit(instr,1); }
#line 20503 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2070:
#line 2249 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x39};  emit(instr,1); }
#line 20509 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2071:
#line 2250 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x3A};  emit(instr,1); }
#line 20515 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2072:
#line 2251 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x3B};  emit(instr,1); }
#line 20521 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2073:
#line 2252 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xB2};  emit(instr,2); }
#line 20527 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2074:
#line 2253 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xB2};  emit(instr,2); }
#line 20533 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2075:
#line 2254 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xB2};  emit(instr,2); }
#line 20539 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2076:
#line 2255 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xB2};  emit(instr,2); }
#line 20545 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2077:
#line 2256 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xB2};  emit(instr,2); }
#line 20551 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2078:
#line 2257 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xB2};  emit(instr,2); }
#line 20557 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2079:
#line 2258 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 20563 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2080:
#line 2259 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xB2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 20569 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2081:
#line 2260 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xB2};  emit(instr,2); }
#line 20575 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2082:
#line 2261 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xB2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 20581 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2083:
#line 2262 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xB2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 20587 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2084:
#line 2263 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xB2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 20593 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2085:
#line 2264 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xB1};  emit(instr,2); }
#line 20599 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2086:
#line 2265 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xB1};  emit(instr,2); }
#line 20605 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2087:
#line 2266 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xB1};  emit(instr,2); }
#line 20611 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2088:
#line 2267 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xB1};  emit(instr,2); }
#line 20617 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2089:
#line 2268 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xB1};  emit(instr,2); }
#line 20623 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2090:
#line 2269 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xB1};  emit(instr,2); }
#line 20629 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2091:
#line 2270 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xB1};  emit(instr,2); }
#line 20635 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2092:
#line 2271 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xB1};  emit(instr,2); }
#line 20641 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2093:
#line 2272 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xB1};  emit(instr,2); }
#line 20647 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2094:
#line 2273 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xB1};  emit(instr,2); }
#line 20653 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2095:
#line 2274 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xB1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 20659 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2096:
#line 2275 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xB1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 20665 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2097:
#line 2276 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xB1};  emit(instr,2); }
#line 20671 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2098:
#line 2277 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xB1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 20677 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2099:
#line 2278 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xB1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 20683 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2100:
#line 2279 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xB1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 20689 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2101:
#line 2280 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20695 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2102:
#line 2281 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20701 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2103:
#line 2282 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20707 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2104:
#line 2283 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20713 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2105:
#line 2284 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20719 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2106:
#line 2285 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20725 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2107:
#line 2286 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20731 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2108:
#line 2287 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20737 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2109:
#line 2288 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20743 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2110:
#line 2289 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA4,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20749 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2111:
#line 2290 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0xB3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 20755 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2112:
#line 2291 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0xB3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 20761 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2113:
#line 2292 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 20767 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2114:
#line 2293 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0xB3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 20773 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2115:
#line 2294 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0xB3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 20779 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2116:
#line 2295 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0xB3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 20785 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2117:
#line 2296 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20791 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2118:
#line 2297 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20797 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2119:
#line 2298 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20803 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2120:
#line 2299 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20809 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2121:
#line 2300 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20815 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2122:
#line 2301 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20821 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2123:
#line 2302 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20827 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2124:
#line 2303 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20833 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2125:
#line 2304 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20839 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2126:
#line 2305 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA4,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20845 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2127:
#line 2306 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xB0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 20851 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2128:
#line 2307 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xB0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 20857 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2129:
#line 2308 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0xB0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 20863 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2130:
#line 2309 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0xB0,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 20869 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2131:
#line 2310 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0xB0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 20875 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2132:
#line 2311 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0xB0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 20881 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2133:
#line 2312 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB6,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 20887 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2134:
#line 2313 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x38};  emit(instr,1); }
#line 20893 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2135:
#line 2314 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x39};  emit(instr,1); }
#line 20899 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2136:
#line 2315 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x3A};  emit(instr,1); }
#line 20905 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2137:
#line 2316 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x3B};  emit(instr,1); }
#line 20911 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2138:
#line 2317 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x3C};  emit(instr,1); }
#line 20917 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2139:
#line 2318 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x3D};  emit(instr,1); }
#line 20923 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2140:
#line 2319 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x3E};  emit(instr,1); }
#line 20929 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2141:
#line 2320 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x3F};  emit(instr,1); }
#line 20935 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2142:
#line 2321 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xB2};  emit(instr,2); }
#line 20941 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2143:
#line 2322 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xB2};  emit(instr,2); }
#line 20947 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2144:
#line 2323 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 20953 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2145:
#line 2324 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xB2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 20959 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2146:
#line 2325 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xB2};  emit(instr,2); }
#line 20965 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2147:
#line 2326 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xB2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 20971 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2148:
#line 2327 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xB2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 20977 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2149:
#line 2328 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xB2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 20983 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2150:
#line 2329 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xB1};  emit(instr,2); }
#line 20989 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2151:
#line 2330 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xB1};  emit(instr,2); }
#line 20995 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2152:
#line 2331 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xB1};  emit(instr,2); }
#line 21001 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2153:
#line 2332 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xB1};  emit(instr,2); }
#line 21007 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2154:
#line 2333 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xB1};  emit(instr,2); }
#line 21013 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2155:
#line 2334 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xB1};  emit(instr,2); }
#line 21019 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2156:
#line 2335 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xB1};  emit(instr,2); }
#line 21025 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2157:
#line 2336 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xB1};  emit(instr,2); }
#line 21031 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2158:
#line 2337 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xB1};  emit(instr,2); }
#line 21037 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2159:
#line 2338 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xB1};  emit(instr,2); }
#line 21043 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2160:
#line 2339 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xB1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 21049 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2161:
#line 2340 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xB1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 21055 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2162:
#line 2341 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xB1};  emit(instr,2); }
#line 21061 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2163:
#line 2342 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xB1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 21067 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2164:
#line 2343 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xB1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 21073 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2165:
#line 2344 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xB1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 21079 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2166:
#line 2345 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21085 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2167:
#line 2346 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21091 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2168:
#line 2347 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21097 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2169:
#line 2348 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21103 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2170:
#line 2349 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21109 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2171:
#line 2350 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21115 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2172:
#line 2351 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21121 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2173:
#line 2352 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21127 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2174:
#line 2353 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21133 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2175:
#line 2354 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21139 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2176:
#line 2355 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xB3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 21145 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2177:
#line 2356 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xB3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 21151 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2178:
#line 2357 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xB3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21157 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2179:
#line 2358 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xB3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 21163 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2180:
#line 2359 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xB3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 21169 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2181:
#line 2360 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xB3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 21175 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2182:
#line 2361 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21181 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2183:
#line 2362 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21187 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2184:
#line 2363 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21193 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2185:
#line 2364 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21199 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2186:
#line 2365 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21205 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2187:
#line 2366 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21211 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2188:
#line 2367 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21217 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2189:
#line 2368 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21223 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2190:
#line 2369 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21229 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2191:
#line 2370 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21235 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2192:
#line 2371 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xB0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 21241 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2193:
#line 2372 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xB0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 21247 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2194:
#line 2373 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xB0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 21253 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2195:
#line 2374 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xB0,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 21259 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2196:
#line 2375 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xB0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 21265 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2197:
#line 2376 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xB0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 21271 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2198:
#line 2377 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x11};  emit(instr,2); }
#line 21277 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2199:
#line 2378 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x11};  emit(instr,2); }
#line 21283 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2200:
#line 2379 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x11};  emit(instr,2); }
#line 21289 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2201:
#line 2380 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x11};  emit(instr,2); }
#line 21295 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2202:
#line 2381 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x11};  emit(instr,2); }
#line 21301 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2203:
#line 2382 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x11};  emit(instr,2); }
#line 21307 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2204:
#line 2383 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x11};  emit(instr,2); }
#line 21313 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2205:
#line 2384 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x11};  emit(instr,2); }
#line 21319 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2206:
#line 2385 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x11};  emit(instr,2); }
#line 21325 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2207:
#line 2386 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x11};  emit(instr,2); }
#line 21331 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2208:
#line 2387 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x11}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21337 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2209:
#line 2388 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x11}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21343 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2210:
#line 2389 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x11};  emit(instr,2); }
#line 21349 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2211:
#line 2390 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x11}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 21355 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2212:
#line 2391 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x11}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21361 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2213:
#line 2392 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x11}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21367 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2214:
#line 2393 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x85};  emit(instr,1); }
#line 21373 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2215:
#line 2394 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x31,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 21379 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2216:
#line 2395 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xCB,0}; instr[1] = _REL8(2,(yyvsp[-1].value)); emit(instr,2); }
#line 21385 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2217:
#line 2396 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x53};  emit(instr,1); }
#line 21391 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2218:
#line 2397 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xD7};  emit(instr,2); }
#line 21397 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2219:
#line 2398 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xD7};  emit(instr,2); }
#line 21403 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2220:
#line 2399 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xD7};  emit(instr,2); }
#line 21409 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2221:
#line 2400 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xD7};  emit(instr,2); }
#line 21415 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2222:
#line 2401 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xD7};  emit(instr,2); }
#line 21421 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2223:
#line 2402 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xD7};  emit(instr,2); }
#line 21427 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2224:
#line 2403 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xD7};  emit(instr,2); }
#line 21433 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2225:
#line 2404 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xD7};  emit(instr,2); }
#line 21439 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2226:
#line 2405 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xD7};  emit(instr,2); }
#line 21445 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2227:
#line 2406 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xD7};  emit(instr,2); }
#line 21451 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2228:
#line 2407 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xD7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21457 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2229:
#line 2408 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xD7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21463 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2230:
#line 2409 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xD7};  emit(instr,2); }
#line 21469 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2231:
#line 2410 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xD7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 21475 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2232:
#line 2411 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xD7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21481 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2233:
#line 2412 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xD7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21487 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2234:
#line 2413 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x53};  emit(instr,1); }
#line 21493 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2235:
#line 2414 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xD7};  emit(instr,2); }
#line 21499 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2236:
#line 2415 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xD7};  emit(instr,2); }
#line 21505 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2237:
#line 2416 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xD7};  emit(instr,2); }
#line 21511 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2238:
#line 2417 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xD7};  emit(instr,2); }
#line 21517 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2239:
#line 2418 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xD7};  emit(instr,2); }
#line 21523 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2240:
#line 2419 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xD7};  emit(instr,2); }
#line 21529 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2241:
#line 2420 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xD7};  emit(instr,2); }
#line 21535 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2242:
#line 2421 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xD7};  emit(instr,2); }
#line 21541 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2243:
#line 2422 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xD7};  emit(instr,2); }
#line 21547 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2244:
#line 2423 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xD7};  emit(instr,2); }
#line 21553 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2245:
#line 2424 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xD7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21559 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2246:
#line 2425 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xD7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21565 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2247:
#line 2426 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xD7};  emit(instr,2); }
#line 21571 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2248:
#line 2427 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xD7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 21577 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2249:
#line 2428 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xD7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21583 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2250:
#line 2429 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xD7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21589 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2251:
#line 2430 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x73};  emit(instr,1); }
#line 21595 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2252:
#line 2431 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xF7};  emit(instr,2); }
#line 21601 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2253:
#line 2432 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xF7};  emit(instr,2); }
#line 21607 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2254:
#line 2433 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xF7};  emit(instr,2); }
#line 21613 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2255:
#line 2434 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xF7};  emit(instr,2); }
#line 21619 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2256:
#line 2435 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xF7};  emit(instr,2); }
#line 21625 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2257:
#line 2436 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xF7};  emit(instr,2); }
#line 21631 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2258:
#line 2437 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xF7};  emit(instr,2); }
#line 21637 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2259:
#line 2438 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xF7};  emit(instr,2); }
#line 21643 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2260:
#line 2439 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xF7};  emit(instr,2); }
#line 21649 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2261:
#line 2440 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xF7};  emit(instr,2); }
#line 21655 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2262:
#line 2441 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xF7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21661 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2263:
#line 2442 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xF7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21667 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2264:
#line 2443 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xF7};  emit(instr,2); }
#line 21673 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2265:
#line 2444 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xF7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 21679 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2266:
#line 2445 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xF7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21685 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2267:
#line 2446 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xF7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21691 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2268:
#line 2447 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x73};  emit(instr,1); }
#line 21697 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2269:
#line 2448 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xF7};  emit(instr,2); }
#line 21703 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2270:
#line 2449 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xF7};  emit(instr,2); }
#line 21709 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2271:
#line 2450 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xF7};  emit(instr,2); }
#line 21715 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2272:
#line 2451 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xF7};  emit(instr,2); }
#line 21721 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2273:
#line 2452 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xF7};  emit(instr,2); }
#line 21727 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2274:
#line 2453 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xF7};  emit(instr,2); }
#line 21733 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2275:
#line 2454 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xF7};  emit(instr,2); }
#line 21739 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2276:
#line 2455 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xF7};  emit(instr,2); }
#line 21745 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2277:
#line 2456 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xF7};  emit(instr,2); }
#line 21751 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2278:
#line 2457 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xF7};  emit(instr,2); }
#line 21757 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2279:
#line 2458 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xF7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21763 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2280:
#line 2459 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xF7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21769 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2281:
#line 2460 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xF7};  emit(instr,2); }
#line 21775 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2282:
#line 2461 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xF7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 21781 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2283:
#line 2462 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xF7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21787 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2284:
#line 2463 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xF7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21793 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2285:
#line 2464 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x63};  emit(instr,1); }
#line 21799 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2286:
#line 2465 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xE7};  emit(instr,2); }
#line 21805 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2287:
#line 2466 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xE7};  emit(instr,2); }
#line 21811 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2288:
#line 2467 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xE7};  emit(instr,2); }
#line 21817 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2289:
#line 2468 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xE7};  emit(instr,2); }
#line 21823 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2290:
#line 2469 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xE7};  emit(instr,2); }
#line 21829 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2291:
#line 2470 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xE7};  emit(instr,2); }
#line 21835 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2292:
#line 2471 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xE7};  emit(instr,2); }
#line 21841 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2293:
#line 2472 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xE7};  emit(instr,2); }
#line 21847 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2294:
#line 2473 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xE7};  emit(instr,2); }
#line 21853 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2295:
#line 2474 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xE7};  emit(instr,2); }
#line 21859 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2296:
#line 2475 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xE7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21865 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2297:
#line 2476 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xE7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21871 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2298:
#line 2477 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xE7};  emit(instr,2); }
#line 21877 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2299:
#line 2478 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xE7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 21883 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2300:
#line 2479 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xE7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21889 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2301:
#line 2480 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xE7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21895 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2302:
#line 2481 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x63};  emit(instr,1); }
#line 21901 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2303:
#line 2482 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xE7};  emit(instr,2); }
#line 21907 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2304:
#line 2483 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xE7};  emit(instr,2); }
#line 21913 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2305:
#line 2484 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xE7};  emit(instr,2); }
#line 21919 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2306:
#line 2485 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xE7};  emit(instr,2); }
#line 21925 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2307:
#line 2486 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xE7};  emit(instr,2); }
#line 21931 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2308:
#line 2487 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xE7};  emit(instr,2); }
#line 21937 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2309:
#line 2488 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xE7};  emit(instr,2); }
#line 21943 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2310:
#line 2489 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xE7};  emit(instr,2); }
#line 21949 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2311:
#line 2490 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xE7};  emit(instr,2); }
#line 21955 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2312:
#line 2491 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xE7};  emit(instr,2); }
#line 21961 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2313:
#line 2492 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xE7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21967 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2314:
#line 2493 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xE7}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 21973 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2315:
#line 2494 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xE7};  emit(instr,2); }
#line 21979 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2316:
#line 2495 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xE7}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 21985 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2317:
#line 2496 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xE7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21991 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2318:
#line 2497 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xE7}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 21997 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2319:
#line 2498 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x88};  emit(instr,1); }
#line 22003 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2320:
#line 2499 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x89};  emit(instr,1); }
#line 22009 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2321:
#line 2500 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x8A};  emit(instr,1); }
#line 22015 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2322:
#line 2501 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x8B};  emit(instr,1); }
#line 22021 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2323:
#line 2502 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD4,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 22027 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2324:
#line 2503 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD5,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 22033 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2325:
#line 2504 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xD2};  emit(instr,1); }
#line 22039 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2326:
#line 2505 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD3,0}; instr[1] = (yyvsp[-4].value); emit(instr,2); }
#line 22045 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2327:
#line 2506 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xD0,0,0}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,3); }
#line 22051 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2328:
#line 2507 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xD1,0,0}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,3); }
#line 22057 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2329:
#line 2508 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x88};  emit(instr,1); }
#line 22063 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2330:
#line 2509 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x89};  emit(instr,1); }
#line 22069 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2331:
#line 2510 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x8A};  emit(instr,1); }
#line 22075 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2332:
#line 2511 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x8B};  emit(instr,1); }
#line 22081 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2333:
#line 2512 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x8C};  emit(instr,1); }
#line 22087 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2334:
#line 2513 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x8D};  emit(instr,1); }
#line 22093 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2335:
#line 2514 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x8E};  emit(instr,1); }
#line 22099 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2336:
#line 2515 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x8F};  emit(instr,1); }
#line 22105 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2337:
#line 2516 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD4,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 22111 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2338:
#line 2517 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD5,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 22117 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2339:
#line 2518 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0xD2};  emit(instr,1); }
#line 22123 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2340:
#line 2519 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xD3,0}; instr[1] = (yyvsp[-4].value); emit(instr,2); }
#line 22129 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2341:
#line 2520 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xD0,0,0}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,3); }
#line 22135 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2342:
#line 2521 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xD1,0,0}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,3); }
#line 22141 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2343:
#line 2522 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA6,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 22147 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2344:
#line 2523 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x28};  emit(instr,1); }
#line 22153 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2345:
#line 2524 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x29};  emit(instr,1); }
#line 22159 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2346:
#line 2525 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x2A};  emit(instr,1); }
#line 22165 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2347:
#line 2526 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x2B};  emit(instr,1); }
#line 22171 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2348:
#line 2527 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xA2};  emit(instr,2); }
#line 22177 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2349:
#line 2528 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xA2};  emit(instr,2); }
#line 22183 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2350:
#line 2529 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xA2};  emit(instr,2); }
#line 22189 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2351:
#line 2530 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xA2};  emit(instr,2); }
#line 22195 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2352:
#line 2531 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xA2};  emit(instr,2); }
#line 22201 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2353:
#line 2532 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xA2};  emit(instr,2); }
#line 22207 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2354:
#line 2533 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 22213 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2355:
#line 2534 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xA2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 22219 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2356:
#line 2535 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xA2};  emit(instr,2); }
#line 22225 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2357:
#line 2536 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xA2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 22231 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2358:
#line 2537 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xA2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 22237 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2359:
#line 2538 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xA2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 22243 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2360:
#line 2539 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xA1};  emit(instr,2); }
#line 22249 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2361:
#line 2540 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xA1};  emit(instr,2); }
#line 22255 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2362:
#line 2541 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xA1};  emit(instr,2); }
#line 22261 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2363:
#line 2542 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xA1};  emit(instr,2); }
#line 22267 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2364:
#line 2543 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xA1};  emit(instr,2); }
#line 22273 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2365:
#line 2544 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xA1};  emit(instr,2); }
#line 22279 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2366:
#line 2545 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xA1};  emit(instr,2); }
#line 22285 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2367:
#line 2546 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xA1};  emit(instr,2); }
#line 22291 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2368:
#line 2547 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xA1};  emit(instr,2); }
#line 22297 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2369:
#line 2548 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xA1};  emit(instr,2); }
#line 22303 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2370:
#line 2549 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xA1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 22309 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2371:
#line 2550 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xA1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 22315 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2372:
#line 2551 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xA1};  emit(instr,2); }
#line 22321 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2373:
#line 2552 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xA1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 22327 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2374:
#line 2553 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xA1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 22333 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2375:
#line 2554 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xA1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 22339 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2376:
#line 2555 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22345 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2377:
#line 2556 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22351 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2378:
#line 2557 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22357 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2379:
#line 2558 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22363 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2380:
#line 2559 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22369 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2381:
#line 2560 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22375 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2382:
#line 2561 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22381 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2383:
#line 2562 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22387 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2384:
#line 2563 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22393 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2385:
#line 2564 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA4,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22399 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2386:
#line 2565 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0xA3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22405 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2387:
#line 2566 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0xA3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22411 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2388:
#line 2567 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22417 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2389:
#line 2568 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0xA3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22423 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2390:
#line 2569 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0xA3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 22429 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2391:
#line 2570 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0xA3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 22435 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2392:
#line 2571 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22441 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2393:
#line 2572 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22447 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2394:
#line 2573 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22453 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2395:
#line 2574 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22459 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2396:
#line 2575 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22465 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2397:
#line 2576 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22471 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2398:
#line 2577 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22477 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2399:
#line 2578 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22483 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2400:
#line 2579 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22489 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2401:
#line 2580 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA4,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22495 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2402:
#line 2581 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xA0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 22501 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2403:
#line 2582 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xA0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 22507 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2404:
#line 2583 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0xA0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 22513 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2405:
#line 2584 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0xA0,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 22519 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2406:
#line 2585 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0xA0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 22525 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2407:
#line 2586 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0xA0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 22531 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2408:
#line 2587 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA6,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 22537 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2409:
#line 2588 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x28};  emit(instr,1); }
#line 22543 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2410:
#line 2589 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x29};  emit(instr,1); }
#line 22549 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2411:
#line 2590 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x2A};  emit(instr,1); }
#line 22555 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2412:
#line 2591 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x2B};  emit(instr,1); }
#line 22561 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2413:
#line 2592 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x2C};  emit(instr,1); }
#line 22567 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2414:
#line 2593 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x2D};  emit(instr,1); }
#line 22573 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2415:
#line 2594 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x2E};  emit(instr,1); }
#line 22579 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2416:
#line 2595 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x2F};  emit(instr,1); }
#line 22585 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2417:
#line 2596 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xA2};  emit(instr,2); }
#line 22591 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2418:
#line 2597 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xA2};  emit(instr,2); }
#line 22597 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2419:
#line 2598 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 22603 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2420:
#line 2599 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xA2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 22609 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2421:
#line 2600 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xA2};  emit(instr,2); }
#line 22615 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2422:
#line 2601 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xA2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 22621 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2423:
#line 2602 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xA2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 22627 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2424:
#line 2603 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xA2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 22633 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2425:
#line 2604 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xA1};  emit(instr,2); }
#line 22639 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2426:
#line 2605 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xA1};  emit(instr,2); }
#line 22645 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2427:
#line 2606 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xA1};  emit(instr,2); }
#line 22651 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2428:
#line 2607 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xA1};  emit(instr,2); }
#line 22657 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2429:
#line 2608 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xA1};  emit(instr,2); }
#line 22663 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2430:
#line 2609 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xA1};  emit(instr,2); }
#line 22669 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2431:
#line 2610 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xA1};  emit(instr,2); }
#line 22675 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2432:
#line 2611 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xA1};  emit(instr,2); }
#line 22681 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2433:
#line 2612 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xA1};  emit(instr,2); }
#line 22687 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2434:
#line 2613 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xA1};  emit(instr,2); }
#line 22693 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2435:
#line 2614 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xA1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 22699 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2436:
#line 2615 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xA1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 22705 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2437:
#line 2616 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xA1};  emit(instr,2); }
#line 22711 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2438:
#line 2617 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xA1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 22717 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2439:
#line 2618 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xA1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 22723 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2440:
#line 2619 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xA1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 22729 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2441:
#line 2620 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22735 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2442:
#line 2621 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22741 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2443:
#line 2622 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22747 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2444:
#line 2623 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22753 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2445:
#line 2624 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22759 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2446:
#line 2625 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22765 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2447:
#line 2626 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22771 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2448:
#line 2627 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22777 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2449:
#line 2628 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22783 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2450:
#line 2629 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22789 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2451:
#line 2630 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xA3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22795 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2452:
#line 2631 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xA3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22801 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2453:
#line 2632 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xA3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22807 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2454:
#line 2633 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xA3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22813 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2455:
#line 2634 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xA3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 22819 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2456:
#line 2635 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xA3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 22825 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2457:
#line 2636 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22831 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2458:
#line 2637 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22837 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2459:
#line 2638 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22843 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2460:
#line 2639 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22849 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2461:
#line 2640 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22855 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2462:
#line 2641 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22861 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2463:
#line 2642 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22867 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2464:
#line 2643 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22873 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2465:
#line 2644 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22879 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2466:
#line 2645 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22885 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2467:
#line 2646 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xA0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22891 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2468:
#line 2647 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xA0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22897 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2469:
#line 2648 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xA0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 22903 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2470:
#line 2649 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xA0,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 22909 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2471:
#line 2650 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xA0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 22915 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2472:
#line 2651 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xA0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 22921 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2473:
#line 2652 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x83};  emit(instr,1); }
#line 22927 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2474:
#line 2653 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x83};  emit(instr,1); }
#line 22933 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2475:
#line 2654 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x13};  emit(instr,2); }
#line 22939 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2476:
#line 2655 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x13};  emit(instr,2); }
#line 22945 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2477:
#line 2656 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x13};  emit(instr,2); }
#line 22951 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2478:
#line 2657 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x13};  emit(instr,2); }
#line 22957 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2479:
#line 2658 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x13};  emit(instr,2); }
#line 22963 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2480:
#line 2659 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x13};  emit(instr,2); }
#line 22969 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2481:
#line 2660 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x13};  emit(instr,2); }
#line 22975 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2482:
#line 2661 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x13};  emit(instr,2); }
#line 22981 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2483:
#line 2662 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x13};  emit(instr,2); }
#line 22987 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2484:
#line 2663 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x13};  emit(instr,2); }
#line 22993 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2485:
#line 2664 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x13}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 22999 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2486:
#line 2665 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x13}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 23005 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2487:
#line 2666 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x13};  emit(instr,2); }
#line 23011 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2488:
#line 2667 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x13}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 23017 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2489:
#line 2668 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x13}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23023 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2490:
#line 2669 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x13}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23029 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2491:
#line 2670 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0x10};  emit(instr,2); }
#line 23035 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2492:
#line 2671 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0x10};  emit(instr,2); }
#line 23041 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2493:
#line 2672 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0x10};  emit(instr,2); }
#line 23047 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2494:
#line 2673 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0x10};  emit(instr,2); }
#line 23053 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2495:
#line 2674 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0x10};  emit(instr,2); }
#line 23059 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2496:
#line 2675 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0x10};  emit(instr,2); }
#line 23065 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2497:
#line 2676 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0x10};  emit(instr,2); }
#line 23071 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2498:
#line 2677 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0x10};  emit(instr,2); }
#line 23077 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2499:
#line 2678 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0x10};  emit(instr,2); }
#line 23083 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2500:
#line 2679 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0x10};  emit(instr,2); }
#line 23089 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2501:
#line 2680 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0x10}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 23095 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2502:
#line 2681 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0x10}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 23101 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2503:
#line 2682 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0x10};  emit(instr,2); }
#line 23107 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2504:
#line 2683 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0x10}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 23113 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2505:
#line 2684 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0x10}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23119 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2506:
#line 2685 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0x10}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23125 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2507:
#line 2686 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0x10};  emit(instr,2); }
#line 23131 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2508:
#line 2687 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0x10};  emit(instr,2); }
#line 23137 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2509:
#line 2688 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0x10};  emit(instr,2); }
#line 23143 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2510:
#line 2689 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0x10};  emit(instr,2); }
#line 23149 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2511:
#line 2690 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0x10};  emit(instr,2); }
#line 23155 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2512:
#line 2691 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0x10};  emit(instr,2); }
#line 23161 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2513:
#line 2692 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0x10};  emit(instr,2); }
#line 23167 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2514:
#line 2693 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0x10};  emit(instr,2); }
#line 23173 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2515:
#line 2694 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0x10};  emit(instr,2); }
#line 23179 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2516:
#line 2695 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0x10};  emit(instr,2); }
#line 23185 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2517:
#line 2696 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0x10}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 23191 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2518:
#line 2697 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0x10}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 23197 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2519:
#line 2698 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0x10};  emit(instr,2); }
#line 23203 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2520:
#line 2699 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0x10}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 23209 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2521:
#line 2700 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0x10}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23215 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2522:
#line 2701 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0x10}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23221 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2523:
#line 2702 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x84,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 23227 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2524:
#line 2703 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xF6,0,0}; _SET16(instr,1,(yyvsp[-1].value)); emit(instr,3); }
#line 23233 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2525:
#line 2704 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xF2};  emit(instr,2); }
#line 23239 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2526:
#line 2705 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xF2};  emit(instr,2); }
#line 23245 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2527:
#line 2706 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xF2};  emit(instr,2); }
#line 23251 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2528:
#line 2707 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xF2};  emit(instr,2); }
#line 23257 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2529:
#line 2708 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xF2};  emit(instr,2); }
#line 23263 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2530:
#line 2709 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xF2};  emit(instr,2); }
#line 23269 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2531:
#line 2710 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xF7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 23275 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2532:
#line 2711 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xF2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 23281 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2533:
#line 2712 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xF2};  emit(instr,2); }
#line 23287 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2534:
#line 2713 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xF2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 23293 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2535:
#line 2714 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xF2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23299 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2536:
#line 2715 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xF2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23305 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2537:
#line 2716 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x44,0xF1};  emit(instr,2); }
#line 23311 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2538:
#line 2717 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x45,0xF1};  emit(instr,2); }
#line 23317 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2539:
#line 2718 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x46,0xF1};  emit(instr,2); }
#line 23323 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2540:
#line 2719 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x47,0xF1};  emit(instr,2); }
#line 23329 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2541:
#line 2720 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x92,0xF1};  emit(instr,2); }
#line 23335 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2542:
#line 2721 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x90,0xF1};  emit(instr,2); }
#line 23341 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2543:
#line 2722 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x91,0xF1};  emit(instr,2); }
#line 23347 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2544:
#line 2723 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA1,0xF1};  emit(instr,2); }
#line 23353 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2545:
#line 2724 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA0,0xF1};  emit(instr,2); }
#line 23359 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2546:
#line 2725 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA4,0xF1};  emit(instr,2); }
#line 23365 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2547:
#line 2726 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB4,0,0xF1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 23371 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2548:
#line 2727 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB5,0,0xF1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 23377 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2549:
#line 2728 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xB2,0xF1};  emit(instr,2); }
#line 23383 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2550:
#line 2729 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB3,0,0xF1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 23389 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2551:
#line 2730 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB0,0,0,0xF1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 23395 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2552:
#line 2731 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB1,0,0,0xF1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 23401 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2553:
#line 2732 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x44,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23407 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2554:
#line 2733 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x45,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23413 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2555:
#line 2734 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x46,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23419 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2556:
#line 2735 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x47,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23425 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2557:
#line 2736 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x92,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23431 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2558:
#line 2737 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x90,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23437 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2559:
#line 2738 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x91,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23443 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2560:
#line 2739 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA1,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23449 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2561:
#line 2740 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA0,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23455 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2562:
#line 2741 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA4,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23461 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2563:
#line 2742 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB4,0,0xF3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23467 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2564:
#line 2743 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB5,0,0xF3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23473 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2565:
#line 2744 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xB2,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23479 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2566:
#line 2745 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB3,0,0xF3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23485 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2567:
#line 2746 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB0,0,0,0xF3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 23491 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2568:
#line 2747 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB1,0,0,0xF3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 23497 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2569:
#line 2748 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x44,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23503 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2570:
#line 2749 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x45,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23509 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2571:
#line 2750 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x46,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23515 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2572:
#line 2751 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x47,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23521 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2573:
#line 2752 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x92,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23527 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2574:
#line 2753 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x90,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23533 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2575:
#line 2754 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0x91,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23539 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2576:
#line 2755 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA1,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23545 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2577:
#line 2756 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA0,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23551 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2578:
#line 2757 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xA4,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23557 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2579:
#line 2758 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB4,0,0xF0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 23563 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2580:
#line 2759 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB5,0,0xF0,0,0}; instr[1] = (yyvsp[-4].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 23569 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2581:
#line 2760 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xB2,0xF0,0,0}; _SET16(instr,2,(yyvsp[-1].value)); emit(instr,4); }
#line 23575 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2582:
#line 2761 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xB3,0,0xF0,0,0}; instr[1] = (yyvsp[-7].value); _SET16(instr,3,(yyvsp[-1].value)); emit(instr,5); }
#line 23581 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2583:
#line 2762 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB0,0,0,0xF0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 23587 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2584:
#line 2763 "asm662.y" /* yacc.c:1651  */
    { u8 instr[6] = {0xB1,0,0,0xF0,0,0}; _SET16(instr,1,(yyvsp[-7].value)); _SET16(instr,4,(yyvsp[-1].value)); emit(instr,6); }
#line 23593 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2585:
#line 2764 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xF6,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 23599 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2586:
#line 2765 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xF2};  emit(instr,2); }
#line 23605 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2587:
#line 2766 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xF2};  emit(instr,2); }
#line 23611 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2588:
#line 2767 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xF2};  emit(instr,2); }
#line 23617 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2589:
#line 2768 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xF2};  emit(instr,2); }
#line 23623 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2590:
#line 2769 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xF2};  emit(instr,2); }
#line 23629 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2591:
#line 2770 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xF2};  emit(instr,2); }
#line 23635 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2592:
#line 2771 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xF2};  emit(instr,2); }
#line 23641 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2593:
#line 2772 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xF2};  emit(instr,2); }
#line 23647 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2594:
#line 2773 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xF2};  emit(instr,2); }
#line 23653 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2595:
#line 2774 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xF2};  emit(instr,2); }
#line 23659 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2596:
#line 2775 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xF7,0}; instr[1] = (yyvsp[-1].value); emit(instr,2); }
#line 23665 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2597:
#line 2776 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xF2}; instr[1] = (yyvsp[-1].value); emit(instr,3); }
#line 23671 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2598:
#line 2777 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xF2};  emit(instr,2); }
#line 23677 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2599:
#line 2778 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xF2}; instr[1] = (yyvsp[-4].value); emit(instr,3); }
#line 23683 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2600:
#line 2779 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xF2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23689 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2601:
#line 2780 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xF2}; _SET16(instr,1,(yyvsp[-4].value)); emit(instr,4); }
#line 23695 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2602:
#line 2781 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x20,0xF1};  emit(instr,2); }
#line 23701 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2603:
#line 2782 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x21,0xF1};  emit(instr,2); }
#line 23707 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2604:
#line 2783 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x22,0xF1};  emit(instr,2); }
#line 23713 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2605:
#line 2784 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x23,0xF1};  emit(instr,2); }
#line 23719 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2606:
#line 2785 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x24,0xF1};  emit(instr,2); }
#line 23725 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2607:
#line 2786 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x25,0xF1};  emit(instr,2); }
#line 23731 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2608:
#line 2787 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x26,0xF1};  emit(instr,2); }
#line 23737 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2609:
#line 2788 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0x27,0xF1};  emit(instr,2); }
#line 23743 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2610:
#line 2789 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA2,0xF1};  emit(instr,2); }
#line 23749 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2611:
#line 2790 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xA3,0xF1};  emit(instr,2); }
#line 23755 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2612:
#line 2791 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC4,0,0xF1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 23761 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2613:
#line 2792 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC5,0,0xF1}; instr[1] = (yyvsp[-3].value); emit(instr,3); }
#line 23767 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2614:
#line 2793 "asm662.y" /* yacc.c:1651  */
    { u8 instr[2] = {0xC2,0xF1};  emit(instr,2); }
#line 23773 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2615:
#line 2794 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC3,0,0xF1}; instr[1] = (yyvsp[-6].value); emit(instr,3); }
#line 23779 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2616:
#line 2795 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC0,0,0,0xF1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 23785 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2617:
#line 2796 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC1,0,0,0xF1}; _SET16(instr,1,(yyvsp[-6].value)); emit(instr,4); }
#line 23791 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2618:
#line 2797 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23797 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2619:
#line 2798 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23803 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2620:
#line 2799 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23809 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2621:
#line 2800 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23815 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2622:
#line 2801 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23821 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2623:
#line 2802 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23827 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2624:
#line 2803 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23833 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2625:
#line 2804 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23839 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2626:
#line 2805 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23845 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2627:
#line 2806 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23851 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2628:
#line 2807 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xF3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23857 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2629:
#line 2808 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xF3,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23863 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2630:
#line 2809 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xF3,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23869 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2631:
#line 2810 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xF3,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23875 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2632:
#line 2811 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xF3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 23881 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2633:
#line 2812 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xF3,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 23887 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2634:
#line 2813 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x20,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23893 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2635:
#line 2814 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x21,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23899 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2636:
#line 2815 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x22,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23905 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2637:
#line 2816 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x23,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23911 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2638:
#line 2817 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x24,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23917 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2639:
#line 2818 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x25,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23923 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2640:
#line 2819 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x26,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23929 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2641:
#line 2820 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0x27,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23935 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2642:
#line 2821 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA2,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23941 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2643:
#line 2822 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xA3,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23947 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2644:
#line 2823 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC4,0,0xF0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23953 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2645:
#line 2824 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC5,0,0xF0,0}; instr[1] = (yyvsp[-4].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23959 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2646:
#line 2825 "asm662.y" /* yacc.c:1651  */
    { u8 instr[3] = {0xC2,0xF0,0}; instr[2] = (yyvsp[-1].value); emit(instr,3); }
#line 23965 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2647:
#line 2826 "asm662.y" /* yacc.c:1651  */
    { u8 instr[4] = {0xC3,0,0xF0,0}; instr[1] = (yyvsp[-7].value); instr[3] = (yyvsp[-1].value); emit(instr,4); }
#line 23971 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2648:
#line 2827 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC0,0,0,0xF0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 23977 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2649:
#line 2828 "asm662.y" /* yacc.c:1651  */
    { u8 instr[5] = {0xC1,0,0,0xF0,0}; _SET16(instr,1,(yyvsp[-7].value)); instr[4] = (yyvsp[-1].value); emit(instr,5); }
#line 23983 "y.tab.c" /* yacc.c:1651  */
    break;

  case 2650:
#line 2829 "asm662.y" /* yacc.c:1651  */
    { u8 instr[1] = {0x04};  emit(instr,1); }
#line 23989 "y.tab.c" /* yacc.c:1651  */
    break;


#line 23993 "y.tab.c" /* yacc.c:1651  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
