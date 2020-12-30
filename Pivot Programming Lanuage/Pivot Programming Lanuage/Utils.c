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