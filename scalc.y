%{

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

%}

%union {
	targs args;
	struct syntno *no;
}

%define parse.error verbose

%token PRINT TOK_FUNCTION TOK_VAR TOK_MAIN TOK_ISEQUAL TOK_DIFF TOK_END TOK_IF
TOK_WHILE TOK_ELSE TOK_FOR TOK_AND TOK_OR TOK_NOT TOK_GT TOK_LT TOK_ADD TOK_SUB TOK_MULT TOK_DIV TOK_WRITE TOK_READ
 
%token <args> INT DBL
%token <args> VAR

%type <no> stmts stmt arit term factor unary print expl terml fatl

%start program

%%

program : TOK_FUNCTION TOK_MAIN stmts TOK_END	{ print_symbols();
				  visitor_leaf_first(&($3), collapse_stmts);
				  visitor_leaf_first(&($3), declared_vars);
				  print_tree($3);
				}
		;

stmts	: stmt stmts	{ syntno *u = create_no('S', NO_STMTS, 2);
							  u->children[0] = $1;
							  u->children[1] = $2;
							  $$ = u;
							}
		| stmt 			{ syntno *u = create_no('s', NO_STMT, 1);
							  u->children[0] = $1;
							  $$ = u;
							}
		;


stmt	: TOK_VAR VAR '=' arit '$'		{ add_symbol($2.varname, $2.line, $2.col); 
							  syntno *u = create_no('A', NO_ATTR, 2);

							  syntno *uvar = create_no('V', NO_TOK, 0);
							  uvar->token_args = copy_targs($2);
							  u->children[0] = uvar;
							  u->children[1] = $4; 
							  $$ = u;
							} 
	| print				{ $$ = $1; }
	| TOK_IF '(' expl ')' stmts TOK_ELSE stmts TOK_END { syntno *u = create_no('X', NO_IF, 3);
							  u->children[0] = $3; 
							  u->children[1] = $5; 
							  u->children[2] = $7; 
							  $$ = u;
							}
	| TOK_FOR '(' arit '/' expl '/' arit ')' stmts TOK_END { syntno *u = create_no('P', NO_FOR, 4);
							  u->children[0] = $3; 
							  u->children[1] = $5; 
							  u->children[2] = $7; 
							  u->children[3] = $9; 
							  $$ = u;
							} 
	| TOK_WHILE '(' expl ')' stmts TOK_END           	{ syntno *u = create_no('P', NO_WHILE, 2);
							  u->children[0] = $3; 
							  u->children[1] = $5; 
							  $$ = u;
							}  
	| error				{ }
	;

expl 	: expl TOK_OR terml                              	{ syntno *u = create_no('P', NO_OR, 2);
							  u->children[0] = $1; 
							  u->children[1] = $3; 
							  $$ = u; 
							}
     	| terml                                 { $$ = $1; }
     	;

terml	: terml TOK_AND fatl { syntno *u = create_no('P', NO_AND, 2);
							  u->children[0] = $1; 
							  u->children[1] = $3; 
							  $$ = u; 
							} 
	| fatl                                   { $$ = $1; }
	;

fatl	: '(' expl ')' { $$ = $2; }
	| fatl TOK_GT arit                             	{ syntno *u = create_no('P', NO_GT, 2);
							  u->children[0] = $1; 
							  u->children[1] = $3; 
							  $$ = u; 
							}
	| fatl TOK_LT arit                                	{ syntno *u = create_no('P', NO_LT, 2);
							  u->children[0] = $1; 
							  u->children[1] = $3; 
							  $$ = u; 
							}
	| fatl '>' arit                                    	{ syntno *u = create_no('P', NO_MAIOR, 2);
							  u->children[0] = $1; 
							  u->children[1] = $3; 
							  $$ = u; 
							}
	| fatl '<' arit                                     	{ syntno *u = create_no('P', NO_MENOR, 2);
							  u->children[0] = $1; 
							  u->children[1] = $3; 
							  $$ = u; 
							}
	| fatl TOK_ISEQUAL arit                              	{ syntno *u = create_no('P', NO_IGUAL, 2);
							  u->children[0] = $1; 
							  u->children[1] = $3; 
							  $$ = u; 
							}
	| fatl TOK_DIFF arit                                  	{ syntno *u = create_no('P', NO_DIFF, 2);
							  u->children[0] = $1; 
							  u->children[1] = $3; 
							  $$ = u; 
							}
	| TOK_NOT fatl                                         	{ syntno *u = create_no('P', NO_NOT, 1);
							  u->children[0] = $2; 
							  $$ = u; 
							}
	| arit {$$ = $1;}
	;
 
print	: TOK_WRITE VAR '$'     		{ syntno *u = create_no('P', NO_PRNT, 0);
							  u->token_args = copy_targs($2);
							  $$ = u;
							}
 	| TOK_READ VAR '$'     		{ syntno *u = create_no('P', NO_PRNT, 0);
							  u->token_args = copy_targs($2);
							  $$ = u;
							}
        ;


arit	: arit TOK_ADD term		{ syntno *u = create_no('+', NO_ADD, 2);
							  u->children[0] = $1;
							  u->children[1] = $3;
							  $$ = u;
							}
		| arit TOK_SUB term		{ syntno *u = create_no('-', NO_SUB, 2);
							  u->children[0] = $1;
							  u->children[1] = $3;
							  $$ = u;
							}
		| term				{ $$ = $1; }
		;

term	: term TOK_MULT factor	{ syntno *u = create_no('*', NO_MULT, 2);
							  u->children[0] = $1;
							  u->children[1] = $3;
							  $$ = u;
							}
		| term TOK_DIV factor	{ syntno *u = create_no('/', NO_DIV, 2);
							  u->children[0] = $1;
							  u->children[1] = $3;
							  $$ = u;
							}
		| factor			{ $$ = $1; }
		;

factor	: '(' arit ')'		{ /*syntno *u = create_no('p', NO_PAR, 1);
							  u->children[0] = $2;
							  $$ = u;*/
							  $$ = $2;
							}
	| INT					{ syntno *u = create_no('I', NO_TOK, 0);
							  u->token_args = copy_targs($1);
							  u->dt = LT_INT;
							  $$ = u;
							}
	| DBL					{ syntno *u = create_no('D', NO_TOK, 0);
							  u->token_args = copy_targs($1);
							  u->dt = LT_FLOAT;
							  $$ = u;
							}
	| VAR					{ syntno *u = create_no('V', NO_TOK, 0);
							  u->token_args = copy_targs($1);
							  $$ = u;
							}
	| unary					{ $$ = $1; }
	;

unary	: '-' factor		{ syntno *u = create_no('-', NO_UNA, 1);
							  u->children[0] = $2;
							  $$ = u;
							}
		;

%%

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

