#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main()
{
    int N, i, max, height = 0, sum = 0;
    struct node* root;
    root = NULL;
    printf("Your numbers: ");
    do
    {
        scanf("%d", &N);
        root = Add(N, root);
    }while(getchar() != '\n');
    Print(root);
    max = Height(root, height);
    sum = Sum(root, sum);
    printf("\nHeight: %d\nSum: %d", max, sum);
    return 0;
}