
#ifndef TOOLING_H
#define TOOLING_H
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <io.h>
#include <string.h>
#define DARK_GRAY 30
#define RED 31
#define WHITE 37
#define LIGHT_GREEN 32
#define ORANGE 33
#define BLUE 34
#define LIGHT_PURPLE 35
#define LIGHT_BLUE 36
#define GRAY 38

#define ERROR RED
#define NATRUAL GRAY
#define BOLD WHITE

void c(int color);
int isIdentifier(char let);
void push(char* string, char letter);
int isSpace(char let);
void throwError(char* message);
char* readFile(char* filePath);

#endif // !TOOLING_H