#include "Utils.h"



void Throw(char* errorType, char* errorMsg, int row, int col)
{
	printf("\n< %s >\n[ %s ] on %d %d", errorType, errorMsg, row, col);
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
	fclose(file);
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

int isOpe(char chara)
{
	return chara == '+' || chara == '-' || chara == '*' || chara == '/' || chara == '%';
}
void ResetString(char* str, int size)
{
	for (int i = 0; i < size; i++)
	{
		str[i] = '\0';
	}
}

int IsDataTypes(char* str)
{
	if (!strcmp(str, "int"))
		return 1;
	else if (!strcmp(str, "float"))
		return 1;
	else if (!strcmp(str, "str"))
		return 1;
	else
		return 0;
}

int isIn(char chara, char* str)
{
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == chara)
			return 1;
	}
	return 0;
}


void reverse(char* str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

// Converts a given integer x to string str[].  
// d is the number of digits required in the output.  
// If d is more than the number of digits in x,  
// then 0s are added at the beginning. 
int intToStr(int x, char str[], int d)
{
	int i = 0;
	while (x) {
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}

	// If number of digits required is more, then 
	// add 0s at the beginning 
	while (i < d)
		str[i++] = '0';

	reverse(str, i);
	str[i] = '\0';
	return i;
}

// Converts a floating-point/double number to a string. 
void ftoa(float n, char* res, int afterpoint)
{
	// Extract integer part 
	int ipart = (int)n;

	// Extract floating part 
	float fpart = n - (float)ipart;

	// convert integer part to string 
	int i = intToStr(ipart, res, 0);

	// check for display option after point 
	if (afterpoint != 0) {
		res[i] = '.'; // add dot 

		// Get the value of fraction part upto given no. 
		// of points after dot. The third parameter  
		// is needed to handle cases like 233.007 
		fpart = fpart * pow(10, afterpoint);

		intToStr((int)fpart, res + i + 1, afterpoint);
	}
}
