/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    TYPE_INT = 258,
    TYPE_STR = 259,
    COMMENT = 260,
    ASSIGNMENT = 261,
    INTEGER = 262,
    STRING = 263,
    EXIT = 264,
    SEMICOLON = 265,
    COLON = 266,
    INCLUDE = 267,
    IDENT = 268,
    PLUS = 269,
    MINUS = 270,
    STAR = 271,
    SLASH = 272,
    MOD = 273,
    IF = 274,
    WHILE = 275,
    ELSE = 276,
    OPEN_SCOPE = 277,
    CLOSE_SCOPE = 278,
    OUTPUT = 279,
    OUTPUTC = 280,
    INPUT = 281,
    INPUTC = 282,
    ST = 283,
    GT = 284,
    EQUAL = 285,
    NEQUAL = 286,
    SEQUAL = 287,
    GEQUAL = 288
  };
#endif
/* Tokens.  */
#define TYPE_INT 258
#define TYPE_STR 259
#define COMMENT 260
#define ASSIGNMENT 261
#define INTEGER 262
#define STRING 263
#define EXIT 264
#define SEMICOLON 265
#define COLON 266
#define INCLUDE 267
#define IDENT 268
#define PLUS 269
#define MINUS 270
#define STAR 271
#define SLASH 272
#define MOD 273
#define IF 274
#define WHILE 275
#define ELSE 276
#define OPEN_SCOPE 277
#define CLOSE_SCOPE 278
#define OUTPUT 279
#define OUTPUTC 280
#define INPUT 281
#define INPUTC 282
#define ST 283
#define GT 284
#define EQUAL 285
#define NEQUAL 286
#define SEQUAL 287
#define GEQUAL 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "scanner.y"
int i; char c[30];

#line 126 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
