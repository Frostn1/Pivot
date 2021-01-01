#include "Token.h"

Token* InitToken(char* self, unsigned int row, unsigned int col)
{
    Token* tk = (Token*)malloc(sizeof(Token));
	tk->self = (char*)malloc(sizeof(char) * TOKENMAXLENGTH);
	strcpy(tk->self, self);
	tk->col = col;
	tk->row = row;
    return tk;
}
