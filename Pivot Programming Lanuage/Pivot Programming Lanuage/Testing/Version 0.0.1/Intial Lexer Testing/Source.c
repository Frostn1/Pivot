#include <stdio.h>
#include "../../../Src/Lexer/Lexer.h"

 int main() {
	PI_Lexer* lex = initializeLexer("D:\\Programming\\Projects\\Pivot\\Pivot Programming Lanuage\\Pivot Programming Lanuage\\Testing\\Version 0.0.1\\Intial Lexer Testing\\code.piv");
	// ../../Testing/Version 0.0.1/Intial Lexer Testing/code.pi
	//advanceLexer(lex);
	//advanceLexer(lex);
	//advanceLexer(lex);
	checkToknes(lex);
	freeLexer(lex);
	return 0;
}