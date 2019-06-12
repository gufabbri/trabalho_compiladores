/* A Bison parser, made by GNU Bison 3.0.5.  */

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
#define YYBISON_VERSION "3.0.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "scalc.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int col = 0;
extern int yylineno;
extern FILE *yyin;
int yyerror(const char *s);
int yylex (void);

int sycount = 0;


syntno *create_no(const char name, enum syntno_type t, short children); 
void print_tree(syntno *root);
targs *copy_targs(const targs a);


#line 88 "scalc.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "scalc.tab.h".  */
#ifndef YY_YY_SCALC_TAB_H_INCLUDED
# define YY_YY_SCALC_TAB_H_INCLUDED
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
    PRINT = 258,
    TOK_FUNCTION = 259,
    TOK_VAR = 260,
    TOK_MAIN = 261,
    TOK_ISEQUAL = 262,
    TOK_DIFF = 263,
    TOK_END = 264,
    TOK_IF = 265,
    TOK_WHILE = 266,
    TOK_ELSE = 267,
    TOK_FOR = 268,
    TOK_AND = 269,
    TOK_OR = 270,
    TOK_NOT = 271,
    TOK_GT = 272,
    TOK_LT = 273,
    TOK_ADD = 274,
    TOK_SUB = 275,
    TOK_MULT = 276,
    TOK_DIV = 277,
    TOK_WRITE = 278,
    TOK_READ = 279,
    INT = 280,
    DBL = 281,
    VAR = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "scalc.y" /* yacc.c:355  */

	targs args;
	struct syntno *no;

#line 161 "scalc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SCALC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 178 "scalc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   101

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  37
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  90

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    29,     2,     2,     2,
      30,    31,     2,     2,     2,    35,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,    28,    33,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    49,    54,    61,    70,    71,    77,    84,
      89,    92,    97,   100,   105,   108,   109,   114,   119,   124,
     129,   134,   139,   143,   146,   150,   157,   162,   167,   170,
     175,   180,   183,   188,   193,   198,   202,   205
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "TOK_FUNCTION", "TOK_VAR",
  "TOK_MAIN", "TOK_ISEQUAL", "TOK_DIFF", "TOK_END", "TOK_IF", "TOK_WHILE",
  "TOK_ELSE", "TOK_FOR", "TOK_AND", "TOK_OR", "TOK_NOT", "TOK_GT",
  "TOK_LT", "TOK_ADD", "TOK_SUB", "TOK_MULT", "TOK_DIV", "TOK_WRITE",
  "TOK_READ", "INT", "DBL", "VAR", "'='", "'$'", "'('", "')'", "'/'",
  "'>'", "'<'", "'-'", "$accept", "program", "stmts", "stmt", "expl",
  "terml", "fatl", "print", "arit", "term", "factor", "unary", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    61,    36,
      40,    41,    47,    62,    60,    45
};
# endif

#define YYPACT_NINF -28

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-28)))

#define YYTABLE_NINF -5

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       1,     4,    19,    60,   -28,   -28,    18,    21,    42,    48,
      52,    62,    82,    43,   -28,    64,    -5,    -5,    55,    65,
      66,   -28,   -28,    55,    -5,   -28,   -28,   -28,    -5,    55,
      -2,    79,     0,    -4,    36,   -28,   -28,    11,    55,    30,
     -28,   -28,    67,     0,    12,    44,   -28,    -5,    60,    -5,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      60,    44,    -5,   -28,   -28,   -28,    79,    85,     0,    -4,
      -4,    -4,    -4,    -4,    -4,    36,    36,   -28,   -28,    89,
      -9,    60,   -28,    55,    90,    57,   -28,    60,    91,   -28
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     2,     3,     0,     0,    33,    34,    35,     0,     0,
       0,    12,    14,    23,    28,    31,    36,     0,     0,     0,
      24,    25,     0,    22,     0,    23,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,    15,    32,    11,     0,    13,    20,
      21,    16,    17,    18,    19,    26,    27,    29,    30,     0,
       0,     0,     9,     0,     0,     0,     7,     0,     0,     8
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,   -13,   -28,   -16,    54,   -21,   -28,   -14,     3,
     -27,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    12,    13,    30,    31,    32,    14,    33,    34,
      35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      22,    37,    46,    43,    39,     1,    47,    50,    51,    42,
       3,    24,    44,    47,    45,    56,    57,    52,    53,     4,
      25,    26,    27,    83,    61,    28,    47,    47,    68,    48,
      29,    77,    78,    54,    55,    67,    69,    70,    71,    72,
      73,    74,    60,    64,     5,    15,    80,    79,     6,    56,
      57,    16,    -4,     7,     8,    -4,     9,    58,    59,    75,
      76,     5,    62,    56,    57,     6,    10,    11,    84,    85,
       7,     8,    17,     9,    88,    65,    56,    57,    18,    19,
      25,    26,    27,    10,    11,    38,    56,    57,    87,    20,
      29,    21,    23,    49,    40,    41,    63,    81,    82,    86,
      89,    66
};

