#include <stdio.h>

#include "../../../Src/Lexer/Lexer.h"
#include "../../../Src/Parser/Parser.h"

int main() {
	PI_Parser* par = initializeParser(startLexer("D:\\Programming\\Projects\\Pivot\\Pivot Programming Lanuage\\Pivot Programming Lanuage\\Testing\\Version 0.0.1\\Intial Lexer Testing\\code.piv"));
	identifyTerms(par);
	freeParser(par);
	return 0;

}