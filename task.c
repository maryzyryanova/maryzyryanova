#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main()
{
    int N, M, A, B;
    int **array = (int**)malloc(N*sizeof(int *));
    N = Rows();
    M = Columns();
    Fill_Array(N, M, array);
    Print_Array(N, M, array);
    A = Delete_Rows(N, M, array);
    B = Delete_Columns(A, N, M, array);
    Print_Array(A, B, array);
    free(array);
    return 0;
}
