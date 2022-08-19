#include <stdio.h>
#include <stdlib.h>

void *merge(int A1[], int A2[], int n1, int n2)
{
  int i = 0, j = 0, k = 0;
  int *A3 = (int *)calloc(n1 + n2, sizeof(int));
  while (i < n1 && j < n2)
  {
    if (A1[i] <= A2[j])
    {
      A3[k++] = A1[i++];
    }
    else
    {
      A3[k++] = A2[j++];
    }
  }
  while (i < n1)
  {
    A3[k++] = A1[i++];
  }
  while (j < n2)
  {
    A3[k++] = A2[j++];
  }

  return A3;
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
  int n1;
  int n2;
  scanf("%d", &n1);
  scanf("%d", &n2);
  int arr1[n1], arr2[n2];
  for (int i = 0; i < n1; i++)
    scanf("%d", &arr1[i]);
  for (int i = 0; i < n2; i++)
    scanf("%d", &arr2[i]);
  printf("First array:\n");
  printArray(arr1, n1);
  printf("Second array:\n");
  printArray(arr2, n2);

  int *ptr = merge(arr1, arr2, n1, n2);
  printf("Merged array:\n");
  printArray(ptr, n1 + n2);

  return 0;
}