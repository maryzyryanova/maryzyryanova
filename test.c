#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "task.c"
#include "functions.h"

void test()
{
    int **array = (int**)malloc(3*sizeof(int *));
    for (i = 0; i < 3; i++)
    { 
        array[i] = (int *)malloc(4 * sizeof(int));
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
    assert(Index_Row(array, 3, 4) == -1);
    assert(Index_Column(array, 3, 4) == 2);
    assert(Delete_Rows(3, 4, array) == 3);
    assert(Delete_Columns(3, 4, array) == 2);
}

#undef main

int main() 
{
  test();
  return 0;
}
