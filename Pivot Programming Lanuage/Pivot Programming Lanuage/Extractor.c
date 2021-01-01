#include "Extractor.h"


void Exctract(char* filePath)
{
	Lexer* lex = initLexer(Read(OpenFile(filePath)));
	
	while (lex->current != '\0')
	{	

		if (isSpecial(lex->current))
		{
			lex->currentToke[lex->tokeIndex++] = lex->current;
			lex->currentToke[lex->tokeIndex++] = '\0';
			printf("%s\n", lex->currentToke);
			ResetString(lex->currentToke, lex->tokeIndex);
			lex->tokeIndex = 0;
			Advance(lex);
		}
		else if(lex->current != '\n' && lex->current != '\t')
		{
			lex->currentToke[lex->tokeIndex++] = lex->current;
			Advance(lex);
		}
		else
			Advance(lex);
	}
	
}