#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
#include <limits.h>

int main()
{
    // node *head;
    // init(&head, 1);
    // append(&head, 11);
    // append(&head, 20);
    // append(&head, 30);
    // append(&head, 40);
    // append(&head, 55);
    // append(&head, 11221);
    // append(&head, -654);
    // append(&head, 44);
    // display(head);
    // printf("count : %d\n", count(head));
    // delete(&head, 2);
    // delete(&head, 1);
    // printf("count : %d\n", count(head));
    // display(head);
    // delete(&head, 3);
    // display(head);
    // printf("Max element : %d\n", maxElement(head));

    // int *indices = (int *)malloc(sizeof(int));
    // int key;
    // printf("Enter the key to search in the linked list: ");
    // scanf("%d", &key);
    // int *ptr = search(head, key, indices);
    // int len = ptr[0];
    // printf("The key %d is found at index positions : \n", key);
    // for (int i = 1; i <= len; i++)
    //     printf("%d ", ptr[i]);
    // printf("\n");
    // display(head);
    // insert(&head, 4, 25);
    // display(head);
    // reverse(&head);
    // display(head);
    // delete(&head, 5);
    // display(head);
    // printf("isLinkSorted : %d\n", isLinkSorted(head));

    node *link1, *link2;
    init(&link1, -5);
    append(&link1, 102);
    append(&link1, 204);
    append(&link1, 306);
    append(&link1, 407);
    append(&link1, 508);

    init(&link2, -66);
    append(&link2, 110);
    append(&link2, 1230);
    append(&link2, 20000);
    // concatenate(&link1, &link2);
    node *ptr2merge = merge(&link1, &link2);
    display(ptr2merge);
    printf("isLoopPresent : %d\n", isLoopPresent(&link1));
    return 0;
}