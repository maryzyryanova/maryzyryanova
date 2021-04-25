#include "functions.h"
#include <stdio.h>


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
  str = current;
  do {
    printf("%d ", str->field);
    str = str->next;
  } while (str != NULL);
}