#include "functions.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void TestSort()
{
    struct node *head1, *tail1;
    struct node *head2, *tail2;
    struct node *head3, *tail3;
    int size1 = 0;
    int size2 = 0;
    int size3 = 0;
    int right[3] = {1, 2, 3};
    int unsorted[3] = {3, 2, 1};
    int wrong[4] = {5, 4, 1, 3};
    int i, j;

    for (i = 0 ; i < 3; i++ )
    {
        tail1 = PushBack(head1, tail1, &size1, right[i]);
        tail2 = PushBack(head2, tail2, &size2, unsorted[i]);
    }

    for (i = 0 ; i < 4; i++ )
    {
        tail3 = PushBack(head3, tail3, &size3, wrong[i]);
    }

    Sort(tail1, size1);
    Sort(tail2, size2);
    Sort(tail3, size3);
    
    if (size1 == size2)
    {
        while (tail1 != NULL || tail2 != NULL)
        {
            assert(tail1->x == tail2->x);
            tail1 = tail1->next;
            tail2 = tail2->next;
        }
    }

    if (size2 != size3)
    {
        while(tail3 != NULL)
        {
            assert(!(tail2->x == tail3->x));
            tail2 = tail2->next;
            tail3 = tail3->next;

        }
    }
}

#undef main
int main()
{
    TestSort();
    return 0;
}
