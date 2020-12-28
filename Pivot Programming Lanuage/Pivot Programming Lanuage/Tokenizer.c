#include "Tokenizer.h"

void Process(char* fileName)
{
	printf("Reading file: %s\n",fileName);
	FILE* codeFile = fopen(fileName, "r");
	if (!codeFile) // checking of error
		return 1;
	char* rawCode = Read(codeFile);
	if (!Tokenize(rawCode, fsize(codeFile)))
	{
		system("pause");
	}
	printf("%s", rawCode);

}
int Tokenize(char* rawCode, unsigned long size)
{
	unsigned int col = 0, row = 0;
	int isEmbeded = 0;
	for (int i = 0; i < size; i++)
	{
		if (See(rawCode, i) == 'f' && PeekS(rawCode, i, 1) == 'r' && PeekS(rawCode, i, 2) == 'o' && PeekS(rawCode, i, 3) == 'm')
		{
			Keyword* kw = (Keyword*)malloc(sizeof(Keyword));
			kw->column = col;
			kw->row = row;
			kw->name = FROM;
			int counter = 4, addressCounter = 0;
			char* fromAddress = (char*)malloc(sizeof(char) * MAXFROMSIZE);
			if (PeekS(rawCode, i, counter) != ' ')
				Throw("From Error", "Missing space after from",kw);
			else
				counter++;
			while (PeekS(rawCode, i, counter) == ' ')
				counter++;
			counter++;
			while (PeekS(rawCode, i, counter) != '}')
			{
				
				fromAddress[addressCounter] = PeekS(rawCode, i, counter);
				if (PeekS(rawCode, i,addressCounter+counter) == '\n')
					Throw("From Error", "Missing '}'", kw);
				if (addressCounter + 1 > MAXFROMSIZE)
					Throw("From Error", "From address overflowed", kw);
				addressCounter++;
				counter++;
			}
			fromAddress[addressCounter] = '\0';
			printf("%s", fromAddress);
		}


		col++;
		if (!isEmbeded && See(rawCode, i) == '\\' && PeekS(rawCode, i, 1))
		{
			row++;
			col = 0;
		}


	}
	
	return 1;
}

void Throw(char* errorType, char* errorMsg,Keyword* kw)
{
	printf("< %s >\n[ %s ] on %d %d", errorType, errorMsg, kw->row, kw->column);
	exit(0);
}

char* Read(FILE* file)
{
	char* raw= (char*)malloc(sizeof(char) * fsize(file));
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
	return code[index+appli];
}
