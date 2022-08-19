// Reverse a linked list

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef node *head;

void init(head *p, int x)
{
    *p = (node *)malloc(sizeof(node));
    (*p)->data = x;
    (*p)->next = NULL;
    return;
}

void append(head *p, int x)
{
    head temp, nn;
    temp = *p;
    nn = (node *)malloc(sizeof(node));
    nn->data = x;
    while (temp->next)
        temp = temp->next;
    temp->next = nn;
    nn->next = NULL;
    temp = temp->next;
    return;
}

void display(head p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return;
}

int count(head p)
{
    int i = 0;
    while (p)
    {
        i++;
        p = p->next;
    }
    return i;
}

void delete (head *p, int index)
{
    int val = INT_MIN;
    head temp, back;
    temp = *p;
    back = *p;
    if (index < 0 || index > count(*p))
        return;
    else
    {
        if (index == 1) // shifing the head pointer to the second element of the list & deleting first node
        {
            temp = *p;
            *p = temp->next;
            temp->next = NULL;
            free(temp);
        }
        else
        {
            temp = *p;
            back = temp;
            for (int i = 1; i < index; i++)
            {
                back = temp;
                temp = temp->next;
            }
            back->next = temp->next;
            free(temp);
        }
        return;
    }
}

void reverse(head *p) // using array      : [O(n)]
{
    int *arr, i = 0;
    head temp = *p;

    arr = (int *)malloc(sizeof(int) * count(*p));
    while (temp) // store the initial values in the array
    {
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }
    temp = *p;
    i--;
    while (temp) // assign the values of the array in reverse to the nodes
    {
        temp->data = arr[i];
        temp = temp->next;
        i--;
    }
}

void reverse2(head *p)  //sliding pointers -> reversing the links while moving forward
{
    head a,b,c;
    a = *p;      
    b = NULL;
    c = NULL;
    while (a)
    {
        c = b;
        b = a;
        a = a->next;
        b->next=c;
    }
    *p = b;       //b is at the end of the list and all the links have been reversed in the above loop.
    return; 
}

int main()
{
    head p1, temp;
    init(&p1, 5);
    append(&p1, 10);
    append(&p1, 20);
    // display(p1);
    // delete (&p1, 3);
    // display(p1);
    // printf("\n%d",count(p1));
    append(&p1, 40);
    append(&p1, 50);
    append(&p1, 60);
    display(p1);
    // reverse(&p1);
    reverse2(&p1);
    display(p1);
    return 0;
}