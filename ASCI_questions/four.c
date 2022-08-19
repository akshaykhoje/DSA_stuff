// First and last occurrences of x
// works in C. IMPLEMENT IN CPP or PYTHON to submit on gfg

#include <stdio.h>
#include <stdlib.h>

int findFnL(int *arr, int n, int key, int *pos)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            if (i==0 && arr[i] == key)
                pos[0] = i;
            else if (arr[i - 1] != key)
                pos[0] = i;

            if (i==n-1 && arr[i] == key)
                pos[1] = i;
            else if (arr[i + 1] != key)
                pos[1] = i;
        }
    }
    if (pos[0] == -1)
        return -1;
    
    return 1;
}

int main()
{
    int size;
    printf("Enter the size of the sorted array : ");
    scanf("%d", &size);
    int A[size];

    printf("Enter the sorted array : \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &A[i]);

    int key;
    printf("Enter the key : ");
    scanf("%d", &key);

    int positions[] = {-1, -1};
    int val = findFnL(A, size, key, positions);

    if (val == 1)
    {
        printf("Key is found at positions : \n");
        for (int i = 0; i < 2; i++)
            printf("%d ", positions[i]);
    }
    else
        printf("%d", val);

    return 0;
}
