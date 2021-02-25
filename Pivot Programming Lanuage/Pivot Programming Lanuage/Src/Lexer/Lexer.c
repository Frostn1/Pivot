#include "Lexer.h"

PI_Lexer* initializeLexer(char* path)
{
    PI_Lexer* lex = (PI_Lexer*)malloc(sizeof(PI_Lexer));
    lex->lineCounter = 0;
    lex->columnCounter = 0;
    lex->codeBlockCounter = 0;
    if (lex == NULL)
    {
        printf("[ LexerError : Couldnt Allocate Memory For Lexer ]\n");
        exit(0);
    }
    lex->codePath = (char*)malloc(strlen(path) * sizeof(char));
    FILE * fp = fopen(path, "r");

    // checking if the file exist or not 
    if (fp == NULL) {
        printf("[ LexerError : File Not Found ]\n");
        exit(0);
    }
    fseek(fp, 0L, SEEK_END); // Seeking end of the given file
    lex->fileSize = ftell(fp); // Returning the current spot in given file
    lex->codeBlock = (char*)malloc(sizeof(char) * lex->fileSize);
    lex->currentWord = (char*)malloc(sizeof(char));
    lex->currentWord[0] = '\0';
    lex->currentWordLength = 0;
    fseek(fp, 0L, SEEK_SET);

    // Reading the contents of the file
    int counter = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        lex->codeBlock[counter] = ch;
        counter++;
    }
    lex->codeBlock[counter] = '\0';
    lex->currentCharacter = lex->codeBlock[0];
    //fscanf(fp, "%s", lex->codeBlock);
    fclose(fp); // Closing given file
	return lex;
}

void advanceLexer(PI_Lexer* lex)
{
    if (lex->codeBlock[lex->codeBlockCounter+1] == '\n')
    {
        lex->lineCounter++;
        lex->columnCounter = 0;
    }
    else
    {
        lex->columnCounter++;
    }

    lex->currentWord = (char*)realloc(lex->currentWord, sizeof(char) * lex->currentWordLength + sizeof(char)*2);
    lex->currentWord[lex->currentWordLength++] = lex->currentCharacter;
    lex->currentWord[lex->currentWordLength] = '\0';
    //strcat(lex->currentWord, lex->currentCharacter);
    lex->currentCharacter = lex->codeBlock[++lex->codeBlockCounter];       
}

void freeLexer(PI_Lexer* lex)
{
    if (lex->codeBlock != null)
        free(lex->codeBlock);
    if (lex->currentWord != null)
        free(lex->currentWord);
    if (lex->codePath != null)
        free(lex->codePath);
    if (lex != null)
        free(lex);

}
