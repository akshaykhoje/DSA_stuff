#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

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