static const yytype_uint8 yycheck[] =
{
      13,    17,    29,    24,    18,     4,    15,     7,     8,    23,
       6,    16,    28,    15,    28,    19,    20,    17,    18,     0,
      25,    26,    27,    32,    38,    30,    15,    15,    49,    31,
      35,    58,    59,    33,    34,    48,    50,    51,    52,    53,
      54,    55,    31,    31,     1,    27,    62,    60,     5,    19,
      20,    30,     9,    10,    11,    12,    13,    21,    22,    56,
      57,     1,    32,    19,    20,     5,    23,    24,    81,    83,
      10,    11,    30,    13,    87,    31,    19,    20,    30,    27,
      25,    26,    27,    23,    24,    30,    19,    20,    31,    27,
      35,     9,    28,    14,    29,    29,    29,    12,     9,     9,
       9,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    37,     6,     0,     1,     5,    10,    11,    13,
      23,    24,    38,    39,    43,    27,    30,    30,    30,    27,
      27,     9,    38,    28,    16,    25,    26,    27,    30,    35,
      40,    41,    42,    44,    45,    46,    47,    40,    30,    44,
      29,    29,    44,    42,    40,    44,    46,    15,    31,    14,
       7,     8,    17,    18,    33,    34,    19,    20,    21,    22,
      31,    44,    32,    29,    31,    31,    41,    38,    42,    44,
      44,    44,    44,    44,    44,    45,    45,    46,    46,    38,
      40,    12,     9,    32,    38,    44,     9,    31,    38,     9
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      39,    40,    40,    41,    41,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    43,    43,    44,    44,    44,    45,
      45,    45,    46,    46,    46,    46,    46,    47
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     1,     5,     1,     8,    10,     6,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     1,     1,     1,     2
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
#line 42 "scalc.y" /* yacc.c:1648  */
    { print_symbols();
				  visitor_leaf_first(&((yyvsp[-1].no)), collapse_stmts);
				  visitor_leaf_first(&((yyvsp[-1].no)), declared_vars);
				  print_tree((yyvsp[-1].no));
				}
#line 1314 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 3:
#line 49 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('S', NO_STMTS, 2);
							  u->children[0] = (yyvsp[-1].no);
							  u->children[1] = (yyvsp[0].no);
							  (yyval.no) = u;
							}
#line 1324 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 4:
#line 54 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('s', NO_STMT, 1);
							  u->children[0] = (yyvsp[0].no);
							  (yyval.no) = u;
							}
#line 1333 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 5:
#line 61 "scalc.y" /* yacc.c:1648  */
    { add_symbol((yyvsp[-3].args).varname, (yyvsp[-3].args).line, (yyvsp[-3].args).col); 
							  syntno *u = create_no('A', NO_ATTR, 2);

							  syntno *uvar = create_no('V', NO_TOK, 0);
							  uvar->token_args = copy_targs((yyvsp[-3].args));
							  u->children[0] = uvar;
							  u->children[1] = (yyvsp[-1].no); 
							  (yyval.no) = u;
							}
#line 1347 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 6:
#line 70 "scalc.y" /* yacc.c:1648  */
    { (yyval.no) = (yyvsp[0].no); }
#line 1353 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 7:
#line 71 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('X', NO_IF, 3);
							  u->children[0] = (yyvsp[-5].no); 
							  u->children[1] = (yyvsp[-3].no); 
							  u->children[2] = (yyvsp[-1].no); 
							  (yyval.no) = u;
							}
#line 1364 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 8:
#line 77 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_FOR, 4);
							  u->children[0] = (yyvsp[-7].no); 
							  u->children[1] = (yyvsp[-5].no); 
							  u->children[2] = (yyvsp[-3].no); 
							  u->children[3] = (yyvsp[-1].no); 
							  (yyval.no) = u;
							}
#line 1376 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 9:
#line 84 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_WHILE, 2);
							  u->children[0] = (yyvsp[-3].no); 
							  u->children[1] = (yyvsp[-1].no); 
							  (yyval.no) = u;
							}
