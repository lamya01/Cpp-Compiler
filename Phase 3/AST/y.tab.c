/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "plex.y" /* yacc.c:339  */

	#include<stdio.h>
	int valid=1;
	extern FILE *yyin;
	extern FILE *yyout;
	extern char* yytext;
	extern int lineNo,scope,isInt,isFloat;
	struct symTable{
		char variable[50];
		int type;
		int intVal;
		float floatVal;
		int scope;
		int lineNo;
	};
	struct node{
		char* var;
		char* val;
		struct node * left;
		struct node* right;
	};
	struct symTable symbTable[50];
	int temp;
	int index=0;
	int flotC=0;
	int intC=0;
	float fltTemp;
	char tempStr[50];
	struct node* createLeafNode(char* val,char* var);
	struct node* createNode(char* val,struct node* left,struct node* right);

#line 98 "y.tab.c" /* yacc.c:339  */

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
    airth = 258,
    assig = 259,
    library = 260,
    UOP = 261,
    UOM = 262,
    assigP = 263,
    assigM = 264,
    assigMu = 265,
    assigD = 266,
    dataType = 267,
    IF = 268,
    FOR = 269,
    ELSE = 270,
    WHILE = 271,
    INCLUDE = 272,
    MAIN = 273,
    FO = 274,
    FC = 275,
    BO = 276,
    BC = 277,
    SeCo = 278,
    prin = 279,
    com = 280,
    plus = 281,
    mult = 282,
    minus = 283,
    divide = 284,
    mod = 285,
    brak = 286,
    s_ = 287,
    f_ = 288,
    d_ = 289,
    integer = 290,
    id = 291,
    comp = 292,
    string = 293,
    logical = 294,
    flot = 295
  };
#endif
/* Tokens.  */
#define airth 258
#define assig 259
#define library 260
#define UOP 261
#define UOM 262
#define assigP 263
#define assigM 264
#define assigMu 265
#define assigD 266
#define dataType 267
#define IF 268
#define FOR 269
#define ELSE 270
#define WHILE 271
#define INCLUDE 272
#define MAIN 273
#define FO 274
#define FC 275
#define BO 276
#define BC 277
#define SeCo 278
#define prin 279
#define com 280
#define plus 281
#define mult 282
#define minus 283
#define divide 284
#define mod 285
#define brak 286
#define s_ 287
#define f_ 288
#define d_ 289
#define integer 290
#define id 291
#define comp 292
#define string 293
#define logical 294
#define flot 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "plex.y" /* yacc.c:355  */

	      float floot;
        char *text;
				struct rtrn{int val;float flt;struct node* nd;}rtrn;

#line 224 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    46,    47,    49,    50,    51,    52,    53,
      54,    55,    56,    88,   112,   136,   160,   185,   197,   198,
     199,   200,   201,   202,   203,   204,   222,   223,   224,   225,
     226,   228,   229,   230,   231,   245,   261,   275,   289,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     306,   307,   308,   309,   310,   311,   312,   313
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "airth", "assig", "library", "UOP",
  "UOM", "assigP", "assigM", "assigMu", "assigD", "dataType", "IF", "FOR",
  "ELSE", "WHILE", "INCLUDE", "MAIN", "FO", "FC", "BO", "BC", "SeCo",
  "prin", "com", "plus", "mult", "minus", "divide", "mod", "brak", "s_",
  "f_", "d_", "integer", "id", "comp", "string", "logical", "flot",
  "$accept", "S", "A", "AssigExpr", "E", "T", "F", "W", "Iw", "UE", "Fo",
  "IFo", "Ie", "step", "init", "initDaEx", "cond", "print", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

#define YYPACT_NINF -24

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-24)))

