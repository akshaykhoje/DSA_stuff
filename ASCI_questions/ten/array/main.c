#include<stdio.h>
#include<stdlib.h>
#include "ten.h"

int main()
{
    stack s1;
    int size, noOfEle, num;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    init(&s1, size);
    printf("is Empty : %d\n", isStackEmpty(s1));
    printf("is Full : %d\n", isStackFull(s1));
    push(&s1, 10);
    push(&s1, 30);
    push(&s1, 40);
    push(&s1, 60);
    
    display(s1);
    printf("Popped element : %d\n", pop(&s1));
    printf("Popped element : %d\n", pop(&s1));
    printf("element at index 0 is : %d\n", peek(s1, 0));
    printf("stacktop : %d\n", stackTop(s1));
    return 0;
}