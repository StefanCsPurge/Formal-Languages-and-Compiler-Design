/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lang.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YYDEBUG 1 
int yylex();
int yyerror(char *s);

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    START_ID = 258,                /* START_ID  */
    END_ID = 259,                  /* END_ID  */
    AND = 260,                     /* AND  */
    ARRAY = 261,                   /* ARRAY  */
    ELSE = 262,                    /* ELSE  */
    FOR = 263,                     /* FOR  */
    FOR_FROM = 264,                /* FOR_FROM  */
    INTEGER = 265,                 /* INTEGER  */
    IN_CASE = 266,                 /* IN_CASE  */
    OR = 267,                      /* OR  */
    READ_VAL = 268,                /* READ_VAL  */
    STRING = 269,                  /* STRING  */
    WHILE = 270,                   /* WHILE  */
    DIVIDES = 271,                 /* DIVIDES  */
    INCREMENT = 272,               /* INCREMENT  */
    SHOW = 273,                    /* SHOW  */
    ID = 274,                      /* ID  */
    CONST = 275,                   /* CONST  */
    ATRIB = 276,                   /* ATRIB  */
    EQ = 277,                      /* EQ  */
    NE = 278,                      /* NE  */
    LE = 279,                      /* LE  */
    GE = 280,                      /* GE  */
    LT = 281,                      /* LT  */
    GT = 282,                      /* GT  */
    NOT = 283,                     /* NOT  */
    DOT = 284,                     /* DOT  */
    PLUS = 285,                    /* PLUS  */
    MINUS = 286,                   /* MINUS  */
    DIV = 287,                     /* DIV  */
    MOD = 288,                     /* MOD  */
    MUL = 289,                     /* MUL  */
    OPEN_CURLY_BRACKET = 290,      /* OPEN_CURLY_BRACKET  */
    CLOSED_CURLY_BRACKET = 291,    /* CLOSED_CURLY_BRACKET  */
    OPEN_ROUND_BRACKET = 292,      /* OPEN_ROUND_BRACKET  */
    CLOSED_ROUND_BRACKET = 293,    /* CLOSED_ROUND_BRACKET  */
    OPEN_RIGHT_BRACKET = 294,      /* OPEN_RIGHT_BRACKET  */
    CLOSED_RIGHT_BRACKET = 295,    /* CLOSED_RIGHT_BRACKET  */
    NEW_LINE = 296,                /* NEW_LINE  */
    COMMA = 297,                   /* COMMA  */
    SEMI_COLON = 298,              /* SEMI_COLON  */
    COLON = 299,                   /* COLON  */
    SPACE = 300                    /* SPACE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define START_ID 258
#define END_ID 259
#define AND 260
#define ARRAY 261
#define ELSE 262
#define FOR 263
#define FOR_FROM 264
#define INTEGER 265
#define IN_CASE 266
#define OR 267
#define READ_VAL 268
#define STRING 269
#define WHILE 270
#define DIVIDES 271
#define INCREMENT 272
#define SHOW 273
#define ID 274
#define CONST 275
#define ATRIB 276
#define EQ 277
#define NE 278
#define LE 279
#define GE 280
#define LT 281
#define GT 282
#define NOT 283
#define DOT 284
#define PLUS 285
#define MINUS 286
#define DIV 287
#define MOD 288
#define MUL 289
#define OPEN_CURLY_BRACKET 290
#define CLOSED_CURLY_BRACKET 291
#define OPEN_ROUND_BRACKET 292
#define CLOSED_ROUND_BRACKET 293
#define OPEN_RIGHT_BRACKET 294
#define CLOSED_RIGHT_BRACKET 295
#define NEW_LINE 296
#define COMMA 297
#define SEMI_COLON 298
#define COLON 299
#define SPACE 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_START_ID = 3,                   /* START_ID  */
  YYSYMBOL_END_ID = 4,                     /* END_ID  */
  YYSYMBOL_AND = 5,                        /* AND  */
  YYSYMBOL_ARRAY = 6,                      /* ARRAY  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_FOR = 8,                        /* FOR  */
  YYSYMBOL_FOR_FROM = 9,                   /* FOR_FROM  */
  YYSYMBOL_INTEGER = 10,                   /* INTEGER  */
  YYSYMBOL_IN_CASE = 11,                   /* IN_CASE  */
  YYSYMBOL_OR = 12,                        /* OR  */
  YYSYMBOL_READ_VAL = 13,                  /* READ_VAL  */
  YYSYMBOL_STRING = 14,                    /* STRING  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_DIVIDES = 16,                   /* DIVIDES  */
  YYSYMBOL_INCREMENT = 17,                 /* INCREMENT  */
  YYSYMBOL_SHOW = 18,                      /* SHOW  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_CONST = 20,                     /* CONST  */
  YYSYMBOL_ATRIB = 21,                     /* ATRIB  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_LT = 26,                        /* LT  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_DOT = 29,                       /* DOT  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_PLUS = 34,                      /* PLUS  */
  YYSYMBOL_MINUS = 35,                     /* MINUS  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_MOD = 37,                       /* MOD  */
  YYSYMBOL_MUL = 38,                       /* MUL  */
  YYSYMBOL_OPEN_CURLY_BRACKET = 39,        /* OPEN_CURLY_BRACKET  */
  YYSYMBOL_CLOSED_CURLY_BRACKET = 40,      /* CLOSED_CURLY_BRACKET  */
  YYSYMBOL_OPEN_ROUND_BRACKET = 41,        /* OPEN_ROUND_BRACKET  */
  YYSYMBOL_CLOSED_ROUND_BRACKET = 42,      /* CLOSED_ROUND_BRACKET  */
  YYSYMBOL_OPEN_RIGHT_BRACKET = 43,        /* OPEN_RIGHT_BRACKET  */
  YYSYMBOL_CLOSED_RIGHT_BRACKET = 44,      /* CLOSED_RIGHT_BRACKET  */
  YYSYMBOL_NEW_LINE = 45,                  /* NEW_LINE  */
  YYSYMBOL_COMMA = 46,                     /* COMMA  */
  YYSYMBOL_SEMI_COLON = 47,                /* SEMI_COLON  */
  YYSYMBOL_COLON = 48,                     /* COLON  */
  YYSYMBOL_SPACE = 49,                     /* SPACE  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_declaration = 52,               /* declaration  */
  YYSYMBOL_type = 53,                      /* type  */
  YYSYMBOL_cmpdstmt = 54,                  /* cmpdstmt  */
  YYSYMBOL_stmt = 55,                      /* stmt  */
  YYSYMBOL_simplstmt = 56,                 /* simplstmt  */
  YYSYMBOL_structstmt = 57,                /* structstmt  */
  YYSYMBOL_ifstmt = 58,                    /* ifstmt  */
  YYSYMBOL_tempIf = 59,                    /* tempIf  */
  YYSYMBOL_forstmt = 60,                   /* forstmt  */
  YYSYMBOL_forheader = 61,                 /* forheader  */
  YYSYMBOL_whilestmt = 62,                 /* whilestmt  */
  YYSYMBOL_assignstmt = 63,                /* assignstmt  */
  YYSYMBOL_expression = 64,                /* expression  */
  YYSYMBOL_arithmetic1 = 65,               /* arithmetic1  */
  YYSYMBOL_arithmetic2 = 66,               /* arithmetic2  */
  YYSYMBOL_multiply1 = 67,                 /* multiply1  */
  YYSYMBOL_multiply2 = 68,                 /* multiply2  */
  YYSYMBOL_IndexedIdentifier = 69,         /* IndexedIdentifier  */
  YYSYMBOL_iostmt = 70,                    /* iostmt  */
  YYSYMBOL_condition = 71,                 /* condition  */
  YYSYMBOL_boolean_condition = 72,         /* boolean_condition  */
  YYSYMBOL_boolean_cond_temp = 73          /* boolean_cond_temp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   93

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  109

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    32,    30,     2,    31,     2,    33,     2,     2,
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
      25,    26,    27,    28,    29,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    69,    69,    71,    73,    73,    73,    75,    75,    77,
      77,    79,    79,    79,    81,    81,    81,    83,    85,    85,
      85,    87,    89,    91,    93,    93,    95,    97,    97,    97,
      99,   101,   101,   101,   103,   103,   103,   103,   105,   107,
     107,   107,   109,   110,   111,   112,   113,   114,   116,   118,
     118,   118
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "START_ID", "END_ID",
  "AND", "ARRAY", "ELSE", "FOR", "FOR_FROM", "INTEGER", "IN_CASE", "OR",
  "READ_VAL", "STRING", "WHILE", "DIVIDES", "INCREMENT", "SHOW", "ID",
  "CONST", "ATRIB", "EQ", "NE", "LE", "GE", "LT", "GT", "NOT", "DOT",
  "'+'", "'-'", "'*'", "'/'", "PLUS", "MINUS", "DIV", "MOD", "MUL",
  "OPEN_CURLY_BRACKET", "CLOSED_CURLY_BRACKET", "OPEN_ROUND_BRACKET",
  "CLOSED_ROUND_BRACKET", "OPEN_RIGHT_BRACKET", "CLOSED_RIGHT_BRACKET",
  "NEW_LINE", "COMMA", "SEMI_COLON", "COLON", "SPACE", "$accept",
  "program", "declaration", "type", "cmpdstmt", "stmt", "simplstmt",
  "structstmt", "ifstmt", "tempIf", "forstmt", "forheader", "whilestmt",
  "assignstmt", "expression", "arithmetic1", "arithmetic2", "multiply1",
  "multiply2", "IndexedIdentifier", "iostmt", "condition",
  "boolean_condition", "boolean_cond_temp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-30)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      27,    31,    32,   -30,    19,   -30,    -7,     2,   -30,    -7,
      21,    15,   -30,    44,    60,    31,    20,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,    57,    22,    24,   -30,    -7,    -6,
     -29,    -3,   -30,    17,    23,     1,    25,    28,   -10,   -30,
     -30,   -30,   -30,    49,    30,    52,    33,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,   -30,    -7,    -7,   -30,    -7,
      -7,   -30,    35,    34,    38,    36,    37,   -30,   -30,   -30,
      31,    39,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -29,
     -29,    -3,    -3,   -30,   -30,    40,   -30,    41,   -30,   -30,
      47,   -30,   -30,   -30,   -30,   -30,    31,    31,   -30,    48,
      50,    -5,   -30,    45,   -30,   -30,    31,    53,   -30
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     6,     0,     4,     0,     0,     5,     0,
       0,     0,    13,     0,     0,     7,     0,    10,    14,    16,
      15,    11,    12,     1,     0,     0,    36,    35,     0,     0,
      29,    33,    37,    49,     0,     0,     0,     0,     0,     3,
       2,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    30,     0,
       0,    48,     0,     0,     0,     0,     0,    24,    25,    22,
       0,     0,    34,    46,    47,    45,    43,    44,    42,    29,
      29,    33,    33,    50,    51,     0,    39,     0,    40,    41,
       0,    38,    27,    28,    32,    31,     0,     0,    21,     0,
       0,    18,    23,     0,    20,    17,     0,     0,    19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,   -30,    54,   -15,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -24,   -26,     3,   -23,     4,   -30,
      42,   -30,    -8,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    12,    13,    14,    15,    16,    17,    18,   105,
      19,    25,    20,    21,    29,    55,    30,    58,    31,    32,
      22,    33,    34,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      41,    36,   103,     7,    46,    53,    54,     3,    10,    26,
      27,     5,    26,    27,    67,     8,    47,    48,    49,    50,
      51,    52,    59,    73,    74,    75,    76,    77,    78,    60,
       1,    28,    23,    56,    28,    57,    38,     3,    24,     4,
     104,     5,     6,    35,     7,     8,     9,    65,    66,    10,
      11,    83,    84,    92,    93,    90,    79,    80,    94,    95,
      81,    82,    37,    39,    40,    42,    43,    45,    69,    70,
      44,    62,    71,    64,    85,    72,    86,    87,    88,    89,
      68,    99,   100,    91,   106,    96,    97,    98,   101,    63,
     102,   107,     0,   108
};

static const yytype_int8 yycheck[] =
{
      15,     9,     7,    13,    28,    34,    35,     6,    18,    19,
      20,    10,    19,    20,    38,    14,    22,    23,    24,    25,
      26,    27,     5,    47,    48,    49,    50,    51,    52,    12,
       3,    41,     0,    36,    41,    38,    21,     6,    19,     8,
      45,    10,    11,    41,    13,    14,    15,    19,    20,    18,
      19,    59,    60,    79,    80,    70,    53,    54,    81,    82,
      56,    57,    41,    19,     4,    45,     9,    43,    19,    39,
      48,    48,    20,    48,    39,    42,    42,    39,    42,    42,
      38,    96,    97,    44,    39,    45,    45,    40,    40,    35,
      40,   106,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    51,     6,     8,    10,    11,    13,    14,    15,
      18,    19,    52,    53,    54,    55,    56,    57,    58,    60,
      62,    63,    70,     0,    19,    61,    19,    20,    41,    64,
      66,    68,    69,    71,    72,    41,    72,    41,    21,    19,
       4,    54,    45,     9,    48,    43,    64,    22,    23,    24,
      25,    26,    27,    34,    35,    65,    36,    38,    67,     5,
      12,    73,    48,    53,    48,    19,    20,    64,    70,    19,
      39,    20,    42,    64,    64,    64,    64,    64,    64,    66,
      66,    68,    68,    72,    72,    39,    42,    39,    42,    42,
      54,    44,    65,    65,    67,    67,    45,    45,    40,    54,
      54,    40,    40,     7,    45,    59,    39,    54,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    53,    53,    53,    54,    54,    55,
      55,    56,    56,    56,    57,    57,    57,    58,    59,    59,
      59,    60,    61,    62,    63,    63,    64,    65,    65,    65,
      66,    67,    67,    67,    68,    68,    68,    68,    69,    70,
      70,    70,    71,    71,    71,    71,    71,    71,    72,    73,
      73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     8,     0,     4,
       1,     6,     3,     7,     3,     3,     2,     3,     3,     0,
       2,     3,     3,     0,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     2,     0,
       2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: START_ID cmpdstmt END_ID  */
