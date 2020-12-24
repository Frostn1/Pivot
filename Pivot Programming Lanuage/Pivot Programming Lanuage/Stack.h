#define _CRT_SECURE_NO_WARNINGS

#ifndef STACK_H
#define STACK_H
#include <string.h>

#define STACKSIZE 2048

typedef struct Stack
{
	char* cap[STACKSIZE];//Allocate memory for the memory I get in the Push function
	int sp;
	int bp;
}Stack;

void Push(Stack* s,char arg[]);
char* Pop(Stack* s);
char* Peek(Stack* s);
int isEmpty(Stack* s);
void InitStack(Stack* s);
#endif // !STACK_H

