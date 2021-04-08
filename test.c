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
    
    array[0][0] = '1';
    array[0][1] = '1';
    array[0][2] = '0';
    array[0][3] = '1';
    array[1][0] = '0';
    array[1][1] = '0';
    array[1][2] = '0';
    array[1][3] = '0';
    array[2][0] = '1';
    array[2][1] = '1';
    array[2][2] = '0';
    array[2][3] = '1';
    
    assert(Index_Row(array, M, 0) == -1);
    assert(Index_Column(array, N, 2) == 2);
    assert(Delete_Rows(N, M, array) == 3);
    assert(Delete_Columns(3, M, array) == 2);
}

#undef main

int main() 
{
  test();
  return 0;
}
