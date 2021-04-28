#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int left = 0;
int right = 0;
int sumleft = 0;
int sumright = 0;

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

void Print(struct node* tree)
{
    if (tree->left) 
    {
        Print(tree->left);
    }

    printf("%d ", tree->field);

	if(tree->right)
    {
        Print(tree->right);
    }

}

int Sum(struct node* tree, int sum)
{
    if (tree->left) 
    {
        left++;
        sumleft += tree->field;
        Sum(tree->left, sumleft);
    }

	if(tree->right)
    {
        right++;
        sumright += tree->field;
        Sum(tree->right, sumright);
    }

    if (left < right)
    {
        return sumright;
    } else {
        return sumleft;
    }
}

int Height(struct node* tree, int length)
{
    int left = 0;
    int right = 0;
    if (tree->left != NULL) {
        left = Height(tree->left, length + 1);
    }
    if (tree->right != NULL) {
        right = Height(tree->right, length + 1);
    }
    if (left == 0 && right == 0) {
        return length;
    }
    else if (left > right) {
        return left;
    }
    else {
        return right;
    }
}

