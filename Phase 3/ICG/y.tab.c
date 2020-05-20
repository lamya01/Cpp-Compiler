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
#line 1 "parser.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	extern int line_num;

	int search_symbol(char []);
	void make_symtab_entry(char []);
	void assign_data_type_to_syms(char []);
	void display_sym_tab();
	void addQuadruple(char [],char [],char [],char []);
	void display_Quadruple();
	void push(int);
	int pop();

	struct Quadruple
	{
		char operator[5];
		char operand1[10];
		char operand2[10];
		char result[10];
	}QUAD[25];

	struct Symbol_Table
	{
		char sym_name[10];
		char sym_type[10];
	}Sym[100];

	struct Stack
	{
		int items[25];
		int top;
	}Stk;

	int Index=0,tIndex=0,errno=0,sym_cnt=0;
	int ind1,ind2;
	char prev[10]="-1",curr[10]="-1";

#line 107 "y.tab.c" /* yacc.c:339  */

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
    VARIABLE = 258,
    NUMBER = 259,
    RELOP = 260,
    MAIN = 261,
    INT = 262,
    FLOAT = 263,
    CHAR = 264,
    DOUBLE = 265,
    LONG = 266,
    UNARYPLUS = 267,
    UNARYMINUS = 268,
    IF = 269,
    ELSE = 270,
    WHILE = 271,
    FOR = 272
  };
#endif
/* Tokens.  */
#define VARIABLE 258
#define NUMBER 259
#define RELOP 260
#define MAIN 261
#define INT 262
#define FLOAT 263
#define CHAR 264
#define DOUBLE 265
#define LONG 266
#define UNARYPLUS 267
#define UNARYMINUS 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define FOR 272

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "parser.y" /* yacc.c:355  */
 char arg[10]; 

#line 184 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   84

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  90

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

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
      27,    28,    20,    18,    25,    19,     2,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    24,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,     2,    23,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    63,    64,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    68,    69,    70,    71,    72,    74,
      81,    88,    98,   109,   126,   136,   137,   138,   139,   140,
     153,   159,   162,   162,   170,   170,   178,   178,   187,   201,
     213,   215,   227,   227,   236,   244,   253,   256,   255
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VARIABLE", "NUMBER", "RELOP", "MAIN",
  "INT", "FLOAT", "CHAR", "DOUBLE", "LONG", "UNARYPLUS", "UNARYMINUS",
  "IF", "ELSE", "WHILE", "FOR", "'+'", "'-'", "'*'", "'/'", "'{'", "'}'",
  "';'", "','", "'='", "'('", "')'", "$accept", "START", "PROGRAM",
  "BLOCK", "CODE", "STATEMENT", "DECLARATIVE", "VARLIST", "ASSIGNMENT",
  "E", "CONDITIONAL", "$@1", "IFSTMT", "$@2", "ELSESTMT", "$@3",
  "CONDITION", "FORLOOP", "FORSTMT", "EXPRESSIONS", "$@4", "UNARY",
  "WHILELOOP", "WHILESTMT", "$@5", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    43,    45,
      42,    47,   123,   125,    59,    44,    61,    40,    41
};
# endif

#define YYPACT_NINF -35

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-35)))

