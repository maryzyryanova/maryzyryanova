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
    assert(Delete_Rows(N, M, array) == 3);
    assert(Delete_Columns(3, M, array) == 2);
}

#undef main

int main() 
{
  test();
  return 0;
}