#define YYTABLE_NINF -18

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    -1,     4,    22,    32,    -6,   -24,   106,   -24,    29,
      34,    37,     5,    47,    53,    58,   137,    68,    66,   106,
      69,   106,   106,   106,   -24,   -24,    76,    73,    55,    -4,
      55,    63,     7,   -24,   -24,     7,     7,     7,     7,   -24,
     106,   -24,   106,   -24,   -24,   -24,   106,     7,   -11,   -24,
     127,   -24,   -24,   -24,     2,    18,    23,    79,    81,    37,
      83,    87,    82,    89,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,    92,   -24,   -24,    55,    55,     7,     7,
       7,     7,   -24,    96,    83,    -4,   -24,    55,    97,    98,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   106,   -24,   -24,
     100,    24,   -24,   105,    27,   103,   -24,   107,   113,   -24,
     -24,   110,   -24,   -24,   120,   121,   106,    93,   131,   129,
     -24,   133,   -24,   -24,   -24
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     1,    11,     2,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,    11,
       0,    11,    11,    11,    34,    36,    17,     0,    56,    48,
      56,     0,     0,    35,    37,     0,     0,     0,     0,     3,
      11,     5,    11,     6,     9,     7,    11,     0,     0,    28,
      25,    29,    30,    54,    53,    20,    23,     0,     0,     0,
      50,     0,     0,     0,    25,    12,    13,    14,    15,    16,
       8,    10,     4,     0,    26,    27,    56,    56,     0,     0,
       0,     0,    55,     0,    50,    48,    47,    56,     0,     0,
      24,    51,    52,    18,    19,    21,    22,    11,    46,    49,
       0,    11,    57,     0,    45,     0,    33,     0,    42,    43,
      44,     0,    32,    31,     0,     0,    11,    11,     0,     0,
      40,     0,    41,    39,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -24,   149,   -19,   -10,   -22,    -9,   -24,   -24,   -24,   -23,
     -24,   -24,   -24,   -24,    70,    72,   -18,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    17,    18,    54,    55,    56,    19,   107,    20,
      21,   121,    22,   111,    61,    86,    58,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      41,    27,    43,    44,    45,    57,     1,    57,    59,     5,
      65,     2,    62,    66,    67,    68,    69,     4,    53,    60,
      53,    70,     6,    71,    74,    73,    28,    72,    47,    75,
       9,    10,    26,     9,    10,    48,    11,    12,    13,    76,
      14,    77,    49,    64,    78,    51,    79,    52,    15,    84,
      80,     7,    81,    57,    57,   105,    93,    94,    91,    92,
      16,     9,    10,    16,    57,    24,    53,    53,    29,   100,
      25,    95,    96,    26,    30,    60,    47,    53,   103,    31,
      32,   110,   106,    48,    35,    36,    37,    38,    39,    40,
      49,    50,    42,    51,   109,    52,    46,   118,   120,     9,
      10,    63,    82,    83,    88,    11,    12,    13,    85,    14,
      87,    89,     9,    10,    90,    97,   101,    15,    11,    12,
      13,   102,    14,   104,   119,   108,   112,   113,   114,    16,
      15,    32,   115,    33,    34,    35,    36,    37,    38,   116,
     117,    32,    16,    33,    34,    35,    36,    37,    38,   -17,
     -17,   122,   123,   124,     8,    99,    98
};

