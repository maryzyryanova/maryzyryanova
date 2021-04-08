#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

#define MAX_AMOUNT_OF_STRINGS 28
#define MAX_STRING_SIZE 100

int main()
{
    int i;
    FILE *input;
    FILE *output;
    char** array = (char**)malloc(MAX_AMOUNT_OF_STRINGS * sizeof(char*));
    input = fopen("List.txt", "r");
    output = fopen("Output.txt", "w");

    if (input == NULL)
    {
        printf("Error, file is closed!\n");
        return -1;
    } else {
        printf("File is opened!\n");
    }

    for (i = 0; i < MAX_AMOUNT_OF_STRINGS ; i++) {
        array[i] = (char*)malloc(MAX_STRING_SIZE * sizeof(char));
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