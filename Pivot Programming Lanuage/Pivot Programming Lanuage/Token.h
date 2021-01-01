#ifndef TOKEN_H
#define TOKEN_H

typedef struct TOKEN
{
	char* self;
	unsigned int row;
	unsigned int col;
}Token;

Token* InitToken(char* self, unsigned int row, unsigned int col);
#endif // !TOKEN_H

