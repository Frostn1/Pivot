// printf("\033[0;%d;%dm",29,1);
// printf("\033[0;%d;%dm",30,1); Dark Gray
// printf("\033[0;%d;%dm",31,1); Red
// printf("\033[0;%d;%dm",37,1); White
// printf("\033[0;%d;%dm",32,1); Light Green
// printf("\033[0;%d;%dm",33,1); Orange
// printf("\033[0;%d;%dm",34,1); Blue
// printf("\033[0;%d;%dm",35,1); Light Purple
// printf("\033[0;%d;%dm",36,1); Light Blue
// printf("\033[0;%d;%dm",38,1); Gray
#ifndef LEXER_H
#define LEXER_H
#include <stdio.h>
#define DARK_GRAY 30
#define RED 31
#define WHITE 37
#define LIGHT_GREEN 32
#define ORANGE 33
#define BLUE 34
#define LIGHT_PURPLE 35
#define LIGHT_BLUE 36
#define GRAY 38

#define ERROR RED
#define NATRUAL GRAY
#define BOLD WHITE

void color(int color) {
    printf("\033[0;%d;%dm",color,1);
}

int isIdentifier(char let) {
    return isalpha(let) || isnumeric(let) ? 1 : 0;
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
#endif // !LEXER_H