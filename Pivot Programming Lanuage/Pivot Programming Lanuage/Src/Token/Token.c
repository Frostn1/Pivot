#include "Token.h"

PI_Token* initializeToken(char* T_Name, char* T_Value, int T_Id, int T_Column, int T_Line)
{
	PI_Token* newToken = (PI_Token*)malloc(sizeof(PI_Token));
	newToken->name = (char*)malloc(strlen(T_Name) * sizeof(char));
	strcpy(newToken->name, T_Name);
	if (T_Value != null)
	{
		newToken->value = (char*)malloc(strlen(T_Value) * sizeof(char));
		strcpy(newToken->value, T_Value);
	}
	newToken->id = T_Id;
	newToken->column = T_Column;
	newToken->line = T_Line;
	return newToken;
}

PI_TokenList* initializeTokenList()
{
	PI_TokenList* list = (PI_TokenList*)malloc(sizeof(PI_TokenList));
	list->tokenCount = 0;
	list->tokens = (PI_Token**)malloc(sizeof(PI_Token));
	return list;
}

void addTokenToList(PI_TokenList* list, PI_Token* token)
{
	list->tokens[list->tokenCount] = (PI_Token*)malloc(sizeof(PI_Token));
	list->tokens[list->tokenCount++] = token;
	list->tokens = (PI_Token**)realloc(list->tokens,sizeof(PI_Token)*(list->tokenCount+1));
}

void freeToken(PI_Token* token)
{
	if (token != null)
	{
		//if (token->name != null)
			//free(token->name);
		//if (token->value != null)
			//free(token->value);
		free(token);
	}
	
	
}

void freeTokenList(PI_TokenList* tokenList)
{
	for (int i = 0; i < tokenList->tokenCount; i++)
		freeToken(tokenList->tokens[i]);	
	free(tokenList->tokens);
	free(tokenList);
}
