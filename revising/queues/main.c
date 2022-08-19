#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
  node *front;
  node *rear;
  init(&front, &rear, 10);
  display(front);
  enqueue(&front, &rear, 20);
  enqueue(&front, &rear, 30);
  enqueue(&front, &rear, 590);
  enqueue(&front, &rear, 660);
  display(front);
  int *vals = peek(front, rear);
  printf("Front element of queue is : %d\n", vals[0]);
  printf("Rear element of queue is : %d\n", vals[1]);
  printf("Queue full : %d\n",isQueueFull());
  return 0;
}