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
void ResetString(char* str, int size);
int IsDataTypes(char* str);
int isIn(char chara, char* str);

//Char
int isSpecial(char chara);
int isOpe(char chara);

//Special
void ftoa(float n, char* res, int afterpoint);
int intToStr(int x, char str[], int d);
void reverse(char* str, int len);
#endif // !UTILS_H
