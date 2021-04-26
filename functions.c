#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

struct list* Initialise(int a){
    struct list* current;
    current = (struct list*)malloc(sizeof(struct list));
    current->field = a;
    current->next = NULL;
    return(current);
}

struct list * AddToList(struct list* current, int number){
  struct list *temp, *str;
  temp = (struct list*)malloc(sizeof(struct list));
  str = current->next;
  current->next = temp; 
  temp->field = number; 
  temp->next = str; 
  return(temp);
}

struct list * DeleteFromList(struct list *current, struct list *root){
  struct list *temp;
  temp = root;
  while (temp->next != current){
    temp = temp->next;
  }
  temp->next = current->next;
  free(current);
  return(temp);
}

void PrintList(struct list *current)
{
  struct list *str;
  int i;
  str = current;
  for (i = 0; i < 10; i++)
  {
    printf("%d ", str->field);
    str = str->next;  
  }
  printf("\n");
}

void FromBuffer(int buffer[5], struct list* list_1){
  int i;
  for (i = 0; i < 5; i++)
  {
    list_1 = Initialise(buffer[i]);
    AddToList(list_1, buffer[i]);
  }
  PrintList(list_1);
}

struct list* Sort(struct list* list_1)
{
  int i, j;
  struct list temp;
  for (i = 0; i < 5; i++)
  {
    for (j = 4; j > i; j--)
    {
      if (list_1[j - 1] > list_1[j])
      {
        temp = list_1[j - 1];
        list_1[j - 1] = list_1[j];
        list_1[j] = temp;
      }
    }
    
  }
  return list_1;
}