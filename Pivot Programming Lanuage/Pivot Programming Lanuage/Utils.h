#define _CRT_SECURE_NO_WARNINGS

#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>


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
char* Slice(char* original, int startIndex, int endIndex);
#endif // !UTILS_H
