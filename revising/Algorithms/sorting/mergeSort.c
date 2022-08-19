// time complexity : O(n*logn)
// space complexity : n + logn

#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int start, int mid, int end)
{
  int i = 0, j = 0, k = start;
  int n1 = mid - start + 1;
  int n2 = end - mid;
  int *leftArr = (int *)calloc(n1, sizeof(int));
  int *rightArr = (int *)calloc(n2, sizeof(int));

  for (int i = 0; i < n1; i++)
    leftArr[i] = A[start + i];
  for (int j = 0; j < n2; j++)
    rightArr[j] = A[mid + 1 + j];

  while (i < n1 && j < n2)
  {
    if (leftArr[i] <= rightArr[j])
      A[k++] = leftArr[i++];
    else
      A[k++] = rightArr[j++];
  }

  while (i < n1)
  {
    A[k++] = leftArr[i++];
  }

  while (j < n2)
  {
    A[k++] = rightArr[j++];
  }

  return;
}

void recMergeSort(int A[], int start, int end)
{
  if (start < end)
  {
    int mid = (start + end) / 2;
    recMergeSort(A, start, mid);
    recMergeSort(A, mid + 1, end);
    merge(A, start, mid, end);
  }

  return;
}

void itrMergeSort(int A[], int n)
{
  int pass, i, low, mid, high;
  for (pass = 2; pass <= n; pass *= 2)
  {
    for (i = 0; i + pass - 1 < n; i += pass)
    {
      low = i;
      high = i + pass - 1;
      mid = (low + high) / 2;
      merge(A, low, mid, high);
    }
  }

  if (pass / 2 < n) // odd number of elements
    merge(A, 0, pass / 2, n - 1);
}

void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Before sorting array elements are - \n");
  printArray(arr, n);
  recMergeSort(arr, 0, n - 1);
  printf("After recursive-Merge-sorting array elements are - \n");
  printArray(arr, n);
  itrMergeSort(arr, n);
  printf("After iterative-Merge-sorting array elements are - \n");
  printArray(arr, n);

  return 0;
}