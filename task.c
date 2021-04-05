#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, array[N][N];
    int i, j;
    printf("Size of the array: ");
    while (scanf("%d", &N) != 1)
    {
        printf("Incorrect input, try again!");
        printf("Size of the array: ");
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            array[i][j] = rand() % 2;
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d", array[i][j]);
            printf(" ");
        }
    }
    return 0;
}