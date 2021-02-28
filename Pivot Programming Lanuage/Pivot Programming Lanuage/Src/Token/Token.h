#ifndef TOKEN_H
#define TOKEN_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define null NULL
typedef struct PI_TOKEN_86 {
	int line; // Token's Line : int
	int column; // Token's Column : int
	int id; // Token's Id : int
	
	char* name; // Token's Name : array of chars
	char* value; // Token's value ( not always ) : array of chars
}PI_Token;

typedef struct PI_TOKEN_LIST_86 {
	PI_Token** tokens; // List of tokens held by the struct : array of pointers
	int tokenCount; // Number of tokens currently present in the array : int
}PI_TokenList;

PI_Token* initializeToken(char* T_Name, char* T_Value, int T_Id, int T_Column, int T_Line);
PI_TokenList* initializeTokenList();
void addTokenToList(PI_TokenList* list, PI_Token* token);
void freeToken(PI_Token* token);
void freeTokenList(PI_TokenList* tokenList);
#endif // !TOKEN_H
