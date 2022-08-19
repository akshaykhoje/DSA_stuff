#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
  int data;
  struct node *next;
} node;

typedef node *list;

void init(list *p, int x)
{
    *p = (node *)malloc(sizeof(node));
    (*p)->data = x;
    (*p)->next = NULL;
    return;
}

void append(list *p, int x)
{
    node *temp, *nn;
    temp = *p;
    nn = (node *)malloc(sizeof(node));
    nn->data = x;
    nn->next = NULL;
    while (temp->next)
        temp = temp->next;
    temp->next = nn;
    return;
}

int count(node *p)
{
  int i=0;
  while (p)
  {
    p = p->next;
    i++;
  }
  return i;
}

void display(node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return;
}

void last2first(list *p)
{
  node *tF, *tL, *temp;
  tF = tL = temp = *p;
  // temp = *p;
  // tF = *p;
  // tL = *p;
  int noOfNodes = count(temp);
  printf("count : %d\n", noOfNodes);
  for (int i = 0; i < noOfNodes-2; i++)
  {
    temp = temp->next;
    tL = tL->next;
  }
  tL = tL->next;
  tL->next = tF;
  temp->next = NULL;
  *p = tL;
  return;
}

int main()
{
  node *head;
  init(&head, 10);
  append(&head, 20);
  append(&head, 30);
  append(&head, 40);
  append(&head, 60);
  append(&head, 1110);
  append(&head, 350);
  display(head);
  last2first(&head);
  printf("Switched last node to first position\n");
  display(head);
  return 0;
}