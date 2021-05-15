#include "../header/token.h"

void pushToken(PIV_TOKEN_LIST* tokenList, PIV_TOKEN* token) {
    tokenList->tokenList = (PIV_TOKEN**)realloc(tokenList->tokenList,sizeof(PIV_TOKEN)*tokenList->amount + sizeof(PIV_TOKEN));
    tokenList->tokenList[tokenList->amount] = (PIV_TOKEN*)malloc(sizeof(PIV_TOKEN));
    tokenList->tokenList[tokenList->amount++] = token;
}