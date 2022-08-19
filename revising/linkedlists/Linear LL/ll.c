#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
#include <limits.h>

void init(node **p, int x)
{
    *p = (node *)malloc(sizeof(node));
    (*p)->data = x;
    (*p)->next = NULL;
    return;
}

void append(node **p, int x)
{
    node *temp, *nn;
    temp = *p;
    nn = (node *)malloc(sizeof(node));
    nn->data = x;
    nn->next = NULL;
    while (temp->next)
        temp = temp->next;
    temp->next = nn;
    return;
}

void display(node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return;
}

int count(node *p)
{
    int i = 0;
    while (p)
    {
        p = p->next;
        i++;
    }
    return i;
}

int delete (node **p, int index)
{
    int val = INT_MIN;
    node *temp = *p;
    node *back = *p;
    if (index < 0 || index > count(*p))
    {
        printf("Invalid index\n");
        return val;
    }
    else
    {
        if (index == 1)
        {
            val = (*p)->data;
            *p = temp->next;
            temp->next = NULL;
            free(temp);
        }
        else
        {
            int i = 1;
            while (i < index)
            {
                back = temp;
                temp = temp->next;
                i++;
            }
            val = temp->data;
            back->next = temp->next; // connected the link from the *back to the node next to that of temp
            temp->next = NULL;
            free(temp);
        }
    }
    return val;
}

int maxElement(node *p)
{
    int max = 0;
    // node *temp = p;
    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int *search(node *p, int key, int *indices)
{
    int appearance = 0;
    node *temp = p;
    while (temp)
    {
        if (temp->data == key)
            appearance++;
        temp = temp->next;
    }
    if (appearance >= 1)
    {
        int *indices2 = (int *)realloc(indices, sizeof(int) * appearance);
        node *temp2 = p;
        int j = 1;
        int index = 1;
        indices2[0] = appearance;
        while (temp2)
        {
            if (temp2->data == key)
            {
                indices2[j] = index;
                j++;
            }
            index++;
            temp2 = temp2->next;
        }
        return indices2;
    }
    else
    {
        printf("Key not found!\n");
        // return NULL;
        exit(0);
    }
}

void insert(node **p, int index, int x)
{
    if (index < 0 || index > (count(*p) + 1))
    {
        printf("Index out of range\n");
        return;
    }
    else
    {
        node *temp, *nn;
        temp = *p;
        nn = (node *)malloc(sizeof(node));
        nn->data = x;
        int i = 1;
        if (index > 1 && index <= count(*p))
        {
            while (i < index - 1)
            {
                temp = temp->next;
                i++;
            }
            nn->next = temp->next;
            temp->next = nn;
        }
        else if (index == count(*p) + 1)
        {
            while (i < index - 1)
            {
                temp = temp->next;
                i++;
            }
            temp->next = nn;
            nn->next = NULL;
        }
        else
        {
            nn->next = *p;
            *p = nn;
        }
    }
    return;
}

void reverse(node **p) // sliding pointers
{
    node *a, *b, *c;
    a = *p;
    b = c = NULL;
    while (a)
    {
        c = b;
        b = a;
        a = a->next;
        b->next = c; // reversing the links from b to c as we move forward
    }
    *p = b; // the head pointer points to b now, i.e. at the end of the original link. the link being reversed completely
    return;
}

int isLinkSorted(node *p) // returns 1 if sorted in ascending order, else 0
{
    while (p->next)
    {
        if (p->data < p->next->data)
            p = p->next;
        else
            return 0;
    }
    return 1;
}

void concatenate(node **p, node **q)
{
    node *temp1 = *p;
    while (temp1->next)
        temp1 = temp1->next; // reached the end of first list
    temp1->next = *q;        // connecting to the second list
    *q = NULL;
    return;
}

void *merge(node **first, node **second)
{
    node *third, *last; // third is the head of the merged list, last is its end

    if ((*first)->data < (*second)->data)
    {
        third = last = *first;
        *first = (*first)->next;
        last->next = NULL;
    }
    else
    {
        third = last = *second;
        *second = (*second)->next;
        last->next = NULL;
    }
    // Now compare data of the two lists and twists links accordingly
    // whoever's data is smaller, last points there and its next is NULL i.e. the merged list terminates
    // move the first/second pointer to its next as per the smaller number is found
    int i = 0;
    while (*first && *second)
    {
        if ((*first)->data < (*second)->data)
        {
            last->next = *first;
            last = *first;
            (*first) = (*first)->next;
            last->next = NULL;
        }
        else
        {
            last->next = *second;
            last = *second;
            (*second) = (*second)->next;
            last->next = NULL;
        }
    }
    // when only one node from each list is remaining
    if (*first)
        last->next = *first;
    else
        last->next = *second;
    return third;
}

int isLoopPresent(node **p)
{
    node *temp1, *temp2;
    temp1 = temp2 = *p;
    while (temp1)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
        if (temp1==temp2)
            return 1;
    }
    return 0;
}