#include "Shifter.h"

void Shift(Parser* par)
{
	for (int i = 0; i < par->numOfTokens; i++)
	{
		if (!strcmp(par->tokens_t[i]->self,"from"))
		{
			printf("FROM\n");
		}
	}
}