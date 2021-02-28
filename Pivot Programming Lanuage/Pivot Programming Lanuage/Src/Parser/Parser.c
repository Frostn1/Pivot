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

void identifyTerms(PI_Parser* par) {
	while (par->tokenCounter < par->tokenList->tokenCount) {
		switch (par->currentToken->id) {
			case T_Func: {
				advanceParser(par);
				if (par->currentToken->id == T_UserMade) {
					// Good
				}
				else {
					// Bad
					printf("error : missing function name at %d %d", par->currentToken->line, par->currentToken->column);
					freeParser(par);
					exit(1);

				}
				break;
			}
			case T_UserMade: {
				//advanceParser(par);
				if (isDefined(par, par->currentToken->value)) {
					// Good
				}
				else {
					// Bad
					printf("error : usermade undefined at %d %d", par->currentToken->line, par->currentToken->column);
					freeParser(par);
					exit(1);
				}
				break;
			}
			default: {
				printf("default\n");
				break;
			}
		}
	}
		
			
		
}


void advanceParser(PI_Parser* par) {
	par->currentToken = par->tokenList->tokens[++par->tokenCounter];
}

int isDefined(PI_Parser* par, char* name)
{
	for (int i = 0; i < par->definedNamesCounter; i++)
	{
		if (!strcmp(par->definedNames[i], name))
			return 1;
	}
	return 0;
}

void addToArray(PI_Parser* par, PI_Token* currentToken)
{
	par->definedNames = (char**)realloc(par->definedNames, (par->definedNamesCounter + 1) * sizeof(char));
	par->definedNames[par->definedNamesCounter] = (char*)malloc(strlen(currentToken->value) * sizeof(char));
	strcpy(par->definedNames[par->definedNamesCounter++], currentToken->value);
}

void freeParser(PI_Parser* par) {	
	if (par != null)
	{
		if (par->tokenList != null)
			freeTokenList(par->tokenList);
		free(par);
	}
}
