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
			printf("FROM\n");
		}
	}
}