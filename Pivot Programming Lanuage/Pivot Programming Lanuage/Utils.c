#include "Utils.h"



void Throw(char* errorType, char* errorMsg, int row, int col)
{
	printf("< %s >\n[ %s ] on %d %d", errorType, errorMsg, row, col);
	exit(0);
}

char* Read(FILE* file)
{
	char* raw = (char*)malloc(sizeof(char) * fsize(file));
	int counter = 0;
	char ch;
	while ((ch = fgetc(file)) != EOF)
	{
		raw[counter] = ch;
		counter++;
	}
	raw[counter] = '\0';
	return raw;
}

unsigned long fsize(FILE* file1)
{
	fseek(file1, 0, SEEK_END);
	unsigned long len = (unsigned long)ftell(file1);
	fseek(file1, 0, SEEK_SET);
	return len;
}



FILE* OpenFile(char* fileName)
{
	return fopen(fileName, "r");

}

char See(char* code, int index)
{
	return code[index];
}



char PeekS(char* code, int index, int appli)
{
	return code[index + appli];
}

char* Slice(char* original, int startIndex, int endIndex)
{
	char* finished = (char*)malloc(sizeof(original));
	int counter = 0;
	for (int i = startIndex; i < endIndex; i++)
	{
		finished[counter++] = original[i];
	}
	finished[counter++] = '\0';
	return finished;
}

int isSpecial(char chara)
{
	return chara == ' ' || chara == '(' || chara == ')' || chara == '+' || chara == '-' || chara == '*' || chara == '/' || chara == '%' || chara == '{' || chara == '}' || chara == ';';
}

void ResetString(char* str, int size)
{
	for (int i = 0; i < size; i++)
	{
		str[i] = '\0';
	}
}