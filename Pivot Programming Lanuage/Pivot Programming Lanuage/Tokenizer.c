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
	FunctionList* functions = (FunctionList*)malloc(sizeof(FunctionList));
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

			//int gc = 4;
			Function* funct = (Function*)malloc(sizeof(Function));
			functions->numOfFunctions = 0;
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
			//gc++;
			while (PeekS(rawCode, i, counter) == SPACE)
			{
				counter++;
				//gc++;
			}
				

			while (PeekS(rawCode, i, funcCounter + counter) != OPENPAREN_L && PeekS(rawCode, i, funcCounter + counter) != SPACE && PeekS(rawCode, i, funcCounter + counter) != CLOSEPAREN_L)
			{
				funcName[funcCounter] = PeekS(rawCode, i, counter + funcCounter);
				if (funcCounter + 1 > MAXFUNCSIZE)
					Throw("Func Error", "Func name overflowed", row, col);
				if (PeekS(rawCode, i, funcCounter + counter) == '\n')
					Throw("Func Error", "Missing ')'", row, col);
				funcCounter++;
				//gc++;
			}
			funcName[funcCounter] = '\0';
			while (PeekS(rawCode, i, counter + funcCounter) == SPACE)
			{
				counter++;
				//gc++;
			}
				
			if (PeekS(rawCode, i, counter + funcCounter) != OPENPAREN_L)
				Throw("Func Error", "Missing '('", row, col);

			funct->functionName = (char*)malloc(sizeof(char) * MAXFUNCSIZE);
			strcpy(funct->functionName, funcName);

			//TO DO:
			//Create a ')' Type checker
			


			char* e;
			int sel = 0, index = 0, paramIndex = 0;
			char* funcParam = (char*)malloc(sizeof(char) * MAXPARAMSIZE * MAXPARAMSIZE / 2);
			char* funcParamName = (char*)malloc(sizeof(char) * MAXPARAMSIZE);
			char* funcParamType = (char*)malloc(sizeof(char) * MAXPARAMSIZE);
			char* funcParamReturn = (char*)malloc(sizeof(char) * MAXPARAMSIZE);
			//Parameter* params = (Parameter*)malloc(sizeof(Parameter));
			funct->parameterList = (Parameter*)malloc(sizeof(Parameter) * MAXPARAMSIZE);
			funct->numofParameters = 0;
			while (PeekS(rawCode, i, counter + funcCounter) != CLOSEPAREN_L && PeekS(rawCode, i, counter + funcCounter + 1) != CLOSEPAREN_L && PeekS(rawCode, i, counter + funcCounter-1) != CLOSEPAREN_L)//
			{
				paramIndex = 0;
				while (PeekS(rawCode, i, counter + funcCounter) == SPACE && PeekS(rawCode, i, counter + funcCounter + 1) == SPACE)
				{
					counter++;
					//gc++;
				}
				while (PeekS(rawCode, i, counter + ++funcCounter) != ',' && PeekS(rawCode, i, counter + funcCounter) != CLOSEPAREN_L)
				{
					funcParam[paramIndex++] = rawCode[i + counter + funcCounter];
					//gc++;
				}
					
				funcParam[paramIndex++] = '\0';
				//gc++;
				e = strchr(funcParam, ' ');
				index = (int)(e - funcParam);

				funcParamType = Slice(funcParam, 0, index);
				while (See(funcParam, index) == SPACE)
				{
					index++;
					//gc++;
				}
				funcParamName = Slice(funcParam, index, strlen(funcParam));
				counter++;
				//gc++;
				//funcParam = Slice(funcParam, index, strlen)

				//funct->parameterList[funct->numofParameters++] = (Parameter*)malloc(sizeof(Parameter));
				funct->parameterList[funct->numofParameters].varName = (char*)malloc(sizeof(char) * MAXVARNAMESIZE);
				funct->parameterList[funct->numofParameters].varType = (char*)malloc(sizeof(char) * MAXPARAMSIZE);
				strcpy(funct->parameterList[funct->numofParameters].varName, funcParamName);
				strcpy(funct->parameterList[funct->numofParameters].varType, funcParamType);
				funct->numofParameters++;
			}
			

			while (PeekS(rawCode, i, counter + funcCounter) == SPACE)
			{
				counter++;
				//gc++;
			}
				
			index = 0;
			while (PeekS(rawCode, i, counter + funcCounter) != OPENBRACKET_L  && index != MAXTYPESIZE)//&& PeekS(rawCode, i, counter + funcCounter) != SPACE
			{
				if(PeekS(rawCode, i, counter + funcCounter) != SPACE && PeekS(rawCode, i, counter + funcCounter) != OPENBRACKET_L && PeekS(rawCode, i, counter + funcCounter) != NEWLINE_L)
					funcParamReturn[index++] = PeekS(rawCode, i, counter + funcCounter);
				counter++;
				//gc++;
			}
			funcParamReturn[index] = '\0';
			
			if (index == MAXTYPESIZE)
			{
				Throw("Func Error", "Missing '{'", row, col);
			}
			funct->returnType = (char*)malloc(sizeof(char) * MAXPARAMSIZE);
			strcpy(funct->returnType, funcParamReturn);
			//functions->functions[functions->numOfFunctions] = (Function*)malloc(sizeof(Function));
			functions->functions[functions->numOfFunctions++] = funct;
			i += counter + funcCounter;
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
	return 1;
}




