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
	KeywordList* lineList = (Keyword*)malloc(sizeof(KeywordList));
	lineList->list = (Keyword*)malloc(sizeof(Keyword) * MAXTOKENS);
	lineList->list[0] = (Keyword*)malloc(sizeof(Keyword) * MAXTOKENS);
	lineList->level = 0;
	lineList->inLevel = 0;
	unsigned int col = 0, row = 0;
	int isEmbeded = 0;
	for (int i = 0; i < size; i++)
	{
		if (See(rawCode, i) == 'f' && PeekS(rawCode, i, 1) == 'r' && PeekS(rawCode, i, 2) == 'o' && PeekS(rawCode, i, 3) == 'm')
		{
			int counter = 4, addressCounter = 0;
			char* fromAddress = (char*)malloc(sizeof(char) * MAXFROMSIZE);
			if (PeekS(rawCode, i, counter) != SPACE)
				Throw("From Error", "Missing space after from", row, col);
			else
				counter++;
			while (PeekS(rawCode, i, counter) == SPACE)
				counter++;
			counter++;
			if (PeekS(rawCode, i, counter - 2) != OPENBRACKET_L && PeekS(rawCode, i, counter - 1) != OPENBRACKET_L)
				Throw("From Error", "Missing '{'", row, col);
			while (PeekS(rawCode, i, addressCounter + counter) != CLOSEBRACKET_L)
			{
				fromAddress[addressCounter] = PeekS(rawCode, i, counter + addressCounter);
				if (addressCounter + 1 > MAXFROMSIZE)
					Throw("From Error", "From address overflowed", row, col);
				if (PeekS(rawCode, i, addressCounter + counter) == '\n')
					Throw("From Error", "Missing '}'", row, col);

				addressCounter++;
				//counter++;
			}
			fromAddress[addressCounter] = '\0';
			//Process(fromAddress);
			printf("%s", fromAddress);

			i += addressCounter + counter;
			Keyword* kw = (Keyword*)malloc(sizeof(Keyword));
			kw->column = col;
			kw->row = row;
			kw->name = FROM;
			lineList->list[lineList->level][lineList->inLevel++] = *kw;
			kw->data = (char*)malloc(sizeof(fromAddress));
			strcpy(kw->data, fromAddress);
			kw = (Keyword*)malloc(sizeof(Keyword));
			kw->column = col + counter;
			kw->row = row;
			kw->name = OPENBRACKET;
			kw->data = OPENBRACKET_L;
			lineList->list[lineList->level][lineList->inLevel++] = *kw;
			kw = (Keyword*)malloc(sizeof(Keyword));
			kw->column = col + counter + addressCounter;
			kw->row = row;
			kw->name = CLOSEBRACKET;
			kw->data = CLOSEBRACKET_L;
			lineList->list[lineList->level][lineList->inLevel++] = *kw;



		}
		else if (See(rawCode, i) == 'f' && PeekS(rawCode, i, 1) == 'u' && PeekS(rawCode, i, 2) == 'n' && PeekS(rawCode, i, 3) == 'c')
		{
			Keyword* kw = (Keyword*)malloc(sizeof(Keyword));
			kw->column = col;
			kw->row = row;
			kw->name = FUNC;
			int counter = 4, funcCounter = 0;
			char* funcName = (char*)malloc(sizeof(char) * MAXFUNCSIZE);
			if (PeekS(rawCode, i, counter) != SPACE)
				Throw("Func Error", "Missing space after func", row, col);
			else
				counter++;
			while (PeekS(rawCode, i, counter) == SPACE)
				counter++;

			while (PeekS(rawCode, i, funcCounter + counter) != OPENPAREN_L && PeekS(rawCode, i, funcCounter + counter) != SPACE && PeekS(rawCode, i, funcCounter + counter) != CLOSEPAREN_L)
			{
				funcName[funcCounter] = PeekS(rawCode, i, counter + funcCounter);
				if (funcCounter + 1 > MAXFUNCSIZE)
					Throw("Func Error", "Func name overflowed", row, col);
				if (PeekS(rawCode, i, funcCounter + counter) == '\n')
					Throw("Func Error", "Missing ')'", row, col);
				funcCounter++;
			}
			funcName[funcCounter] = '\0';
			while (PeekS(rawCode, i, counter + funcCounter) == SPACE)
				counter++;
			if (PeekS(rawCode, i, counter + funcCounter) != OPENPAREN_L)
				Throw("Func Error", "Missing '('", row, col);

			//TO DO:
			//Create a ')' Type checker
			//funcCounter = 0;

			char* e;
			int sel = 0, index = 0, paramIndex = 0;
			char* funcParam = (char*)malloc(sizeof(char) * MAXPARAMSIZE * MAXPARAMSIZE / 2);
			char* funcParamName = (char*)malloc(sizeof(char) * MAXPARAMSIZE);
			char* funcParamType = (char*)malloc(sizeof(char) * MAXPARAMSIZE);
			Parameter* params = (Parameter*)malloc(sizeof(Parameter));
			while (PeekS(rawCode, i, counter + funcCounter) != CLOSEPAREN_L && PeekS(rawCode, i, counter + funcCounter+1) != CLOSEPAREN_L)
			{
				while (PeekS(rawCode, i, counter + funcCounter) == SPACE)
					counter++;
				while (PeekS(rawCode, i, counter + ++funcCounter) != ',' && PeekS(rawCode, i, counter + funcCounter) != CLOSEPAREN_L)
					funcParam[paramIndex++] = rawCode[i + counter + funcCounter];
				funcParam[paramIndex++] = '\0';

				e = strchr(funcParam, ' ');
				index = (int)(e - funcParam);


			}

			col++;
			if (!isEmbeded && See(rawCode, i) == '\n')
			{
				row++;
				col = 0;
				lineList->inLevel = 0;
				lineList->list[++lineList->level] = (Keyword*)malloc(sizeof(Keyword) * MAXTOKENS);
			}

		}
		

	}
	return 1;
}

void Throw(char* errorType, char* errorMsg, int row, int col)
{
	printf("< %s >\n[ %s ] on %d %d", errorType, errorMsg, row, col);
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