#line 1386 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 10:
#line 89 "scalc.y" /* yacc.c:1648  */
    { }
#line 1392 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 11:
#line 92 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_OR, 2);
							  u->children[0] = (yyvsp[-2].no); 
							  u->children[1] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1402 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 12:
#line 97 "scalc.y" /* yacc.c:1648  */
    { (yyval.no) = (yyvsp[0].no); }
#line 1408 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 13:
#line 100 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_AND, 2);
							  u->children[0] = (yyvsp[-2].no); 
							  u->children[1] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1418 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 14:
#line 105 "scalc.y" /* yacc.c:1648  */
    { (yyval.no) = (yyvsp[0].no); }
#line 1424 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 15:
#line 108 "scalc.y" /* yacc.c:1648  */
    { (yyval.no) = (yyvsp[-1].no); }
#line 1430 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 16:
#line 109 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_GT, 2);
							  u->children[0] = (yyvsp[-2].no); 
							  u->children[1] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1440 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 17:
#line 114 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_LT, 2);
							  u->children[0] = (yyvsp[-2].no); 
							  u->children[1] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1450 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 18:
#line 119 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_MAIOR, 2);
							  u->children[0] = (yyvsp[-2].no); 
							  u->children[1] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1460 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 19:
#line 124 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_MENOR, 2);
							  u->children[0] = (yyvsp[-2].no); 
							  u->children[1] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1470 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 20:
#line 129 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_IGUAL, 2);
							  u->children[0] = (yyvsp[-2].no); 
							  u->children[1] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1480 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 21:
#line 134 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_DIFF, 2);
							  u->children[0] = (yyvsp[-2].no); 
							  u->children[1] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1490 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 22:
#line 139 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_NOT, 1);
							  u->children[0] = (yyvsp[0].no); 
							  (yyval.no) = u; 
							}
#line 1499 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 23:
#line 143 "scalc.y" /* yacc.c:1648  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1505 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 24:
#line 146 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_PRNT, 0);
							  u->token_args = copy_targs((yyvsp[-1].args));
							  (yyval.no) = u;
							}
#line 1514 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 25:
#line 150 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('P', NO_PRNT, 0);
							  u->token_args = copy_targs((yyvsp[-1].args));
							  (yyval.no) = u;
							}
#line 1523 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 26:
#line 157 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('+', NO_ADD, 2);
							  u->children[0] = (yyvsp[-2].no);
							  u->children[1] = (yyvsp[0].no);
							  (yyval.no) = u;
							}
#line 1533 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 27:
#line 162 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('-', NO_SUB, 2);
							  u->children[0] = (yyvsp[-2].no);
							  u->children[1] = (yyvsp[0].no);
							  (yyval.no) = u;
							}
#line 1543 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 28:
#line 167 "scalc.y" /* yacc.c:1648  */
    { (yyval.no) = (yyvsp[0].no); }
#line 1549 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 29:
#line 170 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('*', NO_MULT, 2);
							  u->children[0] = (yyvsp[-2].no);
							  u->children[1] = (yyvsp[0].no);
							  (yyval.no) = u;
							}
#line 1559 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 30:
#line 175 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('/', NO_DIV, 2);
							  u->children[0] = (yyvsp[-2].no);
							  u->children[1] = (yyvsp[0].no);
							  (yyval.no) = u;
							}
#line 1569 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 31:
#line 180 "scalc.y" /* yacc.c:1648  */
    { (yyval.no) = (yyvsp[0].no); }
#line 1575 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 32:
#line 183 "scalc.y" /* yacc.c:1648  */
    { /*syntno *u = create_no('p', NO_PAR, 1);
							  u->children[0] = $2;
							  $$ = u;*/
							  (yyval.no) = (yyvsp[-1].no);
							}
#line 1585 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 33:
#line 188 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('I', NO_TOK, 0);
							  u->token_args = copy_targs((yyvsp[0].args));
							  u->dt = LT_INT;
							  (yyval.no) = u;
							}
#line 1595 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 34:
#line 193 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('D', NO_TOK, 0);
							  u->token_args = copy_targs((yyvsp[0].args));
							  u->dt = LT_FLOAT;
							  (yyval.no) = u;
							}
#line 1605 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 35:
#line 198 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('V', NO_TOK, 0);
							  u->token_args = copy_targs((yyvsp[0].args));
							  (yyval.no) = u;
							}
#line 1614 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 36:
#line 202 "scalc.y" /* yacc.c:1648  */
    { (yyval.no) = (yyvsp[0].no); }
