#ifndef TOKEN_H
#define TOKEN_H

#define IDEN "Identifier"
#define NUM "Number"
#define MAL "Other"

typedef struct PIV_TOKEN {
    char* name;
    char* value;
}PIV_TOKEN;

typedef struct PIV_TOKEN_LIST {
    PIV_TOKEN** tokenList;
    int amount;
}PIV_TOKEN_LIST;

void pushToken(PIV_TOKEN_LIST* tokenList, PIV_TOKEN* token);
#endif // !TOKEN_H