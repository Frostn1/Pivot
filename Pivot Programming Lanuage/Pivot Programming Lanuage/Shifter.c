#include "Shifter.h"

void Shift(Parser* par)
{

	par->file = fopen("main.pit", "w");
	for (int i = 0; i < par->numOfTokens; i++)
	{
		if (!strcmp(par->tokens_t[i]->self, "from"))
		{
			if (strcmp(par->tokens_t[i + 1]->self, "{"))
			{
				Throw("From Error", "Missing '{' on ", par->tokens_t[i + 1]->row, par->tokens_t[i + 1]->col);
			}
			else if (strlen(par->tokens_t[i + 2]->self) > 11)
			{
				Throw("From Error", "From address overflow", par->tokens_t[i + 2]->row, par->tokens_t[i + 2]->col);
			}
			else if (par->tokens_t[i + 2]->self[strlen(par->tokens_t[i + 2]->self)-1] != '}')
			{
				Throw("From Error", "Missing '}' on ", par->tokens_t[i]->row, par->tokens_t[i + 2]->col);
			}
			//LoadCode(Slice(par->tokens_t[i + 2]->self,0,strlen(par->tokens_t[i + 2]->self)-1)
			char* buffer = (char*)malloc(sizeof(char) * (strlen(Slice(par->tokens_t[i + 2]->self, 0, strlen(par->tokens_t[i + 2]->self))) + 5));
			buffer[0] = 'L';
			buffer[1] = 'O';
			buffer[2] = 'A';
			buffer[3] = 'D';
			buffer[4] = ' ';
			int j = 0;
			for (j = 0; j < strlen(par->tokens_t[i + 2]->self-1)-1; j++)
			{
				buffer[j + 5] = Slice(par->tokens_t[i + 2]->self, 0, strlen(par->tokens_t[i + 2]->self) - 1)[j];
			}
			
			//strcat(buffer, Slice(par->tokens_t[i + 2]->self, 0, strlen(par->tokens_t[i + 2]->self)-1));

			fwrite(buffer,1,strlen(buffer)*sizeof(char),par->file);
			printf("FROM\n");
			i += 2;
		}
		else if (!strcmp(par->tokens_t[i]->self, "func"))
		{
			printf("FUNC\n");
			if (par->tokens_t[i + 1]->self[strlen(par->tokens_t[i + 1]->self) - 1] != '(' && par->tokens_t[i + 2]->self[0] != '(')
			{
				Throw("Func Error", "Missing '(' on ", par->tokens_t[i + 1]->row, par->tokens_t[i + 1]->col);
			}

		}
	
	}
}