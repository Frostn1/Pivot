#include "Lexer.h"

PI_Lexer* initializeLexer(char* path)
{
    PI_Lexer* lex = (PI_Lexer*)malloc(sizeof(PI_Lexer));
    lex->lineCounter = 1;
    lex->columnCounter = 1;
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

    lex->tokenList = initializeTokenList();
	return lex;
}

PI_TokenList* startLexer(char* path)
{
    PI_Lexer* lex = initializeLexer(path);
    checkTokens(lex);
    PI_TokenList* list = lex->tokenList;
    freeLexer(lex, 0);
    return list;
}

void advanceLexer(PI_Lexer* lex)
{
    if (lex->codeBlock[lex->codeBlockCounter+1] == '\n')
    {
        lex->lineCounter++;
        lex->columnCounter = 1;
    }
    else
    {
        lex->columnCounter++;
    }

    lex->currentWord = (char*)realloc(lex->currentWord, sizeof(char) * lex->currentWordLength + sizeof(char)*2);
    lex->currentWord[lex->currentWordLength++] = lex->currentCharacter;
    lex->currentWord[lex->currentWordLength] = '\0';
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
                                cleanBuffer(lex,"PrintKeyWord",null,T_Output);
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
                            cleanBuffer(lex,"FuncKeyWord",null,T_Func);
                            
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
                            cleanBuffer(lex, "InitKeyWord",null,T_Init);
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
                        cleanBuffer(lex,"InfKeyWord",null,T_Inf);
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
                    cleanBuffer(lex,"IfKeyWord",null,T_If);
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
                                    cleanBuffer(lex,"ReturnKeyWord",null,T_Return);
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
                cleanBuffer(lex,"UserMade",lex->currentWord,T_UserMade);
            
            advanceLexer(lex);

            cleanBuffer(lex,"LeftParen",null,T_LParen);
            
            break;
        case ')':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);
            
            advanceLexer(lex);
            cleanBuffer(lex,"RightParen",null,T_RParen);
            
            break;
        case '{':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);
           
            advanceLexer(lex);
            cleanBuffer(lex,"LeftBrace",null,T_LBrace);
            
            break;
        case '}':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);
            
            advanceLexer(lex);
            cleanBuffer(lex,"RightBrace",null,T_RBrace);
            
            break;
        case '=':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);
            
            advanceLexer(lex);
            cleanBuffer(lex,"Assign",null,T_Assign);
            break;
        case '+':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);

            advanceLexer(lex);
            switch (lex->currentCharacter)
            {
            case '=':
                advanceLexer(lex);
                switch (lex->currentCharacter)
                {
                default:
                    cleanBuffer(lex, "AssignAdd", null, T_AssignAdd);
                    break;
                }
                break;
            default:
                cleanBuffer(lex, "Add", null, T_Add);
                break;
            }
            break;
        case ';':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);
            
            advanceLexer(lex);
            cleanBuffer(lex,"SemiColon",null,T_SemiColon);
            break;
        case ',':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);

            advanceLexer(lex);
            cleanBuffer(lex, "Comma", null, T_Comma);
            break;
        case ' ':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);
            advanceLexer(lex);
            strcpy(lex->currentWord, "");
            lex->currentWordLength = 0;
            break;
        case '\n':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);
            advanceLexer(lex);
            strcpy(lex->currentWord, "");
            lex->currentWordLength = 0;
            break;
        case '\t':
            if (strcmp(lex->currentWord, ""))
                cleanBuffer(lex, "UserMade", lex->currentWord, T_UserMade);
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

void cleanBuffer(PI_Lexer* lex, char* F_Name, char* F_Value, int F_Id)
{

    if (F_Value == null)
        F_Value = "";
    if (F_Id == 20)
        lex->lineCounter -= 1;
    addTokenToList(lex->tokenList, initializeToken(F_Name, F_Value, F_Id, lex->columnCounter, lex->lineCounter));
    if (F_Id == 20)
        lex->lineCounter += 1;
    strcpy(lex->currentWord, "");
    lex->currentWordLength = 0;
}

void freeLexer(PI_Lexer* lex, int freeTokensFlag)
{
    if (lex->codeBlock != null)
        free(lex->codeBlock);
    if (lex->currentWord != null)
        free(lex->currentWord);
    if (lex->codePath != null)
        free(lex->codePath);
    if (lex->tokenList != null && freeTokensFlag)
        freeTokenList(lex->tokenList);
    if (lex != null)
        free(lex);

}
