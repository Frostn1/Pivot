#include "Extractor.h"


Lexer* Exctract(char* filePath)
{
	Lexer* lex = initLexer(Read(OpenFile(filePath)));
	
	while (lex->rawIndex < lex->rawLength)
	{	

		if (isSpecial(lex->current))
		{
			lex->currentToke[lex->tokeIndex++] = lex->current;
			lex->currentToke[lex->tokeIndex] = '\0';
			lex->tokens[lex->tokensIndex] = InitToken(lex->currentToke, lex->currentRow, lex->currentCol);
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

	//PrintLexer(lex);
	//freeLexer(lex);
	return lex;
}