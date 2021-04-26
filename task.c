#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

#define AMOUNT_OF_STRINGS_1 10
#define MAX_LENGTH 6
#define AMOUNT_OF_STRINGS_2 20 

int main(){
    FILE* List_1;
    FILE* List_2;
    List_1 = fopen("List_1.txt", "r");
    List_2 = fopen("List_2.txt", "w");

    if (List_1 == NULL)
    {
        printf ("Error, file is not opened!\n"); 
        return -1;
    } else {
        printf("File is opened!\n");
    }

    if (List_2 == NULL)
    {
        printf ("Error, file is not opened!\n"); 
        return -1;
    } else {
        printf("File is opened!\n");
    }

    struct list* list_1;
    struct list* list_2;
    char buffer_1[AMOUNT_OF_STRINGS_1][MAX_LENGTH];
    char buffer_2[AMOUNT_OF_STRINGS_2][MAX_LENGTH];
    int i, j;

    for (i = 0; i < AMOUNT_OF_STRINGS_1; i++)
    {
        while(fgets(buffer_1[i], MAX_LENGTH, List_1) != NULL)
        {
            Initialise(buffer_1[i]);
            AddToList(list_1, buffer[i]_1 - '0');
        }   
    }
    
    for (j = 0; j < AMOUNT_OF_STRINGS_2; j++)
    {
        while (fgets(buffer_2[i], MAX_LENGTH, List_2) != NULL)
        {
            Initialise(buffer_2[i]);
            AddToList(list_2, buffer_2[i] - '0');
        }
        
    }

    PrintList(list_1);
    PrintList(list_2);
    
    return 0;
}