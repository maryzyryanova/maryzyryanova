#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

#define MAX_AMOUNT_OF_STRINGS 28
#define MAX_STRING_SIZE 100

int main()
{
    int i, success;
    FILE *input;
    FILE *output;
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
    
    input = fopen("List.txt", "r");
    output = fopen("Output.txt", "w");

    if (input == NULL)
    {
        printf("Error, file is closed!\n");
        return -1;
    } else {
        printf("File is opened!\n");
    }

    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++)
    {
        fgets(array[i], MAX_STRING_SIZE, input);
    }
    SortArray(array, 0);
    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++)
    {
        fputs(array[i], output);
    }
    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++) {
        free(array[i]);
    }
    free(array);
}