#line 1620 "scalc.tab.c" /* yacc.c:1648  */
    break;

  case 37:
#line 205 "scalc.y" /* yacc.c:1648  */
    { syntno *u = create_no('-', NO_UNA, 1);
							  u->children[0] = (yyvsp[0].no);
							  (yyval.no) = u;
							}
#line 1629 "scalc.tab.c" /* yacc.c:1648  */
    break;


#line 1633 "scalc.tab.c" /* yacc.c:1648  */
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
#line 211 "scalc.y" /* yacc.c:1907  */


int yyerror(const char *s) {
	printf("teste02.txt:%d:%d %s.\n", yylineno, col, s);
	return 1;
}

int yywrap() {
	return 1;
}

int main(int argc, char *argv[]) {

	if (argc > 1) {
//		filename = argv[1];
		yyin = fopen(argv[1], "r");
	}

	// invoca o analisador sintático
	yyparse();

	if (yyin)
		fclose(yyin);

	return 0;	

}

void add_symbol(const char *varname, int line, int col) {
	int e = search_symbol(varname);
	if (e == -1) {
		strncpy(synames[sycount].name, varname, 10);
		synames[sycount].line = line;
		synames[sycount].col = col;
		synames[sycount].var_exists = false;
		sycount++;
	}
}

int search_symbol(const char *varname) {
	for(int i = 0; i < sycount; i++) {
		if (strcmp(synames[i].name, varname) == 0)
			return i;
	}
	return -1;
}

void print_symbols() {
	printf("\n\nTabela de simbolos:\n");
	for(int i = 0; i < sycount; i++) {
		printf("%s\t%d\t%d\n", synames[i].name,
			synames[i].line, synames[i].col);
	}
}

syntno *create_no(const char name, enum syntno_type t, short childcount) {
	static short IDCOUNT = 0;

	int s = sizeof(syntno);
	if (childcount > 1)
		s += sizeof(syntno*) * (childcount-1);
	syntno *u = (syntno*)malloc(s);
	u->id = IDCOUNT++;
	u->type = t;
	u->token = name;
	u->childcount = childcount;
	u->dt = LT_NONE;
	return u;
}

void print_tree_recursiv(syntno *root) {

	// NO_ADD=0, NO_SUB, NO_MULT, NO_DIV, NO_PAR, 
 	// NO_STMTS, NO_STMT, NO_UNA, NO_ATTR, NO_TOK, NO_PRNT
	const char *node_names[] = {
		"NO_ADD", "NO_SUB", "NO_MULT", "NO_DIV", "NO_PAR", 
 		"NO_STMTS", "NO_STMT", "NO_UNA", "NO_ATTR", "NO_TOK", "NO_PRNT",
		"NO_AND", "NO_OR", "NO_NOT", "NO_GT", "NO_LT", "NO_MAIOR", "NO_MENOR", "NO_WHILE", "NO_FOR", "NO_IF", "NO_IGUAL", "NO_DIFF"};

        const char *dt_names[] = {"NONE", "INT", "FLOAT"};

//	if (root->type == NO_TOK || root->type == NO_PRNT || root->type == NO_ATTR) {
//	}
//	else {
		if (root->type == NO_TOK || root->type == NO_PRNT) {
			targs *args = root->token_args;
			switch (root->token) {
				case 'V':
					printf("\tN%d[label=\"%s dt:%s\"];\n", root->id, args->varname, dt_names[root->dt]);
					break;
				case 'D':
					printf("\tN%d[label=\"%lf dt:%s\"];\n", root->id, args->constvalue, dt_names[root->dt]);
					break;
				case 'I':
					printf("\tN%d[label=\"%d dt:%s\"];\n", root->id, (int)args->constvalue, dt_names[root->dt]);
					break;
				case 'P':
					printf("\tN%d[label=\"PRINT %s\"];\n", root->id, args->varname);
					break;

			}
		} else {
			printf("\tN%d[label=\"%s\"];\n", root->id, node_names[root->type]);
		}

		for(int i = 0; i < root->childcount; i++) {
			print_tree_recursiv(root->children[i]);
			printf("\tN%d -- N%d;\n", root->id, root->children[i]->id);
		}
//	}
}

void print_tree(syntno *root) {
	printf("graph {\n");

	print_tree_recursiv(root);

	printf("}\n");
}

targs *copy_targs(const targs a) {
	targs *r = malloc(sizeof(targs));
	memcpy(r, &a, sizeof(targs));
	//*r = a;
	return r;
}

