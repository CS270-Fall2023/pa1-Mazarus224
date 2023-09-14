/*
*Malik Robinson
*09/14/2023
*CS-270
*Ekatarina Miller
*/
#include "PA1.h"

int main()
{
    char string[256];//buffer for string, gotten from user
    char **arrayoftokens[256];//array of pointers to hold tokens
    printf("Input string: ");//get string from user
    fgets(string, 100, stdin);//get string from user
    getTokens(string, arrayoftokens);//function call, see PA1.c
    return 0;
} 