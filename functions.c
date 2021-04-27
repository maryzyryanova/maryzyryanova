#include "functions.h"

struct node* New(){
    struct node *list;

    list = malloc(sizeof(struct node) * 1);
    if(!list) 
    {
        printf("Error\n");
        exit(1);
    }

    list->x = (int)malloc(sizeof(int) * 100);
    if(!list->x) 
    {
        printf("Error\n");
        exit(1);
    }

    list->next = NULL;
    return list;
}

struct node* PushBack(struct node *head, struct node* tail, int* size, int x) {
    if(*size == 0)
    {
        head = tail = New();
        *size += 1;
        tail->x = x;
        head->x = x;
    } else {
        struct node* list = New();
        *size += 1;
        list->next = tail;
        tail = list;
        list->x = x;
    }
    return tail;
}

struct node* get(struct node *tail,int index) {
    struct node* current = tail;
    while(index--)
    {
     current = current -> next;
    }
    return current;
}

void Sort(struct node* tail, int size)
{
    int i, j;
    for (i = 0 ; i < size - 1; ++i)
    {
        for (j = 0 ; j < size - 1 ; ++j)
        {
            if (get(tail,j)->x > get(tail,j+1)->x)
            {
                int temp = get(tail, j)->x;
                get(tail, j)->x = get(tail, j+1)->x;
                get(tail, j+1)->x = temp;
            }
        }
    }
}

void Print (struct node* tail, int size){
    int i;
    for (i = 0 ; i < size; ++i)
    {
        printf("%d",get(tail, i)->x);
        printf("\n");
    }
}