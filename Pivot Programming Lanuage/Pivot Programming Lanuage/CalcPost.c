#include "CalcPost.h"
Result* Calculate(char** exp,int size)
{
	char* operand1;
	char* operand2;

	int op1;
	int op2;
	
	float op1f;
	float op2f;

	float opResult;

	int len = 0;
	int temp;
	Stack* s = (Stack*)malloc(sizeof(Stack));
	InitStack(s);
	Result* capsule = (Result*)malloc(sizeof(Result));
	char* buffer = (char*)malloc(FLOATMAX * sizeof(char));
	char* result = (char*)malloc(STACKSIZE * sizeof(char));
	for (int i = 0; i < size; i++)
	{
		if (isOperator(exp[i]))
		{
			op1 = 0;
			op2 = 0;
			op1f = 0;
			op2f = 0;
			operand2 = Pop(s);
			operand1 = Pop(s);
			if (strchr(operand1, '.'))
			{
				op1f = toFloat(operand1);
			}
			else
			{
				op1 = toInt(operand1);
			}
			if (strchr(operand2, '.'))
			{
				op2f = toFloat(operand2);
			}
			else
			{
				op2 = toInt(operand2);
			}
			if (strcmp(exp[i], "+") == 0)
			{
				opResult = op1 + op2 + op1f + op2f;
				
			}
			else if (strcmp(exp[i], "-") == 0)
			{
				opResult = (op1 + op1f) - (op2 + op2f);
			}
			else if (strcmp(exp[i], "*") == 0)
			{
				opResult = (op1 + op1f) * (op2 + op2f);
			}
			else if (strcmp(exp[i], "/") == 0)
			{
				opResult = (op1 + op1f) / (op2 + op2f);
			}
			else if (strcmp(exp[i], "%") == 0)
			{
				if (op1f != 0 || op2f != 0)
				{
					printf(_OUT_TO_STDERR, "Module Error: Cant module floating point numbers.");
					exit(0);
				}
				opResult = (op1) % (op2);
			}
			
			if (opResult - (int)opResult)//Float
			{
				len = 2;
				//temp = opResult - (int)opResult;
				//temp = (int)(temp * 100);
				
				temp = (int)opResult;
				while (temp != 0) {
					temp /= 10;     // n = n/10
					++len;
				}

			}
			else//Int
			{
				len = 0;
				temp = (int)opResult;
				while (temp != 0) {
					temp /= 10;     // n = n/10
					++len;
				}
			}

			_gcvt(opResult, len, buffer);
			Push(s, buffer);
		}
		else
		{
			Push(s, exp[i]);
		}
		
	}
	result = Pop(s);
	if (strchr(result, '.'))
	{
		capsule->resultF = toFloat(result);
		capsule->sel = 1;
	}
	else
	{
		capsule->resultI = toInt(result);
		capsule->sel = 0;
	}
	return capsule;
}