#define YYTABLE_NINF -33

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -4,   -12,    19,   -35,     4,   -35,   -35,     7,    22,    22,
      22,    22,    22,    27,    28,    29,   -35,    34,     4,    26,
      35,   -35,    43,   -35,   -35,   -35,   -35,     5,    -9,   -35,
     -35,   -35,   -35,   -35,    57,    57,    38,   -35,   -35,   -35,
     -35,    46,   -35,   -35,     5,     9,    22,    58,    59,    41,
     -35,    39,    42,   -35,   -35,    23,     5,     5,     5,     5,
     -35,    47,    20,   -35,    45,    57,   -12,   -12,   -35,    18,
      18,   -35,   -35,    22,   -35,   -35,   -12,   -12,   -35,   -35,
     -35,   -35,   -35,   -35,    44,    68,    40,   -35,   -35,   -35
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     3,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     7,     0,
      13,     9,    31,    11,    40,    10,    46,     0,    20,    14,
      15,    16,    17,    18,     0,     0,     0,     4,     6,     8,
      12,     0,    29,    30,     0,    23,     0,     0,     0,     0,
      47,     0,     0,    36,    33,     0,     0,     0,     0,     0,
      19,    21,     0,    34,     0,     0,     0,     0,    28,    24,
      25,    26,    27,     0,    38,    39,     0,     0,    42,    41,
      37,    22,    35,    48,     0,     0,     0,    43,    44,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,   -35,    -1,    56,   -35,    48,    -6,   -35,   -22,
     -35,   -35,   -35,   -35,   -35,   -35,   -34,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    16,    17,    18,    19,    29,    20,    45,
      21,    41,    22,    76,    54,    67,    49,    23,    24,    52,
      84,    87,    25,    26,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       5,    50,     1,    30,    31,    32,    33,     7,    42,    43,
       4,     8,     9,    10,    11,    12,    46,    47,    13,     6,
      14,    15,    55,    74,    75,    28,     4,    56,    57,    58,
      59,    78,    44,    27,    69,    70,    71,    72,    58,    59,
      60,    56,    57,    58,    59,     8,     9,    10,    11,    12,
      39,    68,    88,    89,    34,    35,    36,    37,   -32,    40,
      48,    53,    61,    65,    62,    79,    80,    81,    85,    63,
      66,    86,    73,    77,    38,    82,    83,     0,     0,     0,
       0,     0,     0,     0,    51
};

