#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main()
{
    int N, i, length, sum = 0;
    struct node* root;
    root = NULL;
    printf("Your numbers: ");
    do
    {
        scanf("%d", &N);
        root = Add(N, root);
    }while(getchar() != '\n');
    length = GetLength(root, sum);
    sum = GetSum(root);
    Print(root);
    printf("\nThe length of the longest branch: %d\nThe sum of the longest branch: %d", length, sum);
    return 0;
}