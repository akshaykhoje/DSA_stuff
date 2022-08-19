// Implement stack using array

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ten.h"

void init(stack *s, int size)
{
    s->size = size;
    s->top = -1;
    s->st = (int *)malloc(sizeof(int) * s->size);
    return;
}

void push(stack *s, int d)
{
    if (isStackFull(*s))
    {
        printf("Cannot insert. Ran out of space!\n");
        return;
    }
    else
    {
        s->top++;
        s->st[s->top] = d;
    }

    return;
}

int pop(stack *s)
{
    int x = INT_MIN;
    if (isStackEmpty(*s))
    {
        printf("stack empty!\n");
        return x;
    }
    x = s->st[s->top--];
    return x;
}

void display(stack s)
{
    for (int i = s.top; i >= 0; i--)
        printf("%d ", s.st[i]);
    printf("\n");

    return;
}

int isStackEmpty(stack s)
{
    return s.top == -1;
}

int isStackFull(stack s)
{
    return s.top == s.size - 1;
}

int peek(stack s, int index)
{
    if (index <= s.size && index >= 0)
    {
        for (int i = 0; i <= s.top; i++)
        {
            if (index == i)
                return s.st[i];      
        }
    }
    else
        return INT_MIN;
}

int stackTop(stack s)
{
    if (!isStackEmpty(s))
        return s.st[s.top];
    return INT_MIN;
}
