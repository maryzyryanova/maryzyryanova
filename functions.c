#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

void push_back(int a , struct list* Head, struct list* Tail){
    struct list* current;
    //current = (struct list*)malloc(sizeof(struct list));
    if ( Head == NULL && Tail == NULL) {
        Head = Tail = current;
        current->field = a;
        current->next = NULL; 
        Head->Size++;
        Tail->Size = Head->Size;
    }
    else {
        struct list* temp;
        current->field = a ;
        current->next = Tail;
        Tail = current;
        Tail->Size++;
        Head->Size++;
    }
}

/*void PrintList(struct list *Tail)
{
  struct list *str;
  int i;
  str = Tail;
  for (i = 0; i < str->Size; i++)
  {
    printf("%d ", str->field);
    str = str->next;  
  }
  printf("\n");
}

void FromBuffer(int buffer[5], struct list* Tail){
  int i;
  for (i = 0; i < 5; i++)
  {
    push_back(buffer[i], Tail);
  }
}

void Sort(struct list* list_1 , struct list* Head,struct list* Tail)
{
  int i, j;
  struct list_1* node;
  
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (list_1->field > list_1->next->field)
      {
        int buffer = list_1 -> field;
        list_1 ->field = list_1->next->field;
        list_1->next->field = buffer;
      }
      
    }
    
  }
  return list_1;
}
*/