#define _CRT_SECURE_NO_WARNINGS

#ifndef TOKEN_H
#define TOKEN_H

#include <stdlib.h>
#include <string.h>
#define TOKENMAXLENGTH 20 

typedef struct TOKEN
{
	char* self;
	unsigned int row;
	unsigned int col;
}Token;

Token* InitToken(char* self, unsigned int row, unsigned int col);
#endif // !TOKEN_H

