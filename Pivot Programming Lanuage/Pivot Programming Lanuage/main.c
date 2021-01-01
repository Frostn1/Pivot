#include <stdio.h>

#include "Extractor.h"
#include "Shifter.h"
int main()
{
	Lexer* lex = Exctract("main.pi");
	Parser* par = initParser(lex);
	Shift(par);
	freeLexer(lex);
	freeParser(par);
	return 0;
}