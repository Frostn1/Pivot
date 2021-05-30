#include <stdio.h>
#include "../include/lexer.h"
#include "../include/token.h"
#include "../include/tooling.h"

int main(int argc, char** argv) {
    if(argc < 2) {
        c(ERROR);
        printf("Usage ");
        c(BOLD);
        printf(": ");
        printf("pi [OPTION]... PATTERNS [FILE]...\nTry 'pi --help' for more information.\n");
        c(NATRUAL);
        return 1;
    }
    for(int i = 1; i < argc; i++) {
        int len = strlen(argv[i]);
        char* last_two = &argv[i][len-3];
        if(strcmp(last_two,".pi") == 0) {
            lexer_T* lexer = init_lexer(readFile(argv[i]));
            // parser_T* parser = init_parser(lexer);
            // AST_T* root = parser_parse(parser, parser->scope);
            // visitor_T* visitor = init_visitor();
            // visitor_visit(visitor, root);
            printf("%s",lexer->contents);
        } else {
            c(ERROR);
            printf("Usage %s", last_two);
            c(BOLD);
            printf(": ");
            printf("pi [OPTION]... PATTERNS [FILE]...\nTry 'pi --help' for more information.\n");
            c(NATRUAL);
        }
    }
    
    
    return 0;
}