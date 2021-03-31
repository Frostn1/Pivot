#include "Parser.h"

PI_Parser* initializeParser(PI_TokenList* list) {
	PI_Parser* par = (PI_Parser*)malloc(sizeof(PI_Parser));
	par->tokenList = list;
	par->tokenCounter = 0;
	par->currentToken = par->tokenList->tokens[par->tokenCounter];
	par->definedNamesCounter = 0;
	par->definedNames = (char**)malloc(sizeof(char));
	for (int i = 0; i < par->tokenList->tokenCount; i++) {
		if (par->tokenList->tokens[i]->id == T_UserMade)
			addToArray(par, par->tokenList->tokens[i]);
	}
	return par;
}

void freeParser(PI_Parser* par) {	
	if (par != null)
	{
		if (par->tokenList != null)
			freeTokenList(par->tokenList);
		free(par);
	}
}
