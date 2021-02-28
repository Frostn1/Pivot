#define _CRT_SECURE_NO_WARNINGS
#ifndef LEXER_T
#define LEXER_T

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../Token/Token.h"
//#include "../Token/KnownTypes.h"
#define null NULL

typedef struct PI_LEXER_86 {

	int lineCounter; // Current Line
	int columnCounter; // Current Column
	int codeBlockCounter; // Current index in the code block
	int currentWordLength; // Keeps track of the current word length for catting purposes
	long int fileSize; // Keep track of file size
	char currentCharacter; // Current character we are lexing
	char* currentWord; // Current Word that is being lexed which has not been identefied yet
	char* codePath; // Code Path used for error throwing ? { Might not actually need this }
	char* codeBlock; // Full code block to keep drawing data from
	// Switch to char32_t later, currently broken

	PI_TokenList* tokenList;
	

}PI_Lexer;

PI_Lexer* initializeLexer(char* path);
PI_TokenList* startLexer(char* path);
void advanceLexer(PI_Lexer* lex);
void checkTokens(PI_Lexer* lex); 
void cleanBuffer(PI_Lexer* lex, char* F_Name, char* F_Value, int F_Id); 
void freeLexer(PI_Lexer* lex, int freeTokensFlag);
#endif LEXER_T