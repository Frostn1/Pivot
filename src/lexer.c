#include "../header/lexer.h"
PIV_LEXER* intLexer(const char* code) {
    PIV_LEXER* lex = (PIV_LEXER*)malloc(sizeof(PIV_LEXER));
    lex->src = (char*)malloc(sizeof(char)*strlen(code)+sizeof(char));
    strcpy(lex->src,code);
    lex->srcSize = strlen(lex->src);
    lex->c = lex->src[0];
    lex->index = -1;
    lex->rowIndex = 1;
    lex->columnIndex = 1;
    return lex;
}

char advance(PIV_LEXER* lex) {
    // Work on line and column error handle
    return lex->c = lex->src[++lex->index];
}

char show(PIV_LEXER* lex) {
    return lex->src[lex->index];
}
char peek(PIV_LEXER* lex) {
    return lex->src[lex->index + 1];
}

char peekAhead(PIV_LEXER* lex) {
    return lex->src[lex->index + 2];
}

PIV_TOKEN_LIST* lexify(PIV_LEXER* lex) {
    PIV_TOKEN_LIST* tokenList = (PIV_TOKEN_LIST*)malloc(sizeof(PIV_TOKEN_LIST));
    tokenList->amount = 0;
    tokenList->tokenList = (PIV_TOKEN**)malloc(sizeof(PIV_TOKEN));
    char* currentString = (char*)malloc(sizeof(char));
    while(lex->index < lex->srcSize) {
        while(isSpace(show(lex))) advance(lex);
        PIV_TOKEN* newToken = (PIV_TOKEN*)malloc(sizeof(PIV_TOKEN));
        if(isalpha(show(lex))) {
            while(isIdentifier(advance(lex))) push(currentString, show(lex));
            newToken->name = (char*)malloc(sizeof(char)*strlen(IDEN));
            strcpy(newToken->name, IDEN);
            
        } else if(isnumeric(show(lex))) {
            while(isnumeric(advance(lex))) push(currentString, show(lex));
            newToken->name = (char*)malloc(sizeof(char)*strlen(NUM));
            strcpy(newToken->name, NUM);
           
        } else {
            while(!isIdentifier(advance(lex))) push(currentString, show(lex));
            newToken->name = (char*)malloc(sizeof(char)*strlen(MAL));
            strcpy(newToken->name, MAL);
            
        }
        newToken->value = (char*)malloc(sizeof(char)*strlen(currentString));
        strcpy(newToken->value, currentString);
        pushToken(tokenList,newToken);
    }
    return tokenList;
}