static const yytype_int8 yycheck[] =
{
       1,    35,     6,     9,    10,    11,    12,     3,     3,     4,
      22,     7,     8,     9,    10,    11,    25,    26,    14,     0,
      16,    17,    44,     3,     4,     3,    22,    18,    19,    20,
      21,    65,    27,    26,    56,    57,    58,    59,    20,    21,
      46,    18,    19,    20,    21,     7,     8,     9,    10,    11,
      24,    28,    12,    13,    27,    27,    27,    23,    15,    24,
       3,    15,     4,    24,     5,    66,    67,    73,    24,    28,
      28,     3,    25,    28,    18,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    30,    31,    22,    32,     0,     3,     7,     8,
       9,    10,    11,    14,    16,    17,    32,    33,    34,    35,
      37,    39,    41,    46,    47,    51,    52,    26,     3,    36,
      36,    36,    36,    36,    27,    27,    27,    23,    33,    24,
      24,    40,     3,     4,    27,    38,    25,    26,     3,    45,
      45,    35,    48,    15,    43,    38,    18,    19,    20,    21,
      36,     4,     5,    28,    53,    24,    28,    44,    28,    38,
      38,    38,    38,    25,     3,     4,    42,    28,    45,    32,
      32,    36,    32,    32,    49,    24,     3,    50,    12,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    29,    30,    31,    32,    33,    33,    33,    34,    34,
      34,    34,    34,    34,    35,    35,    35,    35,    35,    36,
      36,    36,    36,    37,    38,    38,    38,    38,    38,    38,
      38,    39,    40,    39,    42,    41,    44,    43,    45,    45,
      46,    47,    49,    48,    50,    50,    51,    53,    52
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     2,     1,     2,     1,
       1,     1,     2,     1,     2,     2,     2,     2,     2,     3,
       1,     3,     5,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     0,     3,     0,     6,     0,     3,     3,     3,
       1,     5,     0,     6,     2,     2,     1,     0,     6
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
        case 2:
#line 53 "parser.y" /* yacc.c:1646  */
    { if(errno==0){
                          printf("\n\n The Program is Syntactically Correct!!!\n\n");
                          display_sym_tab();
                          display_Quadruple();
                     }
                     else {
                          printf("\n\n The No of Errors are : %d \n\n",errno);
			  display_sym_tab();
                     }
               }
#line 1341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "parser.y" /* yacc.c:1646  */
    { printf("\n Missing Selmicolon at line%d",line_num); errno++;}
#line 1347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "parser.y" /* yacc.c:1646  */
    { assign_data_type_to_syms("int"); }
#line 1353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "parser.y" /* yacc.c:1646  */
    { assign_data_type_to_syms("float"); }
#line 1359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 70 "parser.y" /* yacc.c:1646  */
    { assign_data_type_to_syms("char"); }
#line 1365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "parser.y" /* yacc.c:1646  */
    { assign_data_type_to_syms("double"); }
#line 1371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "parser.y" /* yacc.c:1646  */
    { assign_data_type_to_syms("long"); }
#line 1377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "parser.y" /* yacc.c:1646  */
    { int i;
			       i=search_symbol((yyvsp[-2].arg));
                               if(i!=-1) {
 			       errno++;							
                               printf("\n Multiple Declaration of Variable at Line %d \n",line_num+1);		} 
			        else { make_symtab_entry((yyvsp[-2].arg)); }
                             }
#line 1389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 81 "parser.y" /* yacc.c:1646  */
    { int i;
			       i=search_symbol((yyvsp[0].arg));
                               if(i!=-1) {
 			       errno++;							
                               printf("\n Multiple Declaration of Variable at Line %d \n",line_num+1);		} 
			        else { make_symtab_entry((yyvsp[0].arg)); }
                             }
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "parser.y" /* yacc.c:1646  */
    {
            int i;
			       i=search_symbol((yyvsp[-2].arg));
                               if(i!=-1) {
 			       errno++;							
                               printf("\n Multiple Declaration of Variable at Line %d \n",line_num+1);		} 
			        else { make_symtab_entry((yyvsp[-2].arg));
               }
               
          }
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 98 "parser.y" /* yacc.c:1646  */
    {
            int i;
			       i=search_symbol((yyvsp[-4].arg));
                               if(i!=-1) {
 			       errno++;							
                               printf("\n Multiple Declaration of Variable at Line %d \n",line_num+1);		} 
			        else { make_symtab_entry((yyvsp[-4].arg));
               }
          }
#line 1430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 109 "parser.y" /* yacc.c:1646  */
    { int i;
                               if(strcmp(prev,curr)!=0) {
                                           i=search_symbol((yyvsp[-2].arg));
                                           if(i==-1) {
                                            printf("\n Undefined Variable at Line %d \n",line_num+1);
                                            errno++; 
                                           }  
                                           else if(strcmp(prev,Sym[i].sym_type)!=0) {
                                            printf("\n Type Mismatch at Line %d \n",line_num+1);                                        errno++; 
                                           }
                                  }                                  
                                  strcpy(QUAD[Index].operator,"=");
                                  strcpy(QUAD[Index].operand1,(yyvsp[0].arg));
                                  strcpy(QUAD[Index].operand2,"");
                                  strcpy(QUAD[Index].result,(yyvsp[-2].arg));
                                  strcpy((yyval.arg),QUAD[Index++].result);
                             }
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 126 "parser.y" /* yacc.c:1646  */
    {   if(strcmp(prev,curr)==0) {
                           addQuadruple("+",(yyvsp[-2].arg),(yyvsp[0].arg),(yyval.arg));
                           strcpy(prev,"-1");
                           strcpy(curr,"-1");
                }
                else {
                  printf("\n Type Mismatch at Line %d \n",line_num+1);
                  errno++;    
                }
             }
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 136 "parser.y" /* yacc.c:1646  */
    {addQuadruple("-",(yyvsp[-2].arg),(yyvsp[0].arg),(yyval.arg));}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "parser.y" /* yacc.c:1646  */
    {addQuadruple("*",(yyvsp[-2].arg),(yyvsp[0].arg),(yyval.arg));}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 138 "parser.y" /* yacc.c:1646  */
    {addQuadruple("/",(yyvsp[-2].arg),(yyvsp[0].arg),(yyval.arg));}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 139 "parser.y" /* yacc.c:1646  */
    {strcpy((yyval.arg),(yyvsp[-1].arg));}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 140 "parser.y" /* yacc.c:1646  */
    {   int i;
                 i=search_symbol((yyvsp[0].arg));
                 if(i==-1) {
                        printf("\n Undefined Variable at Line %d \n",line_num+1);
                        errno++; 
                      }  
                 else { 
		 	 if(strcmp(prev,"-1")==0)
                           strcpy(prev,Sym[i].sym_type);
                         else if(strcmp(curr,"-1")==0)
                           strcpy(curr,Sym[i].sym_type);
                      }
             }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 153 "parser.y" /* yacc.c:1646  */
    {  if(strcmp(prev,"-1")==0)
                         strcpy(prev,"int");
                else if(strcmp(curr,"-1")==0)
                         strcpy(curr,"int");
             }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 159 "parser.y" /* yacc.c:1646  */
    {   ind1 = pop();
                         sprintf(QUAD[ind1].result,"%d",Index);
                     }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "parser.y" /* yacc.c:1646  */
    {   strcpy(QUAD[Index].operator,"GOTO");
                         strcpy(QUAD[Index].operand1,"");
                         strcpy(QUAD[Index].operand2,"");
			 strcpy(QUAD[Index].result,"-1");
                         push(Index);
                         Index++;
                      }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 170 "parser.y" /* yacc.c:1646  */
    {    strcpy(QUAD[Index].operator,"==");
                                     strcpy(QUAD[Index].operand1,(yyvsp[-1].arg));
                                     strcpy(QUAD[Index].operand2,"FALSE");
                                     strcpy(QUAD[Index].result,"-1");
                                     push(Index);
                                     Index++;
		                }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 178 "parser.y" /* yacc.c:1646  */
    {   ind1=pop();
	                 ind2=pop();
                         push(ind1);
                         sprintf(QUAD[ind2].result,"%d",Index); 
                     }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 182 "parser.y" /* yacc.c:1646  */
    { 
				ind1=pop();
		                sprintf(QUAD[ind1].result,"%d",Index);
		              }
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 188 "parser.y" /* yacc.c:1646  */
    {    int i;
		  i=search_symbol((yyvsp[-2].arg));
                  if(i==-1)
		  { printf("\n Undefined Variable at Line No: %d \n",line_num);
                    errno++;
                  }
                  i=search_symbol((yyvsp[0].arg));
                  if(i==-1)
                  { printf("\n Undefined Variable at Line No: %d \n",line_num);
                    errno++;
                  }
                  addQuadruple((yyvsp[-1].arg),(yyvsp[-2].arg),(yyvsp[0].arg),(yyval.arg));
             }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 202 "parser.y" /* yacc.c:1646  */
    {
                int i;
                i=search_symbol((yyvsp[-2].arg));
                if(i==-1)
                {
                    printf("\n Undefined Variable at Line No: %d \n",line_num);
                    errno++;
                }
                addQuadruple((yyvsp[-1].arg),(yyvsp[-2].arg),(yyvsp[0].arg),(yyval.arg));   
             }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 215 "parser.y" /* yacc.c:1646  */
    {
              strcpy(QUAD[Index].operator,"GOTO");
	           strcpy(QUAD[Index].operand1,"");
                   strcpy(QUAD[Index].operand2,"");
                   strcpy(QUAD[Index].result,"-1");
                   Index++;
		   ind1 = pop();
                   sprintf(QUAD[ind1].result,"%d",Index);
                   ind2 = pop();
                   sprintf(QUAD[Index-1].result,"%d",ind2);
                }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 227 "parser.y" /* yacc.c:1646  */
    { push(Index-1);
                 strcpy(QUAD[Index].operator,"==");
                 strcpy(QUAD[Index].operand1,(yyvsp[0].arg));
                 strcpy(QUAD[Index].operand2,"FALSE");
                 strcpy(QUAD[Index].result,"-1");
                 push(Index);
                 Index++;
                 }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 234 "parser.y" /* yacc.c:1646  */
    {;}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 236 "parser.y" /* yacc.c:1646  */
    {if(strcmp(prev,curr)!=0) {int i;
                                           i=search_symbol((yyvsp[-1].arg));
                                           if(i==-1) {
                                            printf("\n Undefined Variable at Line %d \n",line_num+1);
                                            errno++; 
                                           }  
                                            
                                  }   ;}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 244 "parser.y" /* yacc.c:1646  */
    {if(strcmp(prev,curr)!=0) {int i;
                                           i=search_symbol((yyvsp[-1].arg));
                                           if(i==-1) {
                                            printf("\n Undefined Variable at Line %d \n",line_num+1);
                                            errno++; 
                                           }  
                                           
                                  }   ;}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 256 "parser.y" /* yacc.c:1646  */
    {  push(Index-1);
                 strcpy(QUAD[Index].operator,"==");
                 strcpy(QUAD[Index].operand1,(yyvsp[0].arg));
                 strcpy(QUAD[Index].operand2,"FALSE");
                 strcpy(QUAD[Index].result,"-1");
                 push(Index);
                 Index++;
              }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 265 "parser.y" /* yacc.c:1646  */
    {
	           strcpy(QUAD[Index].operator,"GOTO");
	           strcpy(QUAD[Index].operand1,"");
                   strcpy(QUAD[Index].operand2,"");
                   strcpy(QUAD[Index].result,"-1");
                   Index++;
		   ind1 = pop();
                   sprintf(QUAD[ind1].result,"%d",Index);
                   ind2 = pop();
                   sprintf(QUAD[Index-1].result,"%d",ind2);
                }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1697 "y.tab.c" /* yacc.c:1646  */
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
#line 276 "parser.y" /* yacc.c:1906  */


extern FILE *yyin;
int main(int argc,char *argv[])
{
	FILE *fp;
	Stk.top = -1;
	if(argc < 2) 
	{
		printf("\n\n Invalid No of Arguments!!");
		exit(0);
	}
	yyin = fopen(argv[1],"r");
	yyparse();
	printf("\n\n");
	return(0);
}

int search_symbol(char sym[10])
{
	int i,flag=0;
	for(i=0;i<sym_cnt;i++)
	{
		if(strcmp(Sym[i].sym_name,sym)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return(-1);
	else
		return(i);
}

void make_symtab_entry(char sym[10])
{
	strcpy(Sym[sym_cnt].sym_type,"-1");
	strcpy(Sym[sym_cnt].sym_name,sym);
	sym_cnt++;
}

void assign_data_type_to_syms(char type[10])
{
	int i=sym_cnt-1;
	while(strcmp(Sym[i].sym_type,"-1")==0)
		strcpy(Sym[i--].sym_type,type);
}

void display_sym_tab()
{
	int i;
	printf("\n\n The Symbol Table  \n\n");
	printf(" Name   Type");
	for(i=sym_cnt-1;i>=0;i--)
		printf("\n %s       %s  ",Sym[i].sym_name,Sym[i].sym_type);
}

void addQuadruple(char op[5],char arg1[10],char arg2[10],char res[10])
{
	strcpy(QUAD[Index].operator,op);
	strcpy(QUAD[Index].operand1,arg1);
	strcpy(QUAD[Index].operand2,arg2);
	sprintf(QUAD[Index].result,"r%d",tIndex++);
	strcpy(res,QUAD[Index++].result);
}

void display_Quadruple()
{
	int i;
	printf("\n\n The INTERMEDIATE CODE Is : \n\n");
	printf("\n\n The Quadruple Table \n\n");
	printf("\n     Operator  Operand1  Operand2  Result");
	for(i=0;i<Index;i++)
	{
		printf("\n %d     %s          %s          %s          %s",i,QUAD[i].operator,QUAD[i].operand1,QUAD[i].operand2,QUAD[i].result); 
	}
}

void push(int i)
{
	Stk.top++;
	if(Stk.top==100)
	{
		printf("\nStack OverFlow!! \n");
		exit(0);
	}
	Stk.items[Stk.top] = i;
}

int pop()
{
	int i;
	if(Stk.top==-1)
	{
		printf("\nStack Empty!! \n");
		exit(0);
	}
	i=Stk.items[Stk.top];
	Stk.top--;
	return(i);
}
