#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main()
{
    struct node *head1, *tail1;
    struct node *head2, *tail2;
    struct node *head3, *tail3;
    int size1 = 0;
    int size2 = 0;
    int size3 = 0;
    int buff1[5] = {1, 4, 3, 2, 5};
    int buff2[5] = {10, 9, 2, 1, 5};
    int i, j;

    for (i = 0 ; i < 5; i++ )
    {
        tail1 = PushBack(head1, tail1, &size1, buff1[i]);
        tail2 = PushBack(head2, tail2, &size2, buff2[i]);
    }

    Sort(tail1, size1);
    Sort(tail2, size2);

    Print(tail1, size1);
    printf("\n");
    Print(tail2, size2);

    for (i = 0; i < size1; i++)
    {
        tail3 = PushBack(head3,tail3,&size3,get(tail1,i) -> x);    
    }
    
    for (i = 0 ; i < size2; ++i)
    {
       int flag = 0;
        for (j = 0 ; j < size3 ; ++j)
        {
            if (get(tail2,i)->x == get(tail3, j)->x)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            tail3 = PushBack(head3, tail3, &size3, get(tail2, i)->x);
        }
    }
    printf("\n");
    Print(tail3,size3);
    return 0;
}
