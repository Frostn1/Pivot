

#ifndef LEXER_H
#define LEXER_H

#include "Token.h"

typedef struct LEXER
{
	char* raw;
	char* currentToke;
	char current;

	unsigned int long rawLength;
	unsigned int tokeIndex;
	unsigned int rawIndex;
	unsigned int tokensIndex;

	unsigned int currentRow;
	unsigned int currentCol;
	
	
	Token** tokens;
	char* fileName;
}Lexer;

Lexer* initLexer(char* raw, char* filePath);

void freeLexer(Lexer* lex);
void Advance(Lexer* lex);
void SkipWhiteSpace(Lexer* lex);
void PrintLexer(Lexer* lex);
#endif // !LEXR_H

