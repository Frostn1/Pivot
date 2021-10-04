#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 32
#define OR ||
#define AND &&
#define FLAG_SPOT 1
#define HELP_FLAG "-h"


void __USAGE__(void);
void __HELP__(void);

void __ENCODE__(int size, char** data);
void __DECODE__(int size, char** data);
void __SHIFT__(int size, char** data);

void _FROM_BINARY_(int size, char* dataStream);
void _TO_BINARY_(int size, char* dataStream);
char* _FLATTEN2D_(int size, char** stream);


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

void _TO_BINARY_(int size, char* dataStream) {
    for (size_t i = 0; i < strlen(dataStream); i++) {
        for (int j = 7; j >= 0; --j) {
            putchar( (dataStream[i] & (1 << j)) ? '1' : '0' );
        }
    }
    putchar('\n');   
}

void _FROM_BINARY_(int size, char* dataStream) {
    int counter = 0;
    char newStream[8];
    for (size_t i = 0; i < strlen(dataStream); i++, counter++) {
        if (counter == 8) {
            newStream[8] = 0;
            printf("%s\n", newStream);
            putchar(strtol(newStream, 0, 2));
            counter = -1;
        } else {
            newStream[counter] = dataStream[i];
        }
        
    }
    putchar('\n');
}

char* _FLATTEN2D_(int size, char** stream) {
    char *flatArray = (char*)malloc(sizeof(char) * MAX_LENGTH * 1100);
    flatArray[0] = 0;
    for(int i=0; i<size; i++)
        strcat(flatArray, stream[i]);
        strcat(flatArray, " ");
    return flatArray;
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


void __ENCODE__(int size, char** data) {
    switch(data[FLAG_SPOT+1][0]) {
        case 'b':
            _TO_BINARY_(size - 3, _FLATTEN2D_(size-3, &data[3]));
            break;
    }
}


void __DECODE__(int size, char** data) {
    switch(data[FLAG_SPOT+1][0]) {
        case 'b':
            _FROM_BINARY_(size - 3, _FLATTEN2D_(size-3, &data[3]));
            break;
    }
}


void __SHIFT__(int size, char** data) {

}

