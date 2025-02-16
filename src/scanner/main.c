#include <stdio.h>
#include "token.h"

extern int yylex();
extern FILE* yyin;
extern char* yytext;

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Uso: %s archivo.mus\n", argv[0]);
        return 1;
    }

    FILE* file = fopen(argv[1], "r");
    if (!file) {
        printf("No se pudo abrir el archivo %s\n", argv[1]);
        return 1;
    }

    yyin = file;
    int token;
    
    printf("Análisis léxico del archivo: %s\n", argv[1]);
    printf("=====================================\n");
    
    while ((token = yylex())) {
        printf("Token: %-20s | Texto: %s\n", token_str(token), yytext);
    }
    
    printf("=====================================\n");
    printf("Fin del análisis léxico\n");

    fclose(file);
    return 0;
} 