static const yytype_uint8 yycheck[] =
{
      19,    11,    21,    22,    23,    28,    12,    30,    12,     5,
      32,    17,    30,    35,    36,    37,    38,    18,    28,    29,
      30,    40,     0,    42,    35,    47,    21,    46,    21,    40,
       6,     7,    36,     6,     7,    28,    12,    13,    14,    37,
      16,    39,    35,    36,    26,    38,    28,    40,    24,    59,
      27,    19,    29,    76,    77,    31,    78,    79,    76,    77,
      36,     6,     7,    36,    87,    36,    76,    77,    21,    87,
      36,    80,    81,    36,    21,    85,    21,    87,    97,    21,
       4,   104,   101,    28,     8,     9,    10,    11,    20,    23,
      35,    36,    23,    38,   104,    40,    23,   116,   117,     6,
       7,    38,    23,    22,    22,    12,    13,    14,    25,    16,
      23,    22,     6,     7,    22,    19,    19,    24,    12,    13,
      14,    23,    16,    23,    31,    20,    23,    20,    15,    36,
      24,     4,    22,     6,     7,     8,     9,    10,    11,    19,
      19,     4,    36,     6,     7,     8,     9,    10,    11,    22,
      23,    20,    23,    20,     5,    85,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    17,    42,    18,     5,     0,    19,    42,     6,
       7,    12,    13,    14,    16,    24,    36,    43,    44,    48,
      50,    51,    53,    58,    36,    36,    36,    44,    21,    21,
      21,    21,     4,     6,     7,     8,     9,    10,    11,    20,
      23,    43,    23,    43,    43,    43,    23,    21,    28,    35,
      36,    38,    40,    44,    45,    46,    47,    50,    57,    12,
      44,    55,    57,    38,    36,    45,    45,    45,    45,    45,
      43,    43,    43,    45,    35,    40,    37,    39,    26,    28,
      27,    29,    23,    22,    44,    25,    56,    23,    22,    22,
      22,    57,    57,    45,    45,    46,    46,    19,    56,    55,
      57,    19,    23,    43,    23,    31,    43,    49,    20,    44,
      50,    54,    23,    20,    15,    22,    19,    19,    43,    31,
      43,    52,    20,    23,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    43,    43,    43,    43,
      43,    43,    44,    44,    44,    44,    44,    44,    45,    45,
      45,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    48,    49,    49,    50,    50,    50,    50,    51,    52,
      52,    53,    53,    54,    54,    54,    55,    55,    55,    56,
      56,    57,    57,    57,    57,    57,    57,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     4,     2,     2,     2,     3,     2,
       3,     0,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     2,     2,     1,     1,
       1,     7,     2,     1,     2,     2,     2,     2,    11,     2,
       1,    11,     7,     1,     1,     0,     3,     2,     0,     2,
       0,     3,     3,     1,     1,     2,     0,     5
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
  unsigned long int yylno = yyrline[yyrule];
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
                  (unsigned long int) yystacksize));

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
        case 3:
