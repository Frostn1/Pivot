#include "../include/tooling.h"

void c(int color) {
    printf("\033[0;%d;%dm",color,1);
}

int isIdentifier(char let) {
    return isalpha(let) || isdigit(let) ? 1 : 0;
}

void push(char* string,int length, char letter) {
    if(letter == '\n') return;
    string = (char*)realloc(string, (sizeof(char) * (length+1)) + sizeof(char));
    string[length] = letter;
    string[length+1] = '\0';
}

int isSpace(char let) {
    return let == 32;
}

int isNewLine(char let) {
    return let == 11;
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
    if (_access(filePath, 0) == -1) throwError("file doesn't exist."); 
    FILE* filePointer = fopen(filePath,"r");
    if (!filePointer) throwError("can't open file");
    char* buffer = 0;
    long length;
    fseek(filePointer, 0, SEEK_END);
    length = ftell(filePointer);
    fseek(filePointer, 0, SEEK_SET);
    buffer = calloc(length, length);
    if (buffer) fread(buffer, 1, length, filePointer);
    fclose(filePointer);
    return buffer;
}