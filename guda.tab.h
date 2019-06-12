/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_GUDA_TAB_H_INCLUDED
# define YY_YY_GUDA_TAB_H_INCLUDED
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
#line 23 "guda.y" /* yacc.c:1910  */

	targs args;
	struct syntno *no;

#line 87 "guda.tab.h" /* yacc.c:1910  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GUDA_TAB_H_INCLUDED  */