#line 69 "lang.y"
                                   {printf("\n------------------------------------------- start> cmpdstmt <end\n");}
#line 1340 "y.tab.c"
    break;

  case 3: /* declaration: type ID  */
#line 71 "lang.y"
                       {printf("\n------------------------------------------- type ID\n");}
#line 1346 "y.tab.c"
    break;

  case 7: /* cmpdstmt: stmt  */
#line 75 "lang.y"
                {printf("\n------------------------------------------- stmt\n");}
#line 1352 "y.tab.c"
    break;

  case 8: /* cmpdstmt: stmt cmpdstmt  */
#line 75 "lang.y"
                                                                                                  {printf("\n------------------------------------------- stmt cmpdstmt\n");}
#line 1358 "y.tab.c"
    break;

  case 9: /* stmt: simplstmt NEW_LINE  */
#line 77 "lang.y"
                           {printf("\n------------------------------------------- simplstmt NEW_LINE\n");}
#line 1364 "y.tab.c"
    break;

  case 10: /* stmt: structstmt  */
#line 77 "lang.y"
                                                                                                                        {printf("\n------------------------------------------- structstmt\n");}
#line 1370 "y.tab.c"
    break;

  case 11: /* simplstmt: assignstmt  */
#line 79 "lang.y"
                        {printf("\n------------------------------------------- assignstmt\n");}
