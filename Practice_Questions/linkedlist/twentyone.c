// incomplete

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node
{
  struct node *prev;
  int data;
  struct node *next;
} node;

typedef node *dll;

void init(dll *p, int x)
{
  *p = (node *)malloc(sizeof(node));
  (*p)->prev = NULL;
  (*p)->data = x;
  (*p)->next = NULL;
  return;
}

void append(dll *p, int x)
{
  node *temp, *back, *nn;
  temp = *p;
  back = NULL;
  nn = (node *)malloc(sizeof(node));
  nn->data = x;
  nn->next = NULL;
  while (temp->next)
    temp = temp->next;
  temp->next = nn;
  nn->prev = temp;
  nn->next = NULL;

  return;
}

void display(node *p)
{
  node *temp = p;
  while (temp)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
  return;
}

int count(node *p)
{
  node *temp = p;
  int i = 0;
  while (temp)
  {
    temp = temp->next;
    i++;
  }
  return i;
}

int *pairsOfSum(node *p, int key){
  int *ptr = (int *)calloc(2, sizeof(int));      //to store pairs of arrays
  node *temp = p, *travel = p;
  int size = 0;
  int i = 0;
  while (travel)
  {
    travel = travel->next;
    if (temp->data + travel->data == key)
    { 
      size += 2;
      ptr = realloc(ptr, size);
    }
    while (i < size) 
    {
      ptr[i++] = temp->data;
      ptr[i++] = travel->data;
    }
  }
  return ptr;
}

int main()
{
  node *head;
  init(&head, 5);
  append(&head, 10);
  append(&head, 20);
  append(&head, 35);
  append(&head, 40);
  append(&head, 50);
  append(&head, 1050);
  append(&head, -8750);
  display(head);
  int *arr = pairsOfSum(head, 30);
  printf("%d ", arr[0]);
  printf("%d ", arr[1]);
  
  

  return 0;
}
