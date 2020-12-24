#include "Stack.h"

void Push(Stack* s,char arg[])
{
	
	s->cap[s->sp] = (char*)malloc(sizeof(char) * sizeof(arg)/sizeof(arg[0]));
	strcpy(s->cap[s->sp], arg);
	s->sp++;
	s->bp++;
}

char* Pop(Stack* s)
{
	s->sp--;
	s->bp--;
	char* retu = (char*)malloc(sizeof(s->cap[s->sp]));
	strcpy(retu, s->cap[s->sp]);
	free(s->cap[s->sp]);
	
	return retu;
}

char* Peek(Stack* s)
{
	char* retu = (char*)malloc(sizeof(s->cap[s->sp]));
	strcpy(retu, s->cap[s->sp-1]);
	return retu;
}


int isEmpty(Stack* s)
{
	return s->sp == 0 ? 1 : 0;
}

void InitStack(Stack* s)
{
	s->sp = 0;
	s->bp = 0;
}


