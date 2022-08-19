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

void reverse(node **p) // sliding pointers
{
    node *a, *b, *c;
    a = *p;
    b = c = NULL;
    while (a)
    {
        c = b;
        b = a;
        a = a->next;
        b->next = c; // reversing the links from b to c as we move forward
    }
    *p = b; // the head pointer points to b now, i.e. at the end of the original link. the link being reversed completely
    return;
}

int main()
{
  node *head;
  init(&head, 1);
  append(&head, 10);
  append(&head, 301);
  append(&head, 20);
  append(&head, 540);
  display(head);
  reverse(&head);
  display(head);
  return 0;
}