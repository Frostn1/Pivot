#include "CalcPost.h"
char** Calculate(char** exp)
{
	char* operand1;
	char* operand2;

	int op1;
	int op2;

	float op1f;
	float op2f;

	int op1Flag;//0 - Int, 1 - Float
	int op2Flag;//0 - Int, 1 - Float

	float opResult;

	Stack* s = (Stack*)malloc(sizeof(Stack));
	char* buffer = (char*)malloc(FLOATMAX*sizeof(char));
	char** result = (char*)malloc(sizeof(exp));
	for (int i = 0; i < sizeof(exp); i++)
	{
		if (isOperator(exp[i]))
		{
			op1 = 0;
			op2 = 0;
			op1f = 0;
			op2f = 0;
			operand1 = Pop(s);
			operand2 = Pop(s);
			if (strchr(operand1, '.'))
			{
				op1f = toFloat(operand1);
				op1Flag = 1;
			}
			else
			{
				op1 = toInt(operand1);
			}
			if (strchr(operand2, '.'))
			{
				op2f = toFloat(operand2);
				op2Flag = 1;
			}
			else
			{
				op2 = toInt(operand1);
			}

			opResult = op1 + op2 + op1f + op2f;
			gcvt(opResult, sizeof(opResult) / sizeof(float), buffer);
			Push(s, buffer);
		}
		else
		{
			Push(s, exp[i]);
		}
		
	}
	return NULL;
}

int isOperator(char tempExp[])
{
	if (sizeof(tempExp) / sizeof(tempExp[0]) != 1)
	{
		return 0;
	}
	else
	{
		if (tempExp[0] != '+' && tempExp[0] != '-' && tempExp[0] != '*' && tempExp[0] != '/')
		{
			return 0;
		}
	}
	return 1;
}

float toFloat(char tempExp[])
{
	return atof(tempExp);
}

int toInt(char tempExp[])
{
	return atoi(tempExp);
}
