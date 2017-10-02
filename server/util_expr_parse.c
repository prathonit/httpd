/* A Bison parser, made by GNU Bison 2.7.1.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ap_expr_yyparse
#define yylex           ap_expr_yylex
#define yyerror         ap_expr_yyerror
#define yylval          ap_expr_yylval
#define yychar          ap_expr_yychar
#define yydebug         ap_expr_yydebug
#define yynerrs         ap_expr_yynerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 31 "util_expr_parse.y"

#include "util_expr_private.h"

/* Line 371 of yacc.c  */
#line 79 "util_expr_parse.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "util_expr_parse.h".  */
#ifndef YY_AP_EXPR_YY_UTIL_EXPR_PARSE_H_INCLUDED
# define YY_AP_EXPR_YY_UTIL_EXPR_PARSE_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ap_expr_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_TRUE = 258,
     T_FALSE = 259,
     T_EXPR_BOOL = 260,
     T_EXPR_STRING = 261,
     T_ERROR = 262,
     T_DIGIT = 263,
     T_ID = 264,
     T_STRING = 265,
     T_REGEX = 266,
     T_REGSUB = 267,
     T_REG_MATCH = 268,
     T_REG_SUBST = 269,
     T_REG_FLAGS = 270,
     T_REG_REF = 271,
     T_OP_UNARY = 272,
     T_OP_BINARY = 273,
     T_STR_BEGIN = 274,
     T_STR_END = 275,
     T_VAR_BEGIN = 276,
     T_VAR_END = 277,
     T_VAREXP_BEGIN = 278,
     T_VAREXP_END = 279,
     T_OP_EQ = 280,
     T_OP_NE = 281,
     T_OP_LT = 282,
     T_OP_LE = 283,
     T_OP_GT = 284,
     T_OP_GE = 285,
     T_OP_REG = 286,
     T_OP_NRE = 287,
     T_OP_IN = 288,
     T_OP_STR_EQ = 289,
     T_OP_STR_NE = 290,
     T_OP_STR_LT = 291,
     T_OP_STR_LE = 292,
     T_OP_STR_GT = 293,
     T_OP_STR_GE = 294,
     T_OP_CONCAT = 295,
     T_OP_SPLIT = 296,
     T_OP_JOIN = 297,
     T_OP_OR = 298,
     T_OP_AND = 299,
     T_OP_NOT = 300
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 35 "util_expr_parse.y"

    char      *cpVal;
    ap_expr_t *exVal;
    int        num;


/* Line 387 of yacc.c  */
#line 174 "util_expr_parse.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int ap_expr_yyparse (void *YYPARSE_PARAM);
#else
int ap_expr_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int ap_expr_yyparse (ap_expr_parse_ctx_t *ctx);
#else
int ap_expr_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_AP_EXPR_YY_UTIL_EXPR_PARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */
/* Line 390 of yacc.c  */
#line 116 "util_expr_parse.y"

#include "util_expr_private.h"
#define yyscanner ctx->scanner

int ap_expr_yylex(YYSTYPE *lvalp, void *scanner);

