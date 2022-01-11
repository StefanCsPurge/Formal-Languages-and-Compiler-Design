%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YYDEBUG 1 
int yylex();
int yyerror(char *s);
%}
%token START_ID
%token END_ID

%token AND
%token ARRAY
%token ELSE
%token FOR
%token FOR_FROM
%token INTEGER
%token IN_CASE
%token OR
%token READ_VAL
%token STRING
%token WHILE
%token DIVIDES
%token INCREMENT
%token SHOW

%token ID
%token CONST

%token ATRIB
%token EQ
%token NE
%token LE
%token GE 
%token LT
%token GT
%token NOT 
%token DOT 

%left '+' '-' '*' '/'

%token PLUS 
%token MINUS
%token DIV 
%token MOD 
%token MUL 

%token OPEN_CURLY_BRACKET
%token CLOSED_CURLY_BRACKET 
%token OPEN_ROUND_BRACKET
%token CLOSED_ROUND_BRACKET
%token OPEN_RIGHT_BRACKET
%token CLOSED_RIGHT_BRACKET

%token NEW_LINE
%token COMMA 
%token SEMI_COLON
%token COLON
%token SPACE

%left OR
%left AND
%left NOT

%start program 

%%
program : START_ID cmpdstmt END_ID {printf("\n------------------------------------------- start> cmpdstmt <end\n");}
	     ;
declaration :  type ID {printf("\n------------------------------------------- type ID\n");}
	    ;
type :  INTEGER | STRING | ARRAY
	   ;
cmpdstmt : stmt {printf("\n------------------------------------------- stmt\n");} | stmt cmpdstmt {printf("\n------------------------------------------- stmt cmpdstmt\n");}
	 ;
stmt :  simplstmt NEW_LINE {printf("\n------------------------------------------- simplstmt NEW_LINE\n");} | structstmt {printf("\n------------------------------------------- structstmt\n");}
     ;
simplstmt :  assignstmt {printf("\n------------------------------------------- assignstmt\n");} | iostmt {printf("\n------------------------------------------- iostmt\n");} | declaration {printf("\n------------------------------------------- declaration\n");}
	 ; 
structstmt :  ifstmt {printf("\n------------------------------------------- ifstmt\n");} | whilestmt | forstmt
	   ;
ifstmt :  IN_CASE boolean_condition COLON OPEN_CURLY_BRACKET NEW_LINE cmpdstmt CLOSED_CURLY_BRACKET tempIf {printf("\n------------------------------------------- IN_CASE boolean_condition: {cmpdstmt}\n");}
       ;
tempIf : /*Empty*/ | ELSE OPEN_CURLY_BRACKET cmpdstmt CLOSED_CURLY_BRACKET | NEW_LINE
       ;
forstmt :  FOR forheader COLON OPEN_CURLY_BRACKET cmpdstmt CLOSED_CURLY_BRACKET
       ;	
forheader :  ID FOR_FROM ID
	  ;
whilestmt :  WHILE boolean_condition COLON OPEN_CURLY_BRACKET NEW_LINE cmpdstmt CLOSED_CURLY_BRACKET
	  ;
assignstmt :  ID ATRIB expression {printf("\n------------------------------------------- ID ATRIB expression\n");} | ID ATRIB iostmt {printf("\n------------------------------------------- ID ATRIB iostmt\n");}
	   ;
expression : arithmetic2 arithmetic1
	   ;
arithmetic1 : PLUS arithmetic2 arithmetic1 | MINUS arithmetic2 arithmetic1 | /*Empty*/
	    ;
arithmetic2 : multiply2 multiply1
	    ;
multiply1 : MUL multiply2 multiply1 | DIV multiply2 multiply1 | /*Empty*/ 
	  ;
multiply2 : OPEN_ROUND_BRACKET expression CLOSED_ROUND_BRACKET | CONST | ID | IndexedIdentifier
	  ;
IndexedIdentifier :  ID OPEN_RIGHT_BRACKET CONST CLOSED_RIGHT_BRACKET
		  ;
iostmt :  READ_VAL OPEN_ROUND_BRACKET type CLOSED_ROUND_BRACKET | SHOW OPEN_ROUND_BRACKET ID CLOSED_ROUND_BRACKET | SHOW OPEN_ROUND_BRACKET CONST CLOSED_ROUND_BRACKET
      ; 
condition : expression GT expression {printf("\n------------------------------------------- expression > expression\n");} |
	 expression GE expression {printf("\n------------------------------------------- expression >= expression\n");} | 
	 expression LT expression {printf("\n------------------------------------------- expression < expression\n");} |
	 expression LE expression {printf("\n------------------------------------------- expression <= expression\n");} | 
	 expression EQ expression {printf("\n------------------------------------------- expression == expression\n");} |
	 expression NE expression {printf("\n------------------------------------------- expression != expression\n");}
	;
boolean_condition : condition boolean_cond_temp
		  ;
boolean_cond_temp : /*Empty*/ | AND boolean_condition | OR boolean_condition
		 ; 

%%
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