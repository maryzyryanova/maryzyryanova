#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define MAX_AMOUNT_OF_STRINGS 28
#define MAX_STRING_SIZE 100

int CompareStrings(char** array, char* test)
{
    int i;
    for(i = 0; array[i] != test; i++)
    {
        if (array[i] > test)
        {
            return 1;
        }

        if (array[i] < test)
        {
            return -1;
        }

        if (array[i] == test)
        {
            return 0;
        }
        
    }  
}
void test()
{
    FILE* input;
    FILE* output;
    int i;
    char test[MAX_AMOUNT_OF_STRINGS];
    char** array = (char**)malloc(MAX_AMOUNT_OF_STRINGS * sizeof(char*));

    for (i = 0; i < MAX_AMOUNT_OF_STRINGS ; i++) {
        array[i] = (char*)malloc(MAX_STRING_SIZE * sizeof(char));
    }
    
    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++) 
    {
        fgets(array[i], MAX_STRING_SIZE, input);
    }

    SortArray(array, 0);

    for(i = 0; i < MAX_AMOUNT_OF_STRINGS; i++)
    {
       fgets(test, MAX_AMOUNT_OF_STRINGS, output);
       assert(!CompareStrings(array[i], test));
    }

}

#undef main

int main()
{
    test();
    return 0;
}
