#include "ConInPost.h"

char** Convert(char** exp, int size)
{
	Stack* s = (Stack*)malloc(sizeof(Stack));
	InitStack(s);
	char** buffer = (char**)malloc(sizeof(exp));
	int bufferCounter = 0;
	for (int i = 0; i < size; i++)
	{
		buffer[bufferCounter] = (char*)malloc(sizeof(exp[i]));
		if (!isOperator1(exp[i]))
		{
			buffer[bufferCounter++] = exp[i];
		}
		else
		{
			if (isEmpty(s))
			{
				Push(s, exp[i]);
			}
			else if (isHigherPrio(exp[i], Peek(s)))
			{
				Push(s, exp[i]);
			}
			else
			{
				buffer[bufferCounter++] = Pop(s);
				Push(s,exp[i]);
			}
		}
	}	
	if (!isEmpty(s))
	{
		int size_f = s->sp;
		for (int i = 0; i < size_f; i++)
		{
			buffer[bufferCounter] = (char*)malloc(sizeof(exp[i]));
			buffer[bufferCounter++] = Pop(s);
		}
	}
    return buffer;
}

int isHigherPrio(char* firstOp, char* secOp)
{
	if ((firstOp[0] == '*' || firstOp[0] == '/') && (secOp[0] == '+' || secOp[0] == '-'))
	{
		return 1;
	}
	else if((firstOp[0] == '+' || firstOp[0] == '-') && (secOp[0] == '*' || secOp[0] == '/'))
	{
		return 0;
	}
	return 0;
}


int isOperator1(char tempExp[])
{
	
	
	if (tempExp[0] != '+' && tempExp[0] != '-' && tempExp[0] != '*' && tempExp[0] != '/')
	{
		return 0;
	}
	
	return 1;
}
