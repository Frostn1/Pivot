#include <stdio.h>
#include "../../../Src/Lexer/Lexer.h"

 int main() {
	PI_Lexer* lex = initializeLexer("D:\\Programming\\Projects\\Pivot\\Pivot Programming Lanuage\\Pivot Programming Lanuage\\Testing\\Version 0.0.1\\Intial Lexer Testing\\code.piv");
	// ../../Testing/Version 0.0.1/Intial Lexer Testing/code.pi
	//advanceLexer(lex);
	//advanceLexer(lex);
	//advanceLexer(lex);
	checkTokens(lex);
	printf("Tokens:\n-------\n\n");
	for (int i = 0; i < lex->tokenList->tokenCount; i++)
	{
		//if(lex->tokenList->tokens[i]->value != null)
			printf("Id => %d \t Name => %s \t Value => %s \tat %d & %d\n", lex->tokenList->tokens[i]->id, lex->tokenList->tokens[i]->name, lex->tokenList->tokens[i]->value, lex->tokenList->tokens[i]->line, lex->tokenList->tokens[i]->column);
		//else
			//printf("Id => %d ; Name => %s ; Value => undefined at %d & %d\n", lex->tokenList->tokens[i]->id, lex->tokenList->tokens[i]->name, lex->tokenList->tokens[i]->line, lex->tokenList->tokens[i]->column);
	}
	freeLexer(lex, 1);
	return 0;

}