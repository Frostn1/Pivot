#include "../header/token.h"

void pushToken(PIV_TOKEN_LIST* tokenList, PIV_TOKEN* token) {
    tokenList->tokenList = (PIV_TOKEN**)realloc(tokenList->tokenList,sizeof(PIV_TOKEN)*tokenList->amount + sizeof(PIV_TOKEN));
    tokenList->tokenList[tokenList->amount] = (PIV_TOKEN*)malloc(sizeof(PIV_TOKEN));
    tokenList->tokenList[tokenList->amount++] = token;
}

void freeToken(PIV_TOKEN* toke) {
    free(toke->name);
    free(toke->value);
    free(toke);
}

void freeTokenList(PIV_TOKEN_LIST* tokenList) {
    for(int i = 0; i < tokenList->amount; i++) freeToken(tokenList->tokenList[i]);
    free(tokenList->tokenList);
    free(tokenList);
}