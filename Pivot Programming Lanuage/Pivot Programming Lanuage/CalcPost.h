#ifndef CALCPOST_H
#define CALCPOST_H

#include "Stack.h"

#define FLOATMAX 5 

//Main Function
char** Calculate(char **exp);

//Helper Functions
int isOperator(char tempExp[]);
float toFloat(char tempExp[]);
int toInt(char tempExp[]);
#endif CALCPOST_H