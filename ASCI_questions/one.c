// 1. Reverse an array
// correct on gfg - ALL TEST CASES PASSED

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return;
}

int main(void)
{
    // printf("Enter the size of array: ");
    int cases;
    scanf("%d", &cases);
    for (int i = 0; i < cases; i++)
    {
        int size;
        scanf("%d", &size);
        int A[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < size / 2; i++)
        {
            swap(&A[i], &A[size - i - 1]);
        }
        printArray(A, size);
    }

    return 0;
}