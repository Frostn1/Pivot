#define _CRT_SECURE_NO_WARNINGS
#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <stdio.h>
#include <stdlib.h>	
#include "KeyWord.h"
#include "Utils.h"
#define MAXLINES 256
#define MAXTOKENS 10
#define MAXPARAMSIZE 10
#define MAXVARNAMESIZE 20
//Main functions
void Process(char* fileName);

//Tokenize
int Tokenize(char* rawCode, unsigned long size);


#endif // !TOKENIZER_H
