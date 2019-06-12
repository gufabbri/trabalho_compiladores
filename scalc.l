%{

#include <stdio.h>
#include "header.h"
#include "scalc.tab.h"

extern int col;
#define YY_USER_ACTION col += strlen(yytext);

%}

%option yylineno

%%

[ \t]	 	{   }
[\n]		{ col = 0; }
"%%".*		{   }

"function"	{ return TOK_FUNCTION;}
"var"		{return TOK_VAR;}
"main"		{return TOK_MAIN;}
"isequal"	{return TOK_ISEQUAL;}
"isdiff"	{return TOK_DIFF;}
"end"           {return TOK_END;}
"if"            {return TOK_IF;}                 	
"while"         {return TOK_WHILE;}
"else"          {return TOK_ELSE;}
"for"           {return TOK_FOR;}
"and"           {return TOK_AND;}
"or"            {return TOK_OR;}
"not"           {return TOK_NOT;}
">="            {return TOK_GT;}
"<="            {return TOK_LT;}
">"             {return '>';}
"<"             {return '<';}
"/"		{return '/';}

"$"		{ return '$'; }
"add"		{ return TOK_ADD; }
"sub"		{ return TOK_SUB; }
"mult"		{ return TOK_MULT; }
"div"		{ return TOK_DIV; }
"="		{ return '='; }
"WRITE"		{ return TOK_WRITE; }
"READ"		{ return TOK_READ;}
"("		{ return '('; }
")"		{ return ')'; }
"-"		{ return '-';}

[0-9]+		{ yylval.args.constvalue = atoi(yytext); 
		  return INT; }

[0-9]+\.[0-9]+	{ yylval.args.constvalue = atof(yytext);
		  return DBL; 
		}


[a-zA-Z]+		{ yylval.args.varname = strndup(yytext, yyleng);
		  yylval.args.line = yylineno;
		  yylval.args.col = col - yyleng;
		  return VAR; 
		}

.		{ printf("Nao era esperado %s\n", yytext);
		  exit(1);
		}

%%


