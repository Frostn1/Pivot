#define _CRT_SECURE_NO_WARNINGS


#ifndef CALCPOST_H
#define CALCPOST_H

#include "Stack.h"
#include <stdlib.h>

#define FLOATMAX 5 

typedef struct Result
{
	int resultI;
	float resultF;
	int sel;//Int - 0, Float - 1
}Result;

//Main Function
Result* Calculate(char **exp);


//Helper Functions
int isOperator(char tempExp[]);
float toFloat(char tempExp[]);
int toInt(char tempExp[]);

#endif CALCPOST_H