#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define N 3
#define M 4

void test()
{
    int i;
    int **array = (int**)malloc(N*sizeof(int *));
    if(!array) 
    {
        printf("Error\n");
        exit(1);
    }
    for (i = 0; i < N; i++)
    { 
        array[i] = (int *)malloc(M * sizeof(int));
        if(!array[i]) 
        {
            for (i -= 1; i >= 0; i--) 
            { 
                free(array[i]);
                array[i] = NULL;
            }
            free(array);
            array = NULL;
            exit(1);
        }
    }
    assert(Index_Row(array, 4, 2) == -1);
    assert(Index_Column(array, 3, 2) == 2);
    assert(Delete_Rows(3, 4, array) == 3);
    assert(Delete_Columns(3, 4, array) == 2);
}

#undef main

int main() 
{
  test();
  return 0;
}