/* Line 390 of yacc.c  */
#line 208 "util_expr_parse.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      60,    61,     2,     2,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    15,    18,    22,
      26,    28,    31,    35,    39,    41,    45,    49,    53,    57,
      61,    65,    69,    73,    77,    81,    85,    89,    93,    97,
     101,   103,   107,   111,   115,   119,   121,   125,   127,   130,
     132,   134,   136,   138,   142,   148,   152,   156,   158,   161,
     165,   169,   173,   175,   177,   179,   182,   187,   194,   198,
     202,   207,   212,   214,   216,   218,   220,   225,   230
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,     5,    68,    -1,     6,    72,    -1,     7,
      -1,     3,    -1,     4,    -1,    45,    68,    -1,    68,    43,
      68,    -1,    68,    44,    68,    -1,    69,    -1,    17,    75,
      -1,    75,    18,    75,    -1,    60,    68,    61,    -1,     7,
      -1,    75,    25,    75,    -1,    75,    26,    75,    -1,    75,
      27,    75,    -1,    75,    28,    75,    -1,    75,    29,    75,
      -1,    75,    30,    75,    -1,    75,    34,    75,    -1,    75,
      35,    75,    -1,    75,    36,    75,    -1,    75,    37,    75,
      -1,    75,    38,    75,    -1,    75,    39,    75,    -1,    75,
      33,    70,    -1,    75,    31,    76,    -1,    75,    32,    76,
      -1,    81,    -1,    75,    31,    78,    -1,    70,    31,    79,
      -1,    62,    71,    63,    -1,    60,    70,    61,    -1,    75,
      -1,    75,    64,    71,    -1,    73,    -1,    72,    73,    -1,
       7,    -1,    10,    -1,    74,    -1,    80,    -1,    21,     9,
      22,    -1,    21,     9,    65,    72,    22,    -1,    23,    75,
      24,    -1,    23,    68,    24,    -1,     8,    -1,    19,    20,
      -1,    19,    72,    20,    -1,    75,    40,    75,    -1,    75,
      31,    77,    -1,    74,    -1,    80,    -1,    82,    -1,    42,
      70,    -1,    42,    70,    64,    75,    -1,    42,    60,    70,
      64,    75,    61,    -1,    60,    75,    61,    -1,    11,    13,
      15,    -1,    12,    13,    72,    15,    -1,    41,    13,    72,
      15,    -1,    76,    -1,    77,    -1,    78,    -1,    16,    -1,
       9,    60,    75,    61,    -1,     9,    60,    75,    61,    -1,
       9,    60,    71,    61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   126,   126,   127,   128,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     160,   161,   162,   163,   164,   167,   168,   171,   172,   173,
     176,   177,   178,   181,   182,   183,   184,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   198,   201,   204,   207,
     216,   225,   242,   243,   244,   247,   254,   258,   259
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"true\"", "\"false\"",
  "\"boolean expression\"", "\"string expression\"", "\"error token\"",
  "\"number\"", "\"identifier\"", "\"string\"", "\"match regex\"",
  "\"substitution regex\"", "\"match pattern of the regex\"",
  "\"substitution pattern of the regex\"", "\"flags of the regex\"",
  "\"regex back reference\"", "\"unary operator\"", "\"binary operator\"",
  "\"start of string\"", "\"end of string\"", "\"start of variable name\"",
  "\"end of variable name\"", "\"start of variable expression\"",
  "\"end of variable expression\"", "\"integer equal\"",
  "\"integer not equal\"", "\"integer less than\"",
  "\"integer less or equal\"", "\"integer greater than\"",
  "\"integer greater or equal\"", "\"regex match\"", "\"regex non-match\"",
  "\"contained in\"", "\"string equal\"", "\"string not equal\"",
  "\"string less than\"", "\"string less or equal\"",
  "\"string greater than\"", "\"string greater or equal\"",
  "\"string concatenation\"", "\"split operator\"", "\"join operator\"",
  "\"logical or\"", "\"logical and\"", "\"logical not\"", "\"condition\"",
  "\"comparison\"", "\"string function\"", "\"list function\"",
  "\"list of words\"", "\"tuple of words\"", "\"word expression\"",
  "\"any string expression\"", "\"variable expression\"",
  "\"regular expression match\"", "\"regular expression substitution\"",
  "\"regular expression split\"", "\"any regular expression\"",
  "\"regular expression back reference\"", "'('", "')'", "'{'", "'}'",
  "','", "':'", "$accept", "root", "cond", "comp", "wordlist", "words",
  "string", "strany", "var", "word", "regex", "regsub", "regsplit",
  "regany", "regref", "lstfunc", "strfunc", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      40,    41,   123,   125,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    71,    71,    72,    72,    72,
      73,    73,    73,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      77,    78,    79,    79,    79,    80,    81,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     2,     3,     3,
       1,     2,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     1,     2,     1,
       1,     1,     1,     3,     5,     3,     3,     1,     2,     3,
       3,     3,     1,     1,     1,     2,     4,     6,     3,     3,
       4,     4,     1,     1,     1,     1,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     0,     5,     6,    14,    47,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     2,    10,
      52,     0,    53,    54,    39,    40,     3,    37,    41,    42,
       1,     0,     0,    11,    48,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    30,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,    49,    43,     0,    46,    45,     0,     0,     0,
       0,     0,    35,     0,     0,     0,    13,    58,     8,     9,
      12,    15,    16,    17,    18,    19,    20,     0,     0,    28,
      51,    29,    27,    21,    22,    23,    24,    25,    26,    50,
      68,    67,     0,     0,     0,     0,    34,     0,    33,     0,
      62,    63,    64,    32,    56,    31,     0,     0,    36,    44,
      66,     0,     0,    59,     0,    57,     0,    60,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,    18,    19,    42,    68,    26,    27,    20,    21,
      99,   100,   122,   123,    22,    44,    23
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -46
static const yytype_int16 yypact[] =
{
     257,   136,   277,   -46,    29,   -46,   -46,   -46,   -46,   -29,
     -46,   164,   216,    39,   136,     7,   136,   136,    27,   -46,
     -46,   243,   -46,   -46,   -46,   -46,   276,   -46,   -46,   -46,
     -46,   164,   164,   -22,   -46,   100,   -18,    75,   220,     8,
     142,   164,    -9,    19,   -46,   -46,     0,   182,   136,   136,
     164,   164,   164,   164,   164,   164,   164,    83,    47,   142,
     164,   164,   164,   164,   164,   164,   164,   -46,    21,   107,
       1,    48,   -46,   -46,   277,   -46,   -46,   164,   142,    32,
      66,    37,   -19,    42,   164,    -6,   -46,   -46,    27,    57,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,    91,    92,   -46,
     -46,   -46,    77,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -46,   -46,   164,   154,   129,   -24,   -46,   164,   -46,   101,
     -46,   -46,   -46,   -46,   -22,   -46,   109,   277,   -46,   -46,
     -46,    67,   277,   -46,   176,   -46,   219,   -46,   -46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,     3,   -46,   -32,   -38,   -10,   -21,    -2,    25,
     -45,    46,    51,   -46,    -1,   -46,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,    29,    35,    81,    73,    67,    98,    83,    79,    71,
      28,    29,    71,   101,    67,     8,    39,    37,    66,    45,
      46,    66,    83,    10,    28,    29,    12,   102,    13,    30,
      14,    31,    71,    28,    29,   119,    33,   116,   120,    38,
      43,    66,    47,    48,    49,   112,   115,    74,    36,    15,
      85,    88,    89,    97,    98,    84,    69,    70,    97,    66,
      98,    86,    87,    83,   113,    80,    82,    40,    77,    41,
      48,    49,    28,    29,   128,    90,    91,    92,    93,    94,
      95,    96,   110,   119,    43,   103,   104,   105,   106,   107,
     108,   109,    67,   116,    97,    98,   117,    85,    71,    75,
     118,    49,   114,    80,   126,   127,    66,    66,    83,   124,
      25,    28,    29,    67,   132,    67,    10,   134,    48,    49,
      72,    13,   136,    14,   133,    28,    29,    87,   135,   121,
      28,    29,    28,    29,    28,    29,   125,    82,    71,     5,
       6,     0,   131,     7,     8,     9,     0,    66,     0,     0,
       8,    39,    10,    11,     0,    12,     0,    13,    10,    14,
      71,    12,     0,    13,    25,    14,     0,     0,   111,    66,
      10,   112,     8,     9,     0,    13,   129,    14,    15,     0,
      10,    16,     0,    12,    15,    13,    25,    14,     0,     0,
     130,   137,    10,   112,     0,     0,    17,    13,     0,    14,
      50,     0,    78,     0,    41,     0,    15,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    24,    32,     0,    25,     0,     0,    25,
       0,     0,    10,     0,   138,    10,    34,    13,    50,    14,
      13,     0,    14,    87,    76,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    50,     1,     2,     3,     0,     0,     0,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    24,     0,    25,    25,     0,     0,
       0,     0,    10,    10,     0,     0,     0,    13,    13,    14,
      14
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,     2,    12,    41,    22,    26,    12,    31,    40,    31,
      12,    12,    31,    58,    35,     8,     9,    14,    40,    16,
      17,    40,    31,    16,    26,    26,    19,    59,    21,     0,
      23,    60,    31,    35,    35,    41,    11,    61,    83,    14,
      15,    40,    17,    43,    44,    64,    78,    65,     9,    42,
      31,    48,    49,    11,    12,    64,    31,    32,    11,    40,
      12,    61,    61,    31,    74,    40,    41,    60,    60,    62,
      43,    44,    74,    74,   112,    50,    51,    52,    53,    54,
      55,    56,    61,    41,    59,    60,    61,    62,    63,    64,
      65,    66,   113,    61,    11,    12,    64,    31,    31,    24,
      63,    44,    77,    78,    13,    13,    40,    40,    31,    84,
      10,   113,   113,   134,    13,   136,    16,   127,    43,    44,
      20,    21,   132,    23,    15,   127,   127,    61,    61,    83,
     132,   132,   134,   134,   136,   136,    85,   112,    31,     3,
       4,    -1,   117,     7,     8,     9,    -1,    40,    -1,    -1,
       8,     9,    16,    17,    -1,    19,    -1,    21,    16,    23,
      31,    19,    -1,    21,    10,    23,    -1,    -1,    61,    40,
      16,    64,     8,     9,    -1,    21,    22,    23,    42,    -1,
      16,    45,    -1,    19,    42,    21,    10,    23,    -1,    -1,
      61,    15,    16,    64,    -1,    -1,    60,    21,    -1,    23,
      18,    -1,    60,    -1,    62,    -1,    42,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     7,    60,    -1,    10,    -1,    -1,    10,
      -1,    -1,    16,    -1,    15,    16,    20,    21,    18,    23,
      21,    -1,    23,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    18,     5,     6,     7,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     7,    -1,    10,    10,    -1,    -1,
      -1,    -1,    16,    16,    -1,    -1,    -1,    21,    21,    23,
      23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,    67,     3,     4,     7,     8,     9,
      16,    17,    19,    21,    23,    42,    45,    60,    68,    69,
      74,    75,    80,    82,     7,    10,    72,    73,    74,    80,
       0,    60,    60,    75,    20,    72,     9,    68,    75,     9,
      60,    62,    70,    75,    81,    68,    68,    75,    43,    44,
      18,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    73,    71,    75,
      75,    31,    20,    22,    65,    24,    24,    60,    60,    70,
      75,    71,    75,    31,    64,    31,    61,    61,    68,    68,
      75,    75,    75,    75,    75,    75,    75,    11,    12,    76,
      77,    76,    70,    75,    75,    75,    75,    75,    75,    75,
      61,    61,    64,    72,    75,    70,    61,    64,    63,    41,
      76,    77,    78,    79,    75,    78,    13,    13,    71,    22,
      61,    75,    13,    15,    72,    61,    72,    15,    15
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (ctx, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, yyscanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, ctx); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ap_expr_parse_ctx_t *ctx)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ap_expr_parse_ctx_t *ctx;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (ctx);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ap_expr_parse_ctx_t *ctx)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ap_expr_parse_ctx_t *ctx;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, ap_expr_parse_ctx_t *ctx)
#else
static void
yy_reduce_print (yyvsp, yyrule, ctx)
    YYSTYPE *yyvsp;
    int yyrule;
    ap_expr_parse_ctx_t *ctx;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ctx); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, ap_expr_parse_ctx_t *ctx)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ctx)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    ap_expr_parse_ctx_t *ctx;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ctx);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (ap_expr_parse_ctx_t *ctx)
