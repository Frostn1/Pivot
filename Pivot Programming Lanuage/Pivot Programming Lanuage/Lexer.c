#include "Lexer.h"

Lexer* initLexer(char* raw)
{
	Lexer* lex = (Lexer*)malloc(sizeof(Lexer));
	lex->tokens = (Token*)malloc(sizeof(Token) * TOKENMAXLENGTH * TOKENMAXLENGTH / 2);
	lex->rawIndex = 0;
	lex->raw = (char*)malloc(strlen(raw)*sizeof(char));
	lex->currentToke = (char*)malloc(sizeof(char) * TOKENMAXLENGTH);
	lex->tokeIndex = 0;
	strcpy(lex->raw, raw);
	lex->current = lex->raw[lex->rawIndex];
	lex->rawLength = strlen(lex->raw);
	lex->tokensIndex = 0;
	lex->currentCol = 0;
	lex->currentRow = 0;
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

void freeLexer(Lexer* lex)
{
	//free(lex->raw);
	free(lex->currentToke);
	for (int i = 0; i < lex->tokensIndex; i++)
	{
		free(lex->tokens[i]->self);
		free(lex->tokens[i]);
	}
	free(lex->tokens);
	free(lex);
}

void PrintLexer(Lexer* lex)
{
	for (int i = 0; i < lex->tokensIndex; i++)
	{
		printf("%s\t%d\t%d\n", lex->tokens[i]->self, lex->tokens[i]->row, lex->tokens[i]->col);
	}
}