#ifndef CONINPOST
#define CONINPOST

#include "Stack.h"


// ConInPost file
// Convert Infix to Postfix
// Con - Convert
// In - Infix
// Post - PostFix


//Main Function
char** Convert(char** exp,int size);

//Helper Functions
int isOperator1(char tempExp[]);
int isHigherPrio(char* firstOp, char* secOp);

#endif // !CONINPOST