#else
int
yyparse (ctx)
    ap_expr_parse_ctx_t *ctx;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1787 of yacc.c  */
#line 126 "util_expr_parse.y"
    { ctx->expr = (yyvsp[(2) - (2)].exVal); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 127 "util_expr_parse.y"
    { ctx->expr = (yyvsp[(2) - (2)].exVal); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 128 "util_expr_parse.y"
    { YYABORT; }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 131 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_True,        NULL, NULL, ctx); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 132 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_False,       NULL, NULL, ctx); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 133 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Not,         (yyvsp[(2) - (2)].exVal),   NULL, ctx); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 134 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Or,          (yyvsp[(1) - (3)].exVal),   (yyvsp[(3) - (3)].exVal),   ctx); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 135 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_And,         (yyvsp[(1) - (3)].exVal),   (yyvsp[(3) - (3)].exVal),   ctx); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 136 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Comp,        (yyvsp[(1) - (1)].exVal),   NULL, ctx); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 137 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_unary_op_make(       (yyvsp[(1) - (2)].cpVal),   (yyvsp[(2) - (2)].exVal),   ctx); }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 138 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_binary_op_make((yyvsp[(2) - (3)].cpVal),   (yyvsp[(1) - (3)].exVal),   (yyvsp[(3) - (3)].exVal),   ctx); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 139 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(2) - (3)].exVal); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 140 "util_expr_parse.y"
    { YYABORT; }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 143 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_EQ,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 144 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_NE,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 145 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_LT,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 146 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_LE,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 147 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_GT,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 148 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_GE,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 149 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_EQ,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 150 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_NE,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 151 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_LT,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 152 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_LE,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 153 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_GT,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 154 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_GE,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 155 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_IN,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 156 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_REG,     (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 157 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_NRE,     (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 160 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 161 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_list_regex_make((yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 162 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_list_regex_make((yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 163 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(2) - (3)].exVal); }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 164 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(2) - (3)].exVal); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 167 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_ListElement, (yyvsp[(1) - (1)].exVal), NULL, ctx); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 168 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_ListElement, (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal),   ctx); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 171 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 172 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_concat_make((yyvsp[(1) - (2)].exVal), (yyvsp[(2) - (2)].exVal), ctx); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 173 "util_expr_parse.y"
    { YYABORT; }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 176 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_String, (yyvsp[(1) - (1)].cpVal), NULL, ctx); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 177 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 178 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 181 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_var_make((yyvsp[(2) - (3)].cpVal), ctx); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 182 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_str_func_make((yyvsp[(2) - (5)].cpVal), (yyvsp[(4) - (5)].exVal), ctx); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 183 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_str_word_make((yyvsp[(2) - (3)].exVal), ctx); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 184 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_str_bool_make((yyvsp[(2) - (3)].exVal), ctx); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 187 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Digit,  (yyvsp[(1) - (1)].cpVal), NULL, ctx); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 188 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_String, "", NULL, ctx); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 189 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(2) - (3)].exVal); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 190 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Concat, (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal),   ctx); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 191 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Regsub, (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal),   ctx); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 192 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 193 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 194 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 195 "util_expr_parse.y"
    {
                                           (yyval.exVal) = ap_expr_make(op_Join,   (yyvsp[(2) - (2)].exVal), NULL, ctx);
            }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 198 "util_expr_parse.y"
    {
                                           (yyval.exVal) = ap_expr_make(op_Join,   (yyvsp[(2) - (4)].exVal), (yyvsp[(4) - (4)].exVal),   ctx);
            }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 201 "util_expr_parse.y"
    {
                                           (yyval.exVal) = ap_expr_make(op_Join,   (yyvsp[(3) - (6)].exVal), (yyvsp[(5) - (6)].exVal),   ctx);
            }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 204 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(2) - (3)].exVal); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 207 "util_expr_parse.y"
    {
                ap_expr_t *e = ap_expr_regex_make((yyvsp[(2) - (3)].cpVal), (yyvsp[(3) - (3)].cpVal), NULL, 0, ctx);
                if (!e) {
                    ctx->error = "Failed to compile regular expression";
                    YYERROR;
                }
                (yyval.exVal) = e;
            }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 216 "util_expr_parse.y"
    {
                ap_expr_t *e = ap_expr_regex_make((yyvsp[(2) - (4)].cpVal), (yyvsp[(4) - (4)].cpVal), (yyvsp[(3) - (4)].exVal), 0, ctx);
                if (!e) {
                    ctx->error = "Failed to compile regular expression";
                    YYERROR;
                }
                (yyval.exVal) = e;
            }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 225 "util_expr_parse.y"
    {
                /* Returns a list:
                 * <word> ~= split/://
                 *  => split around ':', replace it with empty
                 * <word> ~= split/:/\n/
                 *  => split around ':', replace it with '\n'
                 * <list> ~= split/.*?Ip Address:([^,]+)/$1/
                 *  => split around the whole match, replace it with $1
                 */
                ap_expr_t *e = ap_expr_regex_make((yyvsp[(2) - (4)].cpVal), (yyvsp[(4) - (4)].cpVal), (yyvsp[(3) - (4)].exVal), 1, ctx);
                if (!e) {
                    ctx->error = "Failed to compile regular expression";
                    YYERROR;
                }
                (yyval.exVal) = e;
            }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 242 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 243 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 244 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 247 "util_expr_parse.y"
    {
                int *n = apr_palloc(ctx->pool, sizeof(int));
                *n = (yyvsp[(1) - (1)].num);
                (yyval.exVal) = ap_expr_make(op_Regref, n, NULL, ctx);
            }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 254 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_list_func_make((yyvsp[(1) - (4)].cpVal), (yyvsp[(3) - (4)].exVal), ctx); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 258 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_str_func_make((yyvsp[(1) - (4)].cpVal), (yyvsp[(3) - (4)].exVal), ctx); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 259 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_str_func_make((yyvsp[(1) - (4)].cpVal), (yyvsp[(3) - (4)].exVal), ctx); }
    break;


/* Line 1787 of yacc.c  */
#line 2027 "util_expr_parse.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ctx, YY_("syntax error"));
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
        yyerror (ctx, yymsgp);
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
		      yytoken, &yylval, ctx);
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
		  yystos[yystate], yyvsp, ctx);
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
  yyerror (ctx, YY_("memory exhausted"));
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
                  yytoken, &yylval, ctx);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ctx);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 262 "util_expr_parse.y"


void yyerror(ap_expr_parse_ctx_t *ctx, const char *s)
{
    /* s is allocated on the stack */
    ctx->error = apr_pstrdup(ctx->ptemp, s);
}