#line 46 "plex.y" /* yacc.c:1646  */
    {printTree((yyvsp[-1].rtrn).nd);}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-1].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-1].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 51 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-1].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 52 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-1].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "plex.y" /* yacc.c:1646  */
    {int ex=Exists((yyvsp[-2].text));
																		struct node* tempNode=(struct node*)malloc(sizeof(struct node));
																		if(ex==-1){
																			if(isInt){addInt((yyvsp[-2].text),(yyvsp[0].rtrn).val);intC=0;isInt=0;
																				sprintf(tempStr,"%d",(yyvsp[0].rtrn).val);
																				tempNode=createLeafNode(tempStr,(yyvsp[-2].text));}
																		  else if(isFloat){addFlt((yyvsp[-2].text),&((yyvsp[0].rtrn).flt));flotC=0;isFloat=0;
																				sprintf(tempStr,"%f",(yyvsp[0].rtrn).flt);
																				tempNode=createLeafNode(tempStr,(yyvsp[-2].text));
																			}
																			else{
																				myError("Varibale Not defined");
																			}
																		}
																		else if(symbTable[ex].scope<=scope){
																			if(isInt || isFloat){//exists but redifine
																					myError("Identifier already defined");

																			}
																			else if(symbTable[ex].type==0){
																				symbTable[ex].intVal=(yyvsp[0].rtrn).val;
																				sprintf(tempStr,"%d",(yyvsp[0].rtrn).val);
																				tempNode=createLeafNode(tempStr,(yyvsp[-2].text));
																			}
																			else if(symbTable[ex].type==1){
																				symbTable[ex].floatVal=(yyvsp[0].rtrn).flt;
																				sprintf(tempStr,"%f",(yyvsp[0].rtrn).flt);
																				tempNode=createLeafNode(tempStr,(yyvsp[-2].text));
																			}
																		}
																		(yyval.rtrn).nd=createNode("=",tempNode,(yyvsp[0].rtrn).nd);
																		}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "plex.y" /* yacc.c:1646  */
    {	int ex=Exists((yyvsp[-2].text));
					 														char tempAns[20];
					 														if(ex!=-1){
																				if(symbTable[ex].type==0){
																					symbTable[ex].intVal+=(yyvsp[0].rtrn).val;
																					sprintf(tempStr,"%d",symbTable[ex].intVal);
																					sprintf(tempAns,"%d",(yyvsp[0].rtrn).val);

																				}
																				else if(symbTable[ex].type==1){
																					symbTable[ex].floatVal+=(yyvsp[0].rtrn).flt;
																					sprintf(tempStr,"%f",symbTable[ex].floatVal);
																					sprintf(tempAns,"%f",(yyvsp[0].rtrn).flt);
																				}

																				struct node* temp1=createLeafNode((yyvsp[-2].text),tempStr);
 																			 	struct node* temp2=createLeafNode((yyvsp[-2].text),tempStr);
 																			 	struct node* temp3=createNode("+",temp2,(yyvsp[0].rtrn).nd);
 																			 	(yyval.rtrn).nd=createNode("=",temp1,temp3);
																			}
																			else{
																				myError("Varibale Not defined");
																			}
				 														}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 112 "plex.y" /* yacc.c:1646  */
    {	int ex=Exists((yyvsp[-2].text));
					 														char* tempAns;
					 														if(ex!=-1){
																				if(symbTable[ex].type==0){
																					symbTable[ex].intVal-=(yyvsp[0].rtrn).val;
																					sprintf(tempStr,"%d",symbTable[ex].intVal);
																					sprintf(tempAns,"%d",(yyvsp[0].rtrn).val);

																				}
																				else if(symbTable[ex].type==1){
																					symbTable[ex].floatVal-=(yyvsp[0].rtrn).flt;
																					sprintf(tempStr,"%f",symbTable[ex].floatVal);
																					sprintf(tempAns,"%f",(yyvsp[0].rtrn).flt);
																				}

																				struct node* temp1=createLeafNode((yyvsp[-2].text),tempStr);
 																			 	struct node* temp2=createLeafNode((yyvsp[-2].text),tempStr);
 																			 	struct node* temp3=createNode("-",temp2,(yyvsp[0].rtrn).nd);
 																			 	(yyval.rtrn).nd=createNode("=",temp1,temp3);
																			}
																			else{
																				myError("Varibale Not defined");
																			}
				 														}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 136 "plex.y" /* yacc.c:1646  */
    {	int ex=Exists((yyvsp[-2].text));
					 														char* tempAns;
					 														if(ex!=-1){
																				if(symbTable[ex].type==0){
																					symbTable[ex].intVal*=(yyvsp[0].rtrn).val;
																					sprintf(tempStr,"%d",symbTable[ex].intVal);
																					sprintf(tempAns,"%d",(yyvsp[0].rtrn).val);

																				}
																				else if(symbTable[ex].type==1){
																					symbTable[ex].floatVal*=(yyvsp[0].rtrn).flt;
																					sprintf(tempStr,"%f",symbTable[ex].floatVal);
																					sprintf(tempAns,"%f",(yyvsp[0].rtrn).flt);

																				}
																				struct node* temp1=createLeafNode((yyvsp[-2].text),tempStr);
 																			 	struct node* temp2=createLeafNode((yyvsp[-2].text),tempStr);
 																			 	struct node* temp3=createNode("*",temp2,(yyvsp[0].rtrn).nd);
 																			 	(yyval.rtrn).nd=createNode("=",temp1,temp3);
																			}
																			else{
																				myError("Varibale Not defined");
																			}
				 														}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "plex.y" /* yacc.c:1646  */
    {	int ex=Exists((yyvsp[-2].text));
					 														char* tempAns;
					 														if(ex!=-1){
																				if(symbTable[ex].type==0){
																					symbTable[ex].intVal/=(yyvsp[0].rtrn).val;
																					sprintf(tempStr,"%d",symbTable[ex].intVal);
																					sprintf(tempAns,"%d",(yyvsp[0].rtrn).val);

																				}
																				else if(symbTable[ex].type==1){
																					symbTable[ex].floatVal/=(yyvsp[0].rtrn).flt;
																					sprintf(tempStr,"%f",symbTable[ex].floatVal);
																					sprintf(tempAns,"%f",(yyvsp[0].rtrn).flt);

																				}
																				struct node* temp1=createLeafNode((yyvsp[-2].text),tempStr);
 																			 	struct node* temp2=createLeafNode((yyvsp[-2].text),tempStr);
 																			 	struct node* temp3=createNode("/",temp2,(yyvsp[0].rtrn).nd);
 																			 	(yyval.rtrn).nd=createNode("=",temp1,temp3);
																			}
																			else{
																				myError("Varibale Not defined");
																			}
				 														}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 185 "plex.y" /* yacc.c:1646  */
    {int ex=Exists((yyvsp[0].text));
					 													struct node* temp1;
				 													 if(ex==-1){
 																			if(isInt){addInt((yyvsp[0].text),0);intC=0;isInt=0;temp1=createLeafNode("int","0");}
																		else if(isFloat){fltTemp=0;addFlt((yyvsp[0].text),&fltTemp);flotC=0;isFloat=0;temp1=createLeafNode("float","0.0");}
				 														}
 																		else if(symbTable[ex].scope<=scope){
 																			if(isInt || isFloat){//exists but redifine
																				intC=0;isInt=0;flotC=0;isFloat=0;
 																					myError("Identifier already defined");
 																			}}
																		(yyval.rtrn).nd=createNode("=",(yyvsp[0].text),temp1);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 197 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode("+",(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);if(intC==1){(yyval.rtrn).val=(yyvsp[-2].rtrn).val+(yyvsp[0].rtrn).val;}else if(flotC==1){(yyval.rtrn).flt=(yyvsp[-2].rtrn).flt+(yyvsp[0].rtrn).flt;}}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 198 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode("-",(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);if(intC==1){(yyval.rtrn).val=(yyvsp[-2].rtrn).val-(yyvsp[0].rtrn).val;}else if(flotC==1){(yyval.rtrn).flt=(yyvsp[-2].rtrn).flt-(yyvsp[0].rtrn).flt;}}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 199 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=(yyvsp[0].rtrn).nd;(yyval.rtrn).val=(yyvsp[0].rtrn).val;(yyval.rtrn).flt=(yyvsp[0].rtrn).flt;}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 200 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode("*",(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);if(intC==1){(yyval.rtrn).val=(yyvsp[-2].rtrn).val*(yyvsp[0].rtrn).val;}else if(flotC==1){(yyval.rtrn).flt=(yyvsp[-2].rtrn).flt*(yyvsp[0].rtrn).flt;}}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 201 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode("/",(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);if(intC==1){(yyval.rtrn).val=(yyvsp[-2].rtrn).val/(yyvsp[0].rtrn).val;}else if(flotC==1){(yyval.rtrn).flt=(yyvsp[-2].rtrn).flt/(yyvsp[0].rtrn).flt;}}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 202 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=(yyvsp[0].rtrn).nd;(yyval.rtrn).val=(yyvsp[0].rtrn).val;(yyval.rtrn).flt=(yyvsp[0].rtrn).flt;}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 203 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=(yyvsp[-1].rtrn).nd;(yyval.rtrn).val=(yyvsp[-1].rtrn).val;(yyval.rtrn).flt=(yyvsp[-1].rtrn).flt;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 204 "plex.y" /* yacc.c:1646  */
    {int ex=get((yyvsp[0].text));
	 																	if(ex!=-1){
																			if(symbTable[ex].type==0){
																				(yyval.rtrn).val=symbTable[ex].intVal;
																				sprintf(tempStr,"%d",symbTable[ex].intVal);
																				(yyval.rtrn).nd=createLeafNode((yyvsp[0].text),tempStr);
																				}
																			else if(symbTable[ex].type==1){
																				(yyval.rtrn).flt=symbTable[ex].floatVal;
																				sprintf(tempStr,"%f",symbTable[ex].floatVal);
																				(yyval.rtrn).nd=createLeafNode((yyvsp[0].text),tempStr);
																			}
																		}
																		else{
																			myError("Variable not defiend");
																		}

																	}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 222 "plex.y" /* yacc.c:1646  */
    {char tempStr1[20]="-";strcat(tempStr1,(yyvsp[0].text));intC=1;(yyval.rtrn).nd=createLeafNode(tempStr1,"int");(yyval.rtrn).val=atoi(tempStr1);}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 223 "plex.y" /* yacc.c:1646  */
    {sprintf(tempStr,"%f",(yyvsp[0].floot));char tempStr1[20]="-";strcat(tempStr1,tempStr);flotC=1;(yyval.rtrn).nd=createLeafNode(tempStr1,"float");(yyval.rtrn).flt=-(yyvsp[0].floot);}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 224 "plex.y" /* yacc.c:1646  */
    {intC=1;(yyval.rtrn).nd=createLeafNode((yyvsp[0].text),"int");(yyval.rtrn).val=atoi((yyvsp[0].text));}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 226 "plex.y" /* yacc.c:1646  */
    {sprintf(tempStr,"%f",(yyvsp[0].floot));flotC=1;(yyval.rtrn).nd=createLeafNode(tempStr,"float");(yyval.rtrn).flt=(yyvsp[0].floot);}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 228 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode("while",(yyvsp[-4].rtrn).nd,(yyvsp[-1].rtrn).nd);}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 230 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=(yyvsp[0].rtrn).nd;}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 231 "plex.y" /* yacc.c:1646  */
    {int ex=Exists((yyvsp[0].text));
	                           if(ex!=-1){if(symbTable[ex].type==0){
															         symbTable[ex].intVal+=1;
																		 		sprintf(tempStr,"%d",symbTable[ex].intVal);}
																			 else if(symbTable[ex].type==1){
																			 symbTable[ex].floatVal+=1;
																			 sprintf(tempStr,"%f",symbTable[ex].floatVal);}
																			 struct node* temp1=createLeafNode((yyvsp[0].text),tempStr);
																			 struct node* temp2=createLeafNode((yyvsp[0].text),tempStr);
																			 struct node* temp3=createLeafNode("int","1");
																			 struct node* temp4=createNode("+",temp2,temp3);
																			 (yyval.rtrn).nd=createNode("=",temp1,temp4);
																		 }
														else{myError("Varibale Not defined");}}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 245 "plex.y" /* yacc.c:1646  */
    {int ex=Exists((yyvsp[-1].text));
		                           if(ex!=-1){
																 				 if(symbTable[ex].type==0){
																         symbTable[ex].intVal+=1;
																			 		sprintf(tempStr,"%d",symbTable[ex].intVal);
																				 }
																				 else if(symbTable[ex].type==1){
																				 symbTable[ex].floatVal+=1;
																				 sprintf(tempStr,"%f",symbTable[ex].floatVal);}
																				 struct node* temp1=createLeafNode((yyvsp[-1].text),tempStr);
																				 struct node* temp2=createLeafNode((yyvsp[-1].text),tempStr);
																				 struct node* temp3=createLeafNode("int","1");
																				 struct node* temp4=createNode("+",temp2,temp3);
																				 (yyval.rtrn).nd=createNode("=",temp1,temp4);
																			 }
														else{myError("Varibale Not defined");}}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 261 "plex.y" /* yacc.c:1646  */
    {int ex=Exists((yyvsp[0].text));
		                           if(ex!=-1){if(symbTable[ex].type==0){
																         symbTable[ex].intVal+=1;
																			 		sprintf(tempStr,"%d",symbTable[ex].intVal);}
																				 else if(symbTable[ex].type==1){
																				 symbTable[ex].floatVal+=1;
																				 sprintf(tempStr,"%f",symbTable[ex].floatVal);}
																				 struct node* temp1=createLeafNode((yyvsp[0].text),tempStr);
																				 struct node* temp2=createLeafNode((yyvsp[0].text),tempStr);
																				 struct node* temp3=createLeafNode("int","1");
																				 struct node* temp4=createNode("-",temp2,temp3);
																				 (yyval.rtrn).nd=createNode("=",temp1,temp4);
																			 }
														else{myError("Varibale Not defined");}}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 275 "plex.y" /* yacc.c:1646  */
    {int ex=Exists((yyvsp[-1].text));
		                           if(ex!=-1){if(symbTable[ex].type==0){
																         symbTable[ex].intVal+=1;
																			 		sprintf(tempStr,"%d",symbTable[ex].intVal);}
																				 else if(symbTable[ex].type==1){
																				 symbTable[ex].floatVal+=1;
																				 sprintf(tempStr,"%f",symbTable[ex].floatVal);}
																				 struct node* temp1=createLeafNode((yyvsp[-1].text),tempStr);
																				 struct node* temp2=createLeafNode((yyvsp[-1].text),tempStr);
																				 struct node* temp3=createLeafNode("int","1");
																				 struct node* temp4=createNode("-",temp2,temp3);
																				 (yyval.rtrn).nd=createNode("=",temp1,temp4);
																			 }
														else{myError("Varibale Not defined");}}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 289 "plex.y" /* yacc.c:1646  */
    {
																														struct node* temp1,*temp2,*temp3;
																														temp3=createNode("for",(yyvsp[-6].rtrn).nd,(yyvsp[-1].rtrn).nd);
																														temp1=createNode(";",(yyvsp[-8].rtrn).nd,temp3);
																														temp2=createNode(";",temp1,(yyvsp[-4].rtrn).nd);
																														(yyval.rtrn).nd=temp2;
																													}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 297 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=(yyvsp[0].rtrn).nd;}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 298 "plex.y" /* yacc.c:1646  */
    {struct node *temp1,*temp2;temp1=createNode("if",(yyvsp[-8].rtrn).nd,(yyvsp[-5].rtrn).nd);temp2=createNode("else",NULL,(yyvsp[-1].rtrn).nd);(yyval.rtrn).nd=createNode(";",temp1,temp2);}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 299 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode("if",(yyvsp[-4].rtrn).nd,(yyvsp[-1].rtrn).nd);}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 303 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-1].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 304 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode(";",(yyvsp[-1].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 307 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode((yyvsp[-1].text),(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 308 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createNode((yyvsp[-1].text),(yyvsp[-2].rtrn).nd,(yyvsp[0].rtrn).nd);}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 309 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=(yyvsp[0].rtrn).nd;}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 313 "plex.y" /* yacc.c:1646  */
    {(yyval.rtrn).nd=createLeafNode("print",(yyvsp[-2].text));}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1863 "y.tab.c" /* yacc.c:1646  */
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
#line 315 "plex.y" /* yacc.c:1906  */

int yyerror(char *msg)
 {
	printf("\033[1;31m");
  printf("Error at line no.-%d: %s\n",lineNo,msg);
		printf("\033[0m");

  valid=0;
  //exit(0);
 }
int Exists(char* ide){
		for(int i=0;i<index;i++){
			if(strcmp(symbTable[i].variable,ide)==0){
				return i;
			}
		}
		return -1;
}



void addInt(char *va,int val){
		strcpy(symbTable[index].variable,va);
		symbTable[index].type=0;
		symbTable[index].intVal=val;
		symbTable[index].scope=scope;
		symbTable[index++].lineNo=lineNo;
}
void addFlt(char *va,float* v){
	  strcpy(symbTable[index].variable,va);
		symbTable[index].type=1;
		symbTable[index].floatVal=*v;
		symbTable[index].scope=scope;
		symbTable[index++].lineNo=lineNo;
}
void myError(char* str){
	printf("\033[1;31m");
	printf("Error at line no-%d: %s\n",lineNo,str);
	printf("\033[0m");
	valid=0;
}
int get(char *var){
	for(int i=0;i<index;i++){
		if(strcmp(symbTable[i].variable,var)==0)
			return i;
	}
	return -1;
}
struct node* createLeafNode(char* val,char* var){
	struct node* n=(struct node*)malloc(sizeof(struct node));
	n->var=var;
	n->val=val;
	n->left=NULL;
	n->right=NULL;
	return n;
}
struct node* createNode(char* val,struct node* left,struct node* right){
	struct node* n=(struct node*)malloc(sizeof(struct node));
	n->var='\0';
	n->val=val;
	n->left=left;
	n->right=right;
	return n;
}

void printTree(struct node* n){
	if(n!=NULL){
		printTree(n->left);
		printf("(%s,%s)",n->var,n->val);
		printTree(n->right);
	}
}
//driver code
main()
 {
     yyin=fopen("inp.cpp", "r");
    yyout=fopen("out.txt","w");
  yyparse();
	printf("\n");
	if(valid)
		{for(int i=0;i<index;i++){
			printf("%s %d %d %f %d %d\n",symbTable[i].variable,symbTable[i].type,symbTable[i].intVal,symbTable[i].floatVal,symbTable[i].scope,symbTable[i].lineNo);
		}

    printf ("Valid\n");}
 }
