#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

// int add1(node *p)
// {
//   int sum=0;
//   int noOfNodes = count(p);
//   for (int i = 0; i < noOfNodes-1; i++)
//   {
//     int x = p->data;
//     int exp = pow(x, i);
//     sum = sum + exp;
//     p = p->next;
//   }
//   return sum;
// }

int main()
{
  node *head;
  init(&head, 10);
  append(&head, 20);
  append(&head, 30);
  append(&head, 40);
  append(&head, 50);
  printf("Sum: %d\n", add1(head));
  // int ans = pow(2,3);
  // printf("pow : %d\n", ans);
  display(head);
  return 0;
}