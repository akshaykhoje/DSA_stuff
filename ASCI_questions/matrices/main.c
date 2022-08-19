#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    int i;
    int j;
    int x;
} ele;

typedef struct sparse
{
    int m;
    int n;
    int num;
    struct element *e;
} sparse;

void create(sparse *s)
{
    printf("Enter dimensions: ");
    scanf("%d%d", &s->m, &s->n);
    printf("Enter the number of non-zero elements: ");
    scanf("%d", &s->num);
    s->e = (ele *)malloc(sizeof(ele) * s->num);
    printf("Enter all the elements : \n");
    for (int i = 0; i < s->num; i++)
        scanf("%d%d%d", &s->e[i].i, &s->e[i].j, &s->e[i].x);
    return;
}

sparse *add(sparse s1, sparse s2) // returns a sparse data type - the addition matrix
{
    sparse *sum;
    int i, j, k;
    i = j = k = 0;
    if (s1.n != s2.n && s1.m != s2.m)
        return NULL;
    sum = (sparse *)malloc(sizeof(sparse));
    sum->e = (ele*)malloc((s1.num + s2 . num) *sizeof(ele));
    while (i < s1.num && j < s2.num)
    {
        if (s1.e[i].i < s2.e[j].i)
            sum->e[k++] = s1.e[i++];
        else if (s1.e[i].i > s2.e[j].i)
            sum->e[k++] = s2.e[j++];
        else
        {
            if (s1.e[i].j < s2.e[j].j)
                sum->e[k++] = s1.e[i++];
            else if (s1.e[i].j > s2.e[j].j)
                sum->e[k++] = s2.e[j++];
            else
            {
                sum->e[k] = s1.e[i];
                sum->e[k++].x = s1.e[i++].x + s2.e[j++].x;
            }
        }
    }
    for (; i < s1.num; i++)
        sum->e[k++] = s1.e[i];
    for (; j < s2.num; j++)
        sum->e[k++] = s2.e[j];
    sum->m = s1.m;
    sum->n = s1.n;
    sum->num = k;
    return sum;
}

void display(sparse s)
{
    int i, j, k = 0;
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (i == s.e[k].i && j == s.e[k].j)
                printf("%d ", s.e[k++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    sparse s1, s2, *s3;
    printf("\n\nEnter details for first sparse matrix: \n\n");
    create(&s1);
    printf("\n\nEnter details for second sparse matrix: \n\n");
    create(&s2);
    s3 = add(s1, s2);
    printf("First matrix : \n");
    display(s1);
    printf("Second matrix : \n");
    display(s2);
    printf("Sum matrix : \n");
    display(*s3);
    return 0;
}