#ifndef PARSER_H
#define PARSER_H

#include "Lexer.h"
typedef struct PARSER
{
	Token** tokens_t;
	unsigned int currentToken;
	unsigned int numOfTokens;
}Parser;

Parser* initParser(Lexer* lex);
void freeParser(Parser* par);
#endif // !PARSER_H
