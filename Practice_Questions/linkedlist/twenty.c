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

void reverseDisplay(node *p)
{
  node *temp = p;
  while (temp->next)
    temp = temp->next;
  node *btemp = temp;
  while (btemp)
  {
    printf("%d ", btemp->data);
    btemp = btemp->prev;
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

void insert(dll *p, int index, int x)
{
  if (index <= 0 || index > count(*p))
  {
    printf("invalid index\n");
    return;
  }

  else
  {
    int i = 0;
    node *temp, *nn, *back;
    temp = *p;
    back = NULL;
    nn = (node *)malloc(sizeof(node));
    nn->data = x;
    nn->prev = NULL;
    if (index == 1)
    {
      temp->prev = nn;
      nn->next = temp;
      *p = nn;
      return;
    }
    else
    {
      for (int i = 1; i < index; i++)
        temp = temp->next;

      nn->next = temp->next;
      nn->prev = temp;
      if (temp->next)
        temp->next->prev = nn;
      temp->next = nn;
    }
  }
  return;
}

int main()
{
  node *head;
  init(&head, 5);
  append(&head, 10);
  append(&head, 20);
  append(&head, 30);
  append(&head, 40);
  append(&head, 50);
  append(&head, 1050);
  append(&head, -8750);
  display(head);
  printf("Reverse Display : \n");
  reverseDisplay(head);

  return 0;
}
