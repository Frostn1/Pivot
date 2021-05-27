#ifndef LEXER_H
#define LEXER_H
#include <stdlib.h>
#include <string.h>
#include "token.h"
#include "tooling.h"
typedef struct PIV_LEXER {
    char* src; // Src Code
    char c; // Current Character
    int index;
    int columnIndex;
    int rowIndex;
    int srcSize;
}PIV_LEXER;

PIV_LEXER* intLexer(const char* code);
char advance(PIV_LEXER* lex);
char show(PIV_LEXER* lex);
char peek(PIV_LEXER* lex);
char peekAhead(PIV_LEXER* lex);
PIV_TOKEN_LIST* lexify();
void freeLexer(PIV_LEXER* lex);
#endif // !LEXER_H