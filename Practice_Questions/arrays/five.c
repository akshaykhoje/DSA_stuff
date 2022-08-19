#include <stdio.h>
#include <stdlib.h>

void *alignNegatives(int A[], int n)
{
  int k = 0;
  int *ptr = (int *)calloc(n, sizeof(int));
  for (int i = 0; i < n; i++)
  {
    if (A[i] < 0)
      ptr[k++] = A[i];
    else
      ptr[n + k - i -1] = A[i];
  }
  return ptr;
}

void printArray(int A[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", A[i]);
  printf("\n");
  return;
}

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Original array:\n");
  printArray(arr, n);
  int *vals = alignNegatives(arr, n);
  printf("Aligned array:\n");
  printArray(vals, n);

  return 0;
}