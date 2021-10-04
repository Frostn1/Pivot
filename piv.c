#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OR ||
#define AND &&
#define FLAG_SPOT 1
#define HELP_FLAG "-h"
void __USAGE__(void);
void __HELP__(void);

void __ENCODE__(int size, char** data);
void __DECODE__(int size, char** data);
void __SHIFT__(int size, char** data);


void __HELP__(void) {
    __USAGE__();
    printf("Pivot\n\nSyntax\n`piv -operation addtional_info data`.\n`data` -> data in requested type.\n");
    printf("Operations\n -s .. shift from one type to another\n-e .. encode raw data to a type\n-d .. decode type to raw data\n-h .. prints help screen\n");
    printf("Types ( Addtional_info )\n[`b`] .. binary\n[`o`] .. octal\n[`h`] .. hexadecimal\n[`d`] .. decimal\n[`raw`] .. normal text\n[`b64`] .. base64\n");
    return;
}
void __USAGE__(void) {
    printf("Usage:\n");
    printf("piv -operation addtional_info data\n");
    return;
}

int main(int argc, char** argv) {
    if(!argc OR argc < 4 AND !(argc >= 2 AND !strcmp(argv[FLAG_SPOT],HELP_FLAG))) { __USAGE__(); return 1; }
    else if (argc >= 2 AND !strcmp(argv[FLAG_SPOT],HELP_FLAG)) { __HELP__(); return 1; }
    switch(argv[FLAG_SPOT][FLAG_SPOT]) {
        case 'e':
            __ENCODE__(argc, argv);
            break;
        case 'd':
            __DECODE__(argc, argv);
            break;
        case 's':
            __SHIFT__(argc, argv);
            break;
        default:
            printf("no such flag\n");
            __USAGE__();
            break;
    }

    
    return 0;
}