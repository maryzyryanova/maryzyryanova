#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

#define MAX_STRING_LENGTH 100
#define MAX_AMOUNT_OF_STRINGS 6

int main()
{
    char array[MAX_AMOUNT_OF_STRINGS][MAX_STRING_LENGTH];
    int i;
    FILE *File;
    vowels func;
    File = fopen("Doc.txt", "r");
    
    if (File == NULL) 
    {
        printf ("Error, file is not opened!\n"); 
        return -1;
    } else {
        printf("File is opened!\n");
    }

    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++)
    {
        fgets(array[i], MAX_STRING_LENGTH, File);
    }
    func = AmountOfVowels(array);
    DrawDiagram(func);
}