#include <stdio.h>
#include "../header/tooling.h"

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
    const char* filePath = argv[1];
    



    return 0;
}