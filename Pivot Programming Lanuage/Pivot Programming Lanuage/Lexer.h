#ifndef LEXER_H
#define LEXER_H

#include "Token.h"
#define TOKENMAXLENGTH 20
typedef struct LEXER
{
	char* raw;
	char* currentToke;
	unsigned int tokeIndex;
	char current;
	unsigned int rawIndex;
	
	Token* tokens;
}Lexer;

Lexer* initLexer(char* raw);

void Advance(Lexer* lex);
void SkipWhiteSpace(Lexer* lex);
#endif // !LEXR_H

