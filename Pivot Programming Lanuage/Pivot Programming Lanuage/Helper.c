#include "Helper.h"

int isHigherPrio(char* firstOp, char* secOp)
{
	int first = 0, second = 0;
	if (secOp[0] == '(' || firstOp[0] == '(')
	{
		return 1;
	}
	if (secOp[0] == '+' || secOp[0] == '-' || secOp[0] == '(' || secOp[0] == ')')
	{
		second = 0;
	}
	else if (secOp[0] == '*' || secOp[0] == '/' || secOp[0] == '%')
	{
		second = 1;
	}


	if (firstOp[0] == '+' || firstOp[0] == '-' || secOp[0] == '(' || secOp[0] == ')')
	{
		first = 0;
	}
	else if (firstOp[0] == '*' || firstOp[0] == '/' || secOp[0] == '%')
	{
		first = 1;
	}


	if (first > second)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int isOperator(char tempExp[])
{


	if (tempExp[0] != '+' && tempExp[0] != '-' && tempExp[0] != '*' && tempExp[0] != '/' && tempExp[0] != '%' && tempExp[0] != '(' && tempExp[0] != ')')
	{
		return 0;
	}

	return 1;
}

float toFloat(char tempExp[])
{
	return (float)atof(tempExp);
}

int toInt(char tempExp[])
{
	return (int)atoi(tempExp);
}