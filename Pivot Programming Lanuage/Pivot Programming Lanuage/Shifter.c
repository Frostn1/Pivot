#include "Shifter.h"

void Shift(Parser* par)
{

	par->file = fopen("main.pit", "w");
	for (int i = 0; i < par->numOfTokens; i++)
	{
		if (!strcmp(par->tokens_t[i]->self, "from"))
		{
			if (strcmp(par->tokens_t[i + 1]->self, "{"))//Fix space bug
			{
				Throw("From Error", "Missing '{'", par->tokens_t[i + 1]->row, par->tokens_t[i + 1]->col);
			}
			else if (strlen(par->tokens_t[i + 2]->self) > 11)
			{
				Throw("From Error", "From address overflow", par->tokens_t[i + 2]->row, par->tokens_t[i + 2]->col);
			}
			else if (par->tokens_t[i + 2]->self[strlen(par->tokens_t[i + 2]->self)-1] != '}')//Fix space bug on from address
			{
				Throw("From Error", "Missing '}'", par->tokens_t[i]->row, par->tokens_t[i + 2]->col);
			}
			//LoadCode(Slice(par->tokens_t[i + 2]->self,0,strlen(par->tokens_t[i + 2]->self)-1)
			char* buffer = (char*)malloc(sizeof(char) * (strlen(Slice(par->tokens_t[i + 2]->self, 0, strlen(par->tokens_t[i + 2]->self))) + 5));
			strcpy(buffer, "LOAD ");
			strcat(buffer, Slice(par->tokens_t[i + 2]->self, 0, strlen(par->tokens_t[i + 2]->self) - 1));
			fwrite(buffer,1,strlen(buffer)*sizeof(char),par->file);
			printf("[ FROM ]\n");
			i += 2;
		}
		else if (!strcmp(par->tokens_t[i]->self, "func"))
		{
			printf("[ FUNC ]\n");
			fwrite("\nFUNC ", 1, strlen("\nFUNC ") * sizeof(char), par->file);
			if (par->tokens_t[i + 1]->self[strlen(par->tokens_t[i + 1]->self) - 1] != '(' && par->tokens_t[i + 2]->self[0] != '(')
			{
				Throw("Func Error", "Missing '('", par->tokens_t[i + 1]->row, par->tokens_t[i + 1]->col);
			}
			i++;
			if (par->tokens_t[i]->self[strlen(par->tokens_t[i]->self) - 1] == '(')
			{
				char* buffer = (char*)malloc(strlen(par->tokens_t[i]->self) * sizeof(char));//par->tokens_t[i]->self[strlen(par->tokens_t[i]->self)-1]
				strncpy(buffer, par->tokens_t[i]->self, strlen(par->tokens_t[i]->self) - 1);
				buffer[strlen(par->tokens_t[i]->self) - 1] = '\0';
				printf("< Function name is %s >\n", buffer);
				fwrite(buffer, 1, strlen(buffer) * sizeof(char), par->file);
				free(buffer);
			}
			else
			{
				printf("< Function name is %s >\n", par->tokens_t[i]->self);
			}

			i++;
			int paramCounter = 0;
			while (strcmp(par->tokens_t[i]->self, ")") && par->tokens_t[i]->self[strlen(par->tokens_t[i]->self)-1] != ')')
			{
				if (paramCounter % 2 == 0)
				{

					fwrite("\nPARAM ", 1, strlen("\nPARAM ") * sizeof(char), par->file);
				}
				printf("< Param is %s >\n", (par->tokens_t[i]->self));
				fwrite(par->tokens_t[i]->self, 1, strlen(par->tokens_t[i]->self) * sizeof(char), par->file);
				fwrite(" ", 1, strlen(" ") * sizeof(char), par->file);
				paramCounter++;
				i++;
			}
			if (par->tokens_t[i]->self[strlen(par->tokens_t[i]->self) - 1] == ')')
			{
				char* buffer = (char*)malloc(strlen(par->tokens_t[i]->self) * sizeof(char));//par->tokens_t[i]->self[strlen(par->tokens_t[i]->self)-1]
				strncpy(buffer, par->tokens_t[i]->self, strlen(par->tokens_t[i]->self) - 1);
				buffer[strlen(par->tokens_t[i]->self) - 1] = '\0';
				printf("< Param is %s >\n", buffer);
				fwrite(buffer, 1, strlen(buffer) * sizeof(char), par->file);
				free(buffer);
				paramCounter++;
			}
			i++;
			if (paramCounter % 2 != 0)
			{
				Throw("Func Error", "Invalid number of parameters in function call", par->tokens_t[i + 1]->row, par->tokens_t[i + 1]->col);
			}

			while (!strcmp(par->tokens_t[i]->self, ""))
				i++;
			if (!IsDataTypes(par->tokens_t[i]->self))
			{
				Throw("Func Error", "Unknown return type", par->tokens_t[i]->row, par->tokens_t[i]->col);
			}
			else
			{
				fwrite("\nRTN ", 1, strlen("\nRTN ") * sizeof(char), par->file);
				fwrite(par->tokens_t[i]->self, 1, strlen(par->tokens_t[i]->self) * sizeof(char), par->file);
				i++;
				while (!strcmp(par->tokens_t[i]->self, ""))
					i++;
				if (strcmp(par->tokens_t[i]->self,"{"))
					Throw("Func Error", "Missing '{'", par->tokens_t[i]->row, par->tokens_t[i]->col);
			}

			//Func creating is done, write to file every command
		}
		else if (IsDataTypes(par->tokens_t[i]->self))
		{
			printf("[ VAR ]\n");
			fwrite("\nCRT ", 1, strlen("\nCRT ") * sizeof(char), par->file);
			fwrite(par->tokens_t[i]->self, 1, strlen(par->tokens_t[i]->self) * sizeof(char), par->file);
			fwrite(" ", 1, strlen(" ") * sizeof(char), par->file);

			printf("Type is %s\n", par->tokens_t[i]->self);
			i++;
			while (!strcmp(par->tokens_t[i]->self, ""))
				i++;
			char* varName = (char*)malloc(sizeof(char) * strlen(par->tokens_t[i]->self));
			printf("Name is %s\n", par->tokens_t[i]->self);
			strcpy(varName, par->tokens_t[i]->self);
			fwrite(par->tokens_t[i]->self, 1, strlen(par->tokens_t[i]->self) * sizeof(char), par->file);
			i++;
			while (!strcmp(par->tokens_t[i]->self, ""))
				i++;
			if (strcmp(par->tokens_t[i]->self, "="))
				Throw("Var Error", "Missing '='", par->tokens_t[i]->row, par->tokens_t[i]->col);
			i++;
			int valCounter = 0, bufferCounter = -1, bufferAlocate = 1, flag = 1, opeCounter = 0;
			char** buffer = (char**)malloc(1 * sizeof(char));
			
			
			while (flag)
			{
				if (strcmp(par->tokens_t[i]->self, "") && !isIn(';', par->tokens_t[i]->self))
				{
					buffer[++bufferCounter] = (char*)malloc(sizeof(char) * strlen(par->tokens_t[i]->self));
					strcpy(buffer[bufferCounter], par->tokens_t[i]->self);
				}
				else if (isIn(';', par->tokens_t[i]->self))
				{
					char* buffer_t = (char*)malloc(strlen(par->tokens_t[i]->self) * sizeof(char));//par->tokens_t[i]->self[strlen(par->tokens_t[i]->self)-1]
					strncpy(buffer_t, par->tokens_t[i]->self, strlen(par->tokens_t[i]->self) - 1);
					buffer_t[strlen(par->tokens_t[i]->self) - 1] = '\0';
					buffer[++bufferCounter] = (char*)malloc(sizeof(char) * strlen(buffer_t));
					strcpy(buffer[bufferCounter], buffer_t);
					free(buffer_t);
					flag = 0;
				}
				if (strlen(par->tokens_t[i]->self) == 1 && isOpe(par->tokens_t[i]->self[0]))
					opeCounter;
				i++;
			}
			bufferCounter++;
			Result* caps = (Result*)malloc(sizeof(Result));
			buffer =  Convert(buffer,bufferCounter);
			caps = Calculate(buffer, bufferCounter - opeCounter);
			char snum[100];
			fwrite("\nASGN ", 1, strlen("\nASGN ") * sizeof(char), par->file);
			fwrite(varName, 1, strlen(varName) * sizeof(char), par->file);
			fwrite(" ", 1, strlen(" ") * sizeof(char), par->file);
			if (caps->sel)
			{
				ftoa(caps->resultF, snum, 100);
				printf("{ Final is %.2f }\n", caps->resultF);
			}
			else
			{
				itoa(caps->resultI, snum, 10);
				printf("{ Final is %d }\n", caps->resultI);
			}
			fwrite(snum, 1, strlen(snum) * sizeof(char), par->file);
			i -= 1;

		}
		else if (!strcmp(par->tokens_t[i + 1]->self, "="))
		{

			printf("[ New assigning of value to a variable - %s]\n",par->tokens_t[i]->self);
		}
		else
		{
			Throw("Key Word Error", "Unknown Key Word", par->tokens_t[i]->row, par->tokens_t[i]->col);
		}
		
	
	}
	fclose(par->file);
}