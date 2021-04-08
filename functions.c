#include "functions.h"
#include <stdbool.h>

int Rows()
{
    int N;
    printf("Rows: ");
    while (scanf("%d", &N) != 1)
    {
        if (scanf("%d", &N) != 1) 
        {
            printf("Incorrect input, try again!\n");
            printf("Rows: ");
            while(getchar() != '\n') {}
        }
    }
    return N;
}

int Columns()
{
    int M;
    printf("Columns: ");
    while (scanf("%d", &M) != 1)
    {
        if (scanf("%d", &M) != 1) 
        {
            printf("Incorrect input, try again!\n");
            printf("Columns: ");
            while(getchar() != '\n') {}
        }
    }
    return M;
}

void Fill_Array(int N, int M, int **array)
{
    int i, j;
    
    for (i = 0; i < N; i++)
    { 
        array[i] = (int *)malloc(M * sizeof(int));
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            array[i][j] = rand() % 2;
        }
    }
}

void Print_Array(int N, int M, int **array)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d", array[i][j]);
            printf(" ");
        }
        printf("\n");
    }  
}

int Index_Row(int ** array, int M, int i)
{
    int j, str = 0;
    for (j = 0; j < M; j++)
    {
        if (array[i][j] == 1)
        {
            str++;
        }
    }

    if (str == 1)
    {
        return i; 
    } else {
        return -1;
    }
}

int Index_Column(int **array, int N, int j)
{
    int i, index, col = 0;
    for (i = 0; i < N; i++)
    {
        if (array[i][j] == 1)
        {
            col++;
        }
    }
    if (col == 1)
    {
        return j; 
    } else {
        return -1;
    }
}

int Delete_Rows(int N, int M, int **array)
{
    int i, j, row, wr = 0;
    for (i = 0; i < N; ++i)
    {
        row = Index_Row(array, M, i);
        bool allzero = true;
        for (j = 0; j < M; ++j)
        {
            allzero = (row >= 0 && allzero);
            array[j][wr] = array[i][j];
        }
        if (!allzero)
        {
            ++wr;
        }
    }
    N = wr;
    return N;
}

int Delete_Columns(int A, int N, int M, int **array)
{
    int i, j, column, wr = 0;
    for (j = 0; j < M; ++j)
    {
        column = Index_Column(array, N, j);
        bool allzero = true;
        for (i = 0; i < A; ++i)
        {
            allzero = (column >= 0 && allzero);
            array[wr][i] = array[i][j];
        }
        if (!allzero)
        {
            wr++;
        }
    }
    M = wr;
    return M;
}
