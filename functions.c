#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

struct node* Add(int x, struct node* tree)
{
    if (tree == NULL) 
    {
        tree = (struct node*)malloc(sizeof(struct node));
        tree->field = x;
        tree->count = 0;
        tree->left = tree->right = NULL;
    } else if(tree->field == x){
        tree->count++;
    } else if (x < tree->field) {
        tree->left = Add(x,tree->left);
    } else {
        tree->right = Add(x,tree->right);
    }
    return(tree);
}

struct node* Print(struct node* tree)
{
    if (tree != NULL)
    {
       Print(tree->left);
       printf("%d ", tree->field);
       Print(tree->right);
    }
    return (tree);
}

int MaxLengthAndSum(struct node* tree, int length, int sum)
{
    int left = 0, right = 0;
    int sumLeft = 0, sumRight = 0;
    int curSum = sum + tree->field;
    sum += tree->field;

    if (tree->left != NULL)
    {
        left = MaxLengthAndSum(tree->left, length + 1, sum);
        sumLeft = sum;
        sum = curSum;
    }

    if (tree->right != NULL)
    {
        right = MaxLengthAndSum(tree->right, length + 1, sum);
        sumRight = sum;
        sum = curSum;
    }

    if (left == 0 && right == 0) 
    {
        return length;
    } else if (left > right) {
        sum = sumLeft;
        return left;
    } else {
        sum = sumRight;
        return right;
    }
}

int GetLength(struct node* tree, int sum)
{
    if (tree)
    {
        int length = MaxLengthAndSum(tree, 0, sum);
        return length + 1;
    } else {
        return 0;
    }
}

