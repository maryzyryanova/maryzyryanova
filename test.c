#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

void Test()
{
    struct node* root;
    int height;
    int sum;
    root = NULL;
    root = Add(5, root);
    root = Add(2, root);
    root = Add(4, root);
    root = Add(6, root);
    root = Add(7, root);
    root = Add(9, root);
    height = Height(root, 0);
    sum = Sum(root, 0);
    assert(height == 3);
    assert(sum == 20);

    root = NULL;
    root = Add(1, root);
    root = Add(6, root);
    root = Add(2, root);
    root = Add(3, root);
    root = Add(6, root);
    root = Add(2, root);
    root = Add(5, root);
    height = Height(root, 0);
    sum = Sum(root, 0);
    assert(height == 4);
    assert(sum == 6);
}

#undef main
int main()
{
    Test();
    return 0;
}