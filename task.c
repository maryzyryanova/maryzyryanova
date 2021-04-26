#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main(){
    int buffer_1[5] = {2, 3, 1, 7, 4};
    int buffer_2[5] = {3, 1, 3, 5, 8};
    struct list* list_1;
    struct list* list_2;
    FromBuffer(buffer_1, list_1);
    FromBuffer(buffer_2, list_2);
    PrintList(list_1);
    PrintList(list_2);
    return 0;
}