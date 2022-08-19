#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "queue.h"

void init(node **f, node **r, int x)
{
  *f = (node *)malloc(sizeof(node));
  (*f)->data = x;
  (*f)->next = NULL;
  r = f;
  return;
}

void display(node *f)
{
  node *temp = f;
  while (temp)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
  return;
}

void enqueue(node **f, node **r, int x)
{
  node *temp;
  node *nn = (node *)malloc(sizeof(node));
  nn->data = x;
  nn->next = NULL;
  temp = *f;
  while (temp->next)
    temp = temp->next;
  temp->next = nn;
  *r = nn;
  return;
}

int dequeue(node **f)
{
  if (isQueueEmpty(*f))
  {
    printf("Queue is empty\n");
    exit(1);
  }
  
  node *temp = *f;
  int x = temp->data;
  *f = temp->next;
  temp->next = NULL;
  free(temp);
  return x;
}

int isQueueEmpty(node *f)
{
  return f == NULL;
}

int isQueueFull()
{
  node *new = (node *) malloc(sizeof(node));
  return new==NULL;
}

int *peek(node *f, node *r)
{
  int *arr = (int *)calloc(2, sizeof(int));
  arr[0] = f->data;
  arr[1] = r->data;
  return arr;
}
