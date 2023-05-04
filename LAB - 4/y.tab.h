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
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    DOUBLE = 260,                  /* DOUBLE  */
    CHAR = 261,                    /* CHAR  */
    STATIC = 262,                  /* STATIC  */
    ID = 263,                      /* ID  */
    INCLUDE = 264,                 /* INCLUDE  */
    HEADER = 265,                  /* HEADER  */
    MAIN = 266,                    /* MAIN  */
    DO = 267,                      /* DO  */
    WHILE = 268,                   /* WHILE  */
    IF = 269,                      /* IF  */
    ELSE = 270,                    /* ELSE  */
    FOR = 271,                     /* FOR  */
    BOOL = 272,                    /* BOOL  */
    BREAK = 273,                   /* BREAK  */
    INC = 274,                     /* INC  */
    DEC = 275,                     /* DEC  */
    STRLIT = 276,                  /* STRLIT  */
    VNUM = 277,                    /* VNUM  */
    LT = 278,                      /* LT  */
    GT = 279,                      /* GT  */
    GTE = 280,                     /* GTE  */
    LTE = 281,                     /* LTE  */
    EQ = 282,                      /* EQ  */
    NE = 283,                      /* NE  */
    OR = 284,                      /* OR  */
    AND = 285,                     /* AND  */
    LNOT = 286,                    /* LNOT  */
    SCOMB = 287,                   /* SCOMB  */
    ECOMB = 288,                   /* ECOMB  */
    SSQB = 289,                    /* SSQB  */
    ESQB = 290,                    /* ESQB  */
    SCURB = 291,                   /* SCURB  */
    ECURB = 292                    /* ECURB  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define FLOAT 259
#define DOUBLE 260
#define CHAR 261
#define STATIC 262
#define ID 263
#define INCLUDE 264
#define HEADER 265
#define MAIN 266
#define DO 267
#define WHILE 268
#define IF 269
#define ELSE 270
#define FOR 271
#define BOOL 272
#define BREAK 273
#define INC 274
#define DEC 275
#define STRLIT 276
#define VNUM 277
#define LT 278
#define GT 279
#define GTE 280
#define LTE 281
#define EQ 282
#define NE 283
#define OR 284
#define AND 285
#define LNOT 286
#define SCOMB 287
#define ECOMB 288
#define SSQB 289
#define ESQB 290
#define SCURB 291
#define ECURB 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
