#include "Lexer.h"

Lexer* initLexer(char* raw)
{
	Lexer* lex = (Lexer*)malloc(sizeof(Lexer));
	lex->rawIndex = 0;
	lex->raw = (char*)malloc(sizeof(raw));
	lex->currentToke = (char*)malloc(sizeof(char) * TOKENMAXLENGTH);
	lex->tokeIndex = 0;
	strcpy(lex->raw, raw);
	lex->current = lex->raw[lex->rawIndex];
	return lex;
}

void Advance(Lexer* lex)
{
	lex->current = lex->raw[++lex->rawIndex];

}
void SkipWhiteSpace(Lexer* lex)
{
	while (lex->raw[lex->rawIndex] == ' ')
		lex->current = lex->raw[lex->rawIndex++];
}