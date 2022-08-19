#include <stdio.h>
#include <stdlib.h>
#include "cll.h"

void init(node **p, int x)
{
    *p = (node *)malloc(sizeof(node));
    (*p)->data = x;
    (*p)->next = *p; // only one node in the list, but circular
    return;
}

void display(node *p)
{
    node *temp = p;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != p);
    printf("\n");
    return;
}

void append(node **p, int x)
{
    node *temp = *p;
    node *nn = (node *)malloc(sizeof(node));
    nn->data = x;
    while (temp->next != *p)
        temp = temp->next;
    temp->next = nn;
    nn->next = *p;
    temp = nn;
    return;
}

int count(node *p)
{
    int i = 1;
    node *temp = p;
    while (temp->next != p)
    {
        temp = temp->next;
        i++;
    }
    return i;
}

void insert(node **p, int index, int x)
{
    if (index < 0 || index > count(*p))
    {
        printf("Invalid index\n");
        return;
    }
    node *temp = *p;
    node *nn = (node *)malloc(sizeof(node));
    nn->data = x;
    if (index == 0)
    {
        if (!(*p)) // if list is not initialized
        {
            nn->next = *p;
            *p = nn;
        }
        else
        {
            while (temp->next != *p)
                temp = temp->next;
            temp->next = nn;
            nn->next = *p;
        }
    }
    else
    {
        for (int i = 1; i < index; i++)
            temp = temp->next;
        nn->next = temp->next;
        temp->next = nn;
    }
    return;
}

void delete (node **p, int index)
{
    if (index <= 0 || index > count(*p))
    {
        printf("Invalid index\n");
        return;
    }
    else
    {
        node *temp = *p;
        node *back = *p;
        if (index == 1)
        {
            while (temp->next != *p)
                temp = temp->next;
            if (*p == temp)
            {
                free(*p);
                *p = NULL;
            }
            else
            {
                temp->next = (*p)->next;
                free(*p);
                *p = temp->next;
            }
        }
        else
        {
            for (int i = 1; i < count(*p) - 1; i++)
                temp = temp->next;
            back = temp->next;
            temp->next = back->next;
            free(back);
        }
    }
    return;
}