#line 1376 "y.tab.c"
    break;

  case 12: /* simplstmt: iostmt  */
#line 79 "lang.y"
                                                                                                         {printf("\n------------------------------------------- iostmt\n");}
#line 1382 "y.tab.c"
    break;

  case 13: /* simplstmt: declaration  */
#line 79 "lang.y"
                                                                                                                                                                                           {printf("\n------------------------------------------- declaration\n");}
#line 1388 "y.tab.c"
    break;

  case 14: /* structstmt: ifstmt  */
#line 81 "lang.y"
                     {printf("\n------------------------------------------- ifstmt\n");}
#line 1394 "y.tab.c"
    break;

  case 17: /* ifstmt: IN_CASE boolean_condition COLON OPEN_CURLY_BRACKET NEW_LINE cmpdstmt CLOSED_CURLY_BRACKET tempIf  */
#line 83 "lang.y"
                                                                                                           {printf("\n------------------------------------------- IN_CASE boolean_condition: {cmpdstmt}\n");}
#line 1400 "y.tab.c"
    break;

  case 24: /* assignstmt: ID ATRIB expression  */
#line 93 "lang.y"
                                  {printf("\n------------------------------------------- ID ATRIB expression\n");}
#line 1406 "y.tab.c"
    break;

  case 25: /* assignstmt: ID ATRIB iostmt  */
#line 93 "lang.y"
                                                                                                                                     {printf("\n------------------------------------------- ID ATRIB iostmt\n");}
#line 1412 "y.tab.c"
    break;

  case 42: /* condition: expression GT expression  */
#line 109 "lang.y"
                                     {printf("\n------------------------------------------- expression > expression\n");}
#line 1418 "y.tab.c"
    break;

  case 43: /* condition: expression GE expression  */
#line 110 "lang.y"
                                  {printf("\n------------------------------------------- expression >= expression\n");}
#line 1424 "y.tab.c"
    break;

  case 44: /* condition: expression LT expression  */
#line 111 "lang.y"
                                  {printf("\n------------------------------------------- expression < expression\n");}
#line 1430 "y.tab.c"
    break;

  case 45: /* condition: expression LE expression  */
#line 112 "lang.y"
                                  {printf("\n------------------------------------------- expression <= expression\n");}
#line 1436 "y.tab.c"
    break;

  case 46: /* condition: expression EQ expression  */
#line 113 "lang.y"
                                  {printf("\n------------------------------------------- expression == expression\n");}
#line 1442 "y.tab.c"
    break;

  case 47: /* condition: expression NE expression  */
#line 114 "lang.y"
                                  {printf("\n------------------------------------------- expression != expression\n");}
#line 1448 "y.tab.c"
    break;


#line 1452 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 121 "lang.y"

int yyerror(char *s)
{	
	printf("%s\n",s);
}

extern FILE *yyin;

int main(int argc, char **argv)
{
	if(argc>1) yyin :  fopen(argv[1],"r");
	if(argc>2 && !strcmp(argv[2],"-d")) yydebug: 1;
	if(!yyparse()) fprintf(stderr, "\tO.K.\n");
}
