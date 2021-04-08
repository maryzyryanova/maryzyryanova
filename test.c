#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define MAX_AMOUNT_OF_STRINGS 28
#define MAX_STRING_SIZE 100

void test()
{
    FILE* input;
    FILE* output;
    int i;
    char test[MAX_STRING_SIZE];
    char** array = (char**)malloc(MAX_AMOUNT_OF_STRINGS * sizeof(char*));
    if(!array) 
    {
        printf("Error\n");
        free(array);
        array = NULL;
        exit(1);
    }
    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++)
    { 
        array[i] = (int *)malloc(MAX_STRING_SIZE * sizeof(int));
    }
    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++)
    {
        if(!array[i]) 
        {
            printf("Error x2\n\n%d\n\n", i);
            success = 0;
            break;
        }
        if (success == 0) 
        {
            for (; i >= 0; i--) 
            { 
                free(array[i]);
                printf("\n\n%d\n\n", i);
            }
            free(array);
            printf("\n\n%d\n\n", i);
            array = NULL;
            exit(1);
        }
    }
    
    if (!(input = fopen("List.txt", "r"))) {
        printf("Error!!!");
        exit(1);
    }
    if (!(output = fopen("Output.txt", "r"))) {
        printf("Error!!!");
        exit(1);
    }
    
    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++) 
    {
        fgets(array[i], MAX_STRING_SIZE, input);
    }

    SortArray(array, 0);

    for(i = 0; i < MAX_AMOUNT_OF_STRINGS; i++)
    {
       fgets(test, MAX_STRING_SIZE, output);
       assert(!CompareStrings(array[i], test));
    }
}

#undef main

int main()
{
    test();
    return 0;
}
