#ifndef PARSER_H
#define PARSER_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Token/Token.h"
typedef struct PI_PARSER_86 {

	int tokenCounter;
	int definedNamesCounter;
	char** definedNames;
	PI_Token* currentToken;
	PI_TokenList* tokenList;

}PI_Parser;
PI_Parser* initializeParser(PI_TokenList* list);
void freeParser(PI_Parser* par);
#endif // !PARSER_H
