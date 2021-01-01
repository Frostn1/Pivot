#include "Extractor.h"


void Exctract(char* filePath)
{
	Lexer* lex = initLexer(Read(OpenFile(filePath)));
	
	while (lex->rawIndex < lex->rawLength)
	{	

		if (isSpecial(lex->current))
		{
			lex->currentToke[lex->tokeIndex++] = lex->current;
			lex->currentToke[lex->tokeIndex] = '\0';
			lex->tokens[lex->tokensIndex] = (Token*)malloc(sizeof(Token));
			lex->tokens[lex->tokensIndex]->self = (char*)malloc(sizeof(char) * TOKENMAXLENGTH);
			strcpy(lex->tokens[lex->tokensIndex]->self, lex->currentToke);
			lex->tokens[lex->tokensIndex]->col = lex->currentCol;
			lex->tokens[lex->tokensIndex]->row = lex->currentRow;
			lex->tokensIndex++;
			

			//printf("%s\n", lex->currentToke);
			ResetString(lex->currentToke, lex->tokeIndex);
			lex->tokeIndex = 0;
			Advance(lex);
		}
		else if (lex->current != '\n' && lex->current != '\t')
		{
			lex->currentToke[lex->tokeIndex++] = lex->current;
			Advance(lex);
		}
		else if (lex->current == '\n')
		{
			lex->currentRow++;
			Advance(lex);
		}
		else
		{
			Advance(lex);
		}
		lex->currentCol++;

	}

	PrintLexer(lex);
	freeLexer(lex);
	
}