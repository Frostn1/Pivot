#ifndef PARSER_H
#define PARSER_H
#include "Token.h"

typedef struct PARSER
{
	Token** tokens_t;
}Parser;

Parser* initParser(Token** tokens);
#endif // !PARSER_H
