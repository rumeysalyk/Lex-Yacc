#include <stdio.h>
#include "scanner.h"

extern int yylex();
extern int yylineno;
extern char *yytext;

char *names[] =
    {NULL,
     "TYPE_INT",
     "TYPE_STR",
     "COMMENT",
     "ASSIGNMENT",
     "INTEGER",
     "STRING",
     "EXIT",
     "SEMICOLON",
     "COLON",
     "INCLUDE ",
     "IDENT ",
     "PLUS ",
     "MINUS ",
     "STAR ",
     "SLASH ",
     "MOD ",
     "IF ",
     "WHILE ",
     "OPEN_SCOPE ",
     "CLOSE_SCOPE ",
     "OUTPUT",
     "OUTPUTC",
     "INPUT",
     "INPUTC"};

int main()
{
    int token;

    while ((token = yylex()))
    {
        printf("%d\t%s\t\t%s\n", token, names[token], yytext);
    }
    return 0;
}