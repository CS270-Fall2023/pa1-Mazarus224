#include "PA1.h"

/*This function goes through an string and parses each sub string into tokens
*Malik Robinson
*9/14/2023
*/
int getTokens(char *s, char ***args)
{
    int size = strlen(s); //size of the inputted string
    int t = 1; //number of tokens in the inputted string
    int start = 0; //sarting index of string, used to ignore leading spaces
    int st = 0; //starting index of sub string to be copied
    int end = 0; //ending index of sub string to be copied
    int len = 0; //length of sub string, equal to the ending index minus the starting index
    int index = 0; // index of array of pointers
    int arrayindex = 0; // index of array holding the string
    char array[256]; //array holding the string
    *args = (char **)malloc(sizeof(char *)*(size+1)); //Initilization of array of pointers
   
    //this loop gets ride of trailing spaces
    //int strindex = (size-1);
    /*
    while(s[strindex] == ' ')
    {
        s[(size-1)] = '\0';
        --size;
    }
    */
    //this loop gets rid of leading spaces
    while(s[start] == ' ')
    {
        ++start;
    }
    //looping through the array saving the sub strings as tokens in the array of pointers
    for (int i = start; i < size-1; i++ )
    {
        if((s[i] == ' ' && s[i-1] !=' ') || (s[i] == '\0'))
        {
            len = end - st;
            (*args)[index] = (char *) malloc(sizeof(char)*(len + 1));
            stpncpy((*args)[index], array, len);
            index++;
            end = i;
            st = i;
            arrayindex = 0; 
            ++t;
        }
        else if(s[i] != ' ')
        {
            array[arrayindex] = s[i];
            arrayindex++;
            end++;
        }
        else
        {
            end = i;
            st = i;
        }



    }
len = end - st;
int p = 0;
(*args)[index] = (char *) malloc(sizeof(char)*(len + 1));
stpncpy((*args)[index], array, len);
(*args)[(index + 1)] = '\0';
printf("Number of Tokens: %d", t);
printf("\n");
    //Print tokens
    while(p < t)
    {
        printf("Token %i: %s", (p+1), (*args)[p]);
        printf("\n");
        ++p;
        
    }
    printf("Token %i: %s", (p+1),(*args)[p+1]);

return t;

}