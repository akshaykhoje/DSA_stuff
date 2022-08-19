#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node 
{
    int data;
    struct node *next;
} node;

void init(node **base, node **top, int x)
{
    *base = (node *)malloc(sizeof(node));
    (*base)->data = x;
    (*base)->next = NULL;
    *top = *base;
    return;
}

void push(node **top, int x)
{
    node *nn = (node *)malloc(sizeof(node));
    if (!nn)
    {
        printf("Stack is full\n");
        return;
    }
    nn->data = x;
    nn->next = NULL;
    (*top)->next = nn;
    *top = nn;
    return;
}

void display(node *base)
{
    while (base)
    {
        printf("%d ", base->data);
        base = base->next;
    }
    printf("\n");
    return;
}

int pop(node **base, node **top)
{
    int x = INT_MIN;
    node *temp, *back;
    temp = *base;
    back = NULL;
    while (temp->next)
    {
        back = temp;
        temp = temp->next;
    }
    x = temp->data;
    back->next = NULL;
    *top = back;
    free(temp);
    return x;
}

int isStackFull()
{
    node *new = (node *)malloc(sizeof(node));
    return new == NULL;
}

int peek(node *top)
{
    int x = INT_MIN;
    if (!top)
    {
        printf("Stack is empty\n");
        return x;
    }
    x = top->data;
    return x;
}

int main()
{
    node *sBase = NULL;      //base of the stack
    node *top = NULL;        //pointer to top of the stack
    init(&sBase, &top, 5);
    display(sBase);
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    push(&top, 40);
    push(&top, 50);
    push(&top, 60);
    printf("Peek : %d \n", peek(top));
    display(sBase);
    printf("popped out : %d \n", pop(&sBase, &top));
    printf("popped out : %d \n", pop(&sBase, &top));
    printf("Peek : %d \n", peek(top));

    return 0;
}