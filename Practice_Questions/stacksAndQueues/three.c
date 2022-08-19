#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct stack
{
  int size;
  int leftTop;
  int rightTop;
  int *array;
} stack;

void init(stack *s1, int size)
{
  printf("Inside init function  \n");
  s1->size = size;
  s1->leftTop = -1;
  s1->rightTop = size;
  s1->array = (int *)malloc(sizeof(size * sizeof(int)));
  return;
}

/*
int isEmpty(stack s)
{
  return s.top == -1; // if true, stack is empty else not empty
}

int isFull(stack s)
{
  return s.top == s.size - 1; // if true, stack is full else not full
}
*/

void leftPush(stack *s1, int x)
{
  if (s1->leftTop < s1->rightTop - 1)
  {
    s1->leftTop++;
    s1->array[s1->leftTop] = x;
  }
  else
    printf("Stack full!\n");
  return;
}

void rightPush(stack *s1, int x)
{
  if (s1->leftTop < s1->rightTop - 1)
  {
    s1->rightTop--;
    s1->array[s1->rightTop] = x;
  }
  else
    printf("Stack full!\n");
  return;
}

int leftPop(stack *s1)
{
  if (s1->leftTop >= 0)
  {
    int x = s1->array[s1->leftTop--];
    return x;
  }
  printf("Stack underflow!\n");
  return INT_MIN;
}

int rightPop(stack *s1)
{
  if (s1->rightTop < s1->size)
  {
    int x = s1->array[s1->rightTop++];
    return x;
  }
  printf("Stack underflow!\n");
  return INT_MIN;
}

// void display(stack s1)
// {
//   while (!isEmpty(s1))
//     printf("%d ", pop(&s1));
//   printf("\nisEmpty : %d", isEmpty(s1));

//   return;
// }

void leftDisplay(stack *s1) 
{
  int l = s1->leftTop;
  printf("\nLeft Array : \n");
  while (l >= 0)
    printf("%d ", s1->array[l--]);
  return;
}

void rightDisplay(stack *s1) 
{
  int r = s1->rightTop;
  printf("\nRight Array : \n");
  while (r < s1->size)
    printf("%d ", s1->array[r++]);
  return;
}

int main()
{
  stack s1;
  int size;
  printf("Enter the size of the array : ");
  scanf("%d", &size);
  init(&s1, size);
  leftPush(&s1, 60);
  leftPush(&s1, 50);
  leftPush(&s1, 40);
  leftPush(&s1, 30);
  leftPush(&s1, 20);
  leftPush(&s1, 1);
  rightPush(&s1, -1);
  rightPush(&s1, -2);
  rightPush(&s1, -3);
  rightPush(&s1, -4);
  rightPush(&s1, -5);
  rightPush(&s1, -6);
  leftDisplay(&s1);
  rightDisplay(&s1);
  printf("Popped from left stack : %d \n",leftPop(&s1));
  printf("Popped from left stack : %d \n",leftPop(&s1));
  printf("Popped from right stack : %d \n",rightPop(&s1));
  printf("Popped from right stack : %d \n",rightPop(&s1));
  leftDisplay(&s1);
  rightDisplay(&s1);
  // display(st);
  return 0;
}
