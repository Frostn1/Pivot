#include "../header/tooling.h"

void c(int color) {
    printf("\033[0;%d;%dm",color,1);
}

int isIdentifier(char let) {
    return isalpha(let) || isdigit(let) ? 1 : 0;
}

void push(char* string, char letter) {
    int length = strlen(string);
    string = (char*)realloc(string, (sizeof(char)*length)+sizeof(char));
    string[length+1] = letter;
}

int isSpace(char let) {
    return let == 32;
}

void throwError(char* message) {
    c(ERROR);
    printf("error");
    c(NATRUAL);
    printf(" : ");
    c(BOLD);
    printf("%s",message);
    printf("\n");
    c(NATRUAL);
    exit(0);
}

char* readFile(char* filePath) {

    // if (argc - 1 == flags.size()) throwError("missing file input");
    // if (i != argc - 1) throwError("arguments order is misaligned");
    if (_access(filePath, 0) == -1) throwError("file doesn't exist"); 
    FILE* filePointer = fopen(filePath,"r");
    if (!filePointer) throwError("can't open file");
    
    char c = ' ';
    char* code = (char*)malloc(sizeof(char));
    int length = 1;
    while((c = getc(filePointer) != EOF)) {
        code = (char*)realloc(code, sizeof(char)*length + sizeof(char));
        code[length-1] = c;
    }
    return code;
}