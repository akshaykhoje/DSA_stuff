#include <stdio.h>
#include <stdlib.h>
#include "cll.h"

int main()
{
    node *clist;
    init(&clist, 6);
    append(&clist, 10);
    append(&clist, 20);
    append(&clist, 30);
    append(&clist, 50);
    display(clist);
    printf("Count : %d\n", count(clist));
    insert(&clist,1,-523);
    display(clist);
    delete(&clist, 1);
    display(clist);
    return 0;
}