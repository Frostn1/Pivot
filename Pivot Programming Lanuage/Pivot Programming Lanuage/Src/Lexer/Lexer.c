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
    lex->codeBlock = (char*)malloc(sizeof(char) * lex->fileSize + sizeof(char));
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

void checkTokens(PI_Lexer* lex)
{
    while (lex->codeBlockCounter < strlen(lex->codeBlock))
    {
        switch (lex->currentCharacter)
        {
        case 'p':
        {
            // Clean up the buffer
            if (strcmp(lex->currentWord, ""))
            {
                advanceLexer(lex);
                break;
            }
                
            advanceLexer(lex);
            switch (lex->currentCharacter)
            {
            case 'r':
                advanceLexer(lex);
                switch (lex->currentCharacter)
                {
                case 'i':
                    advanceLexer(lex);
                    switch (lex->currentCharacter)
                    {
                    case 'n':
                        advanceLexer(lex);
                        switch (lex->currentCharacter)
                        {
                        case 't':
                            advanceLexer(lex);
                            switch (lex->currentCharacter)
                            {

                            default:
                                cleanBuffer(lex);
                                //printf("[ Print Function ]\n");
                                break;
                            }

                        }

                    }

                }

            }

        }
        break;
        case 'f':
        {
            // Clean up the buffer
            if (strcmp(lex->currentWord, ""))
            {
                advanceLexer(lex);
                break;
            }
            advanceLexer(lex);
            switch (lex->currentCharacter)
            {
            case 'u':
                advanceLexer(lex);
                switch (lex->currentCharacter)
                {
                case 'n':
                {
                    advanceLexer(lex);
                    switch (lex->currentCharacter)
                    {
                    case 'c':
                    {
                        advanceLexer(lex);
                        switch (lex->currentCharacter)
                        {
                        default:
                            cleanBuffer(lex);
                            //printf("[ Func Keyword ]\n");
                            break;
                        }
                    }
                    
                    }
                }
                
                }
                
            }
            break;
        }
        case 'i':
        {
            if (strcmp(lex->currentWord, ""))
            {
                advanceLexer(lex);
                break;
            }
            advanceLexer(lex);
            switch (lex->currentCharacter)
            {
            case 'n':
                advanceLexer(lex);
                switch (lex->currentCharacter)
                {
                case 'i':
                    advanceLexer(lex);
                    switch (lex->currentCharacter)
                    {
                    case 't':
                        advanceLexer(lex);
                        switch (lex->currentCharacter)
                        {
                        default:
                            cleanBuffer(lex);
                            break;
                        }
                        break;
                    }
                    break;
                case 'f':
                    advanceLexer(lex);
                    switch (lex->currentCharacter)
                    {
                    default:
                        cleanBuffer(lex);
                        break;
                    }
                    break;
                default:
                    cleanBuffer(lex);
                    break;
                    
                }
                break;
            case 'f':
                advanceLexer(lex);
                switch (lex->currentCharacter)
                {
                default:
                    cleanBuffer(lex);
                    break;
                }
            }
            break;
        }
        case 'r':
            if (strcmp(lex->currentWord, ""))
            {
                advanceLexer(lex);
                break;
            }
            advanceLexer(lex);
            switch (lex->currentCharacter)
            {
            case 'e':
                advanceLexer(lex);
                switch (lex->currentCharacter)
                {
                case 't':
                    advanceLexer(lex);
                    switch (lex->currentCharacter)
                    {
                    case 'u':
                        advanceLexer(lex);
                        switch (lex->currentCharacter)
                        {
                        case 'r':
                            advanceLexer(lex);
                            switch (lex->currentCharacter)
                            {
                            case 'n':
                                advanceLexer(lex);
                                switch (lex->currentCharacter)
                                {
                                default:
                                    cleanBuffer(lex);
                                    break;
                                }
                            
                            }
                        }

                    }
                }
            }
        break;
        case '(':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
            
            advanceLexer(lex);
            cleanBuffer(lex);
            //printf("[ Right Paren ]\n");
            break;
        case ')':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
            
            advanceLexer(lex);
            cleanBuffer(lex);
            //printf("[ Left Paren ]\n");
            break;
        case '{':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
           
            advanceLexer(lex);
            cleanBuffer(lex);
            //printf("[ Left Brace ]\n");
            break;
        case '}':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
            
            advanceLexer(lex);
            cleanBuffer(lex);
            //printf("[ Right Brace ]\n");
            break;
        case '=':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
            
            advanceLexer(lex);
            cleanBuffer(lex);
            break;
        case ';':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
            
            advanceLexer(lex);
            cleanBuffer(lex);
            break;
        case ' ':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
            advanceLexer(lex);
            strcpy(lex->currentWord, "");
            lex->currentWordLength = 0;
            break;
        case '\n':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
            advanceLexer(lex);
            strcpy(lex->currentWord, "");
            lex->currentWordLength = 0;
            break;
        case '\t':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex);
            advanceLexer(lex);
            strcpy(lex->currentWord, "");
            lex->currentWordLength = 0;
            break;
        default:
            advanceLexer(lex);
            break;

        }
        }

}


char peek(PI_Lexer* lex)
{
    return 0;
}

char peekNext(PI_Lexer* lex)
{
    return 0;
}

void cleanBuffer(PI_Lexer* lex)
{
    printf("[ Modify Value '%s' ]\n", lex->currentWord);
    strcpy(lex->currentWord, "");
    lex->currentWordLength = 0;
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
