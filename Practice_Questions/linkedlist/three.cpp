/*
3. Detect Loop in linked list
*/

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

// int isLoopPresent(list *p)
// {
//   node *temp1, *temp2;
//   temp1 = temp2 = *p;
//   while (temp1)
//   {
//     temp1 = temp1->next->next;
//     temp2 = temp2->next;
//     if (temp1 == temp2)
//       return 1;
//   }
//   return 0;
// }

void createLoop(node *p)
{
  node *first, *last;
  first = first->next;
  while (p->next)
    p = p->next;
  last = p;
  last->next = first;
  return;
}

int detectLoop(node *p)
{
  node *current, *last;
  current = last = p;
  do
  {
    current = current->next;
    last = last->next;
    last = last ? last->next : last;
  } while (current && last && current != last);
  if (current == last)
    return 1;
  else
    return 0;
}

int main()
{
  list head;
  init(&head, 1);
  append(&head, 102);
  append(&head, 204);
  append(&head, 306);
  append(&head, 407);
  append(&head, 508);
  createLoop(head);
  printf("Loop Present: %d", detectLoop(head));

  return 0;
}