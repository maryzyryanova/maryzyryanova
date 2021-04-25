#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

#define AMOUNT_OF_STRINGS_1 10
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
    
    return 0;
}