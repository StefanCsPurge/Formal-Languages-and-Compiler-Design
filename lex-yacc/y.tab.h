/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
