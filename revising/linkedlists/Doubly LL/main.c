#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

int main()
{
    node *head;
    init(&head, 5);
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);
    display(head);
    // printf("Reverse Display : \n");
    // reverseDisplay(head);
    // insert(&head, 1, 100);
    // display(head);
    // insert(&head, 2, 200);
    insert(&head, 1, 400);
    display(head);
    insert(&head, 3, 600);
    // insert(&head, 4, 800);
    display(head);
    // insert(&head, 1, 10001);
    // display(head);
    // reverseDisplay(head);
    // display(head);
    // reverseDisplay(head);
    return 0;
}
