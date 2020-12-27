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
		if (!isOperator(exp[i]))
		{
			buffer[bufferCounter++] = exp[i];
		}
		else
		{
			if (isEmpty(s))
			{
				Push(s, exp[i]);
			}
			else if (exp[i][0] == OPEN_BRACKET)
			{
				Push(s, exp[i]);
			}
			else if (exp[i][0] == CLOSE_BRACKET)
			{
				while (Peek(s)[0] != OPEN_BRACKET)
				{
					buffer[bufferCounter++] = Pop(s);
				}
				Pop(s);
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
