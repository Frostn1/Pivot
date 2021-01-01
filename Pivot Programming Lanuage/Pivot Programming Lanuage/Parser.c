#include "Parser.h"

Parser* initParser(Token** tokens)
{
    Parser* par = (Parser*)malloc(sizeof(Parser));
    par->tokens_t = tokens;
    return par;
}
