#include "Parser.h"

Parser* initParser(Lexer* lex)
{
    Parser* par = (Parser*)malloc(sizeof(Parser));
    par->tokens_t = lex->tokens;
    par->numOfTokens = lex->tokensIndex;
    par->fileName = (char*)malloc(sizeof(char) * strlen(lex->fileName));
    strcpy(par->fileName, lex->fileName);
    return par;
}

void freeParser(Parser* par)
{
    free(par);
}
