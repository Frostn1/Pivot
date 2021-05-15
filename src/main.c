#include <stdio.h>
#include "../header/lexer.h"
#include "../header/token.h"
#include "../header/tooling.h"

int main(int argc, char** argv) {
    if(argc < 2) {
        c(ERROR);
        printf("Usage ");
        c(BOLD);
        printf(": ");
        printf("pi [OPTION]... PATTERNS [FILE]...\nTry 'pi --help' for more information.\n");
        c(NATRUAL);
        return 1;
    }
    
    PIV_LEXER* lex = intLexer(readFile(argv[argc - 1]));
    PIV_TOKEN_LIST* tokenList = lexify(lex);
    printf("\nToken List:\n");
    for(int i = 0; i < tokenList->amount; i++) {
        printf("%s : %s\n", tokenList->tokenList[i]->name, tokenList->tokenList[i]->value);
    }
    return 0;
}