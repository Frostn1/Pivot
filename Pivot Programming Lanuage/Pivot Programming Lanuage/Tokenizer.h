#define _CRT_SECURE_NO_WARNINGS
#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <stdio.h>
#include <stdlib.h>	
#include "KeyWord.h"
#define MAXLINES 256
#define MAXTOKENS 10


//Main functions
void Process(char* fileName);

//Tokenize
int Tokenize(char* rawCode, unsigned long size);

//Errors
void Throw(char* errorType, char* errorMsg, int row, int col);
//Helpers

//File
unsigned long fsize(FILE* file1);
char* Read(FILE* file);
FILE* OpenFile(char* fileName);

//String
char See(char* code, int index);
char PeekS(char* code, int index, int appli);
#endif // !TOKENIZER_H
