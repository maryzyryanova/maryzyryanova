#include "functions.h"
#include <assert.h>

void TestSort()
{
    struct node* right = {1, 2, 3};
    struct node* unsorted = {2, 3, 1};
    Sort(unsorted, 3);
    assert(unsorted == right);
    struct node* wrong = {5, 2, 1, 3};
    unsorted = wrong;
    Sort(wrong, 4);
    assert(!(unsorted == wrong));
}

#undef main
int main()
{
    TestSort();
    return 0;
}
