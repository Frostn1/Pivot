#ifndef KEYWORD_H
#define KEYWORD_H

#define MAXTYPESIZE 10

#define FROM "from"
#define FUNC "func"

#define MAXFROMSIZE 10
#define MAXFUNCSIZE 10
#define SPACE ' '

#define OPENBRACKET "openbracket"
#define OPENBRACKET_L '{'

#define CLOSEBRACKET "closebracket"
#define CLOSEBRACKET_L '}'

#define OPENPAREN "openparenthesis"
#define OPENPAREN_L '('

#define CLOSEPAREN "closeparenthesis"
#define CLOSEPAREN_L ')'

#define NEWLINE "newline"
#define NEWLINE_L '\n'

typedef struct Keyword
{
	int row;//Starts from 0
	int column;//Starts from 0
	char* name;
	char* data;

}Keyword;


typedef struct KeywordList
{
	Keyword** list;
	int level;
	int inLevel;
}KeywordList;


typedef struct Parameter
{
	char* varName;
	char* varType;
}Parameter;


typedef struct Function
{
	char* functionName;//MaxFUNCSIZE
	Parameter* parameterList;
	int numofParameters;
	char* returnType;

}Function;
#endif // !KEYWORD_H


