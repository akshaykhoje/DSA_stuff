#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "dll.h"

void init(node **p, int x)
{
    *p = (node *)malloc(sizeof(node));
    (*p)->prev = NULL;
    (*p)->data = x;
    (*p)->next = NULL;
    return;
}

void append(node **p, int x)
{
    node *temp, *back, *nn;
    temp = *p;
    back = NULL;
    nn = (node *)malloc(sizeof(node));
    nn->data = x;
    nn->next = NULL;
    while (temp->next)
    {
        back = temp;
        temp = temp->next;
        temp->prev = back;
        back->next = temp;
        temp->next = NULL;
    }
    temp->next = nn;
    nn->prev = temp;
    nn->next = NULL;
    return;
}

void display(node *p)
{
    node *temp = p;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return;
}

void reverseDisplay(node *p)
{
    node *temp = p;
    while (temp->next)
        temp = temp->next;
    node *btemp = temp;
    while (btemp)
    {
        printf("%d ", btemp->data);
        btemp = btemp->prev;
    }
    printf("\n");
    return;
}

int count(node *p)
{
    node *temp = p;
    int i = 0;
    while (temp)
    {
        temp = temp->next;
        i++;
    }
    return i;
}

void insert(node **p, int index, int x)
{
    if (index <= 0 || index > count(*p))
    {
        printf("invalid index\n");
        return;
    }

    else
    {
        int i = 0;
        node *temp, *nn, *back;
        temp = *p;
        back = NULL;
        nn = (node *)malloc(sizeof(node));
        nn->data = x;
        nn->prev = NULL;
        if (index == 1)
        {
            temp->prev = nn;
            nn->next = temp;
            *p = nn;
            return;
        }
        else
        {
            for (int i = 1; i < index; i++)
                temp = temp->next;

            nn->next = temp->next;
            nn->prev = temp;
            if (temp->next)
                temp->next->prev = nn;
            temp->next = nn;
        }
    }
    return;
}