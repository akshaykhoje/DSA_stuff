// select a pivot element preferrably the end element
/*
i : loop variable
j : index of smaller element
*/
// whenever ith element is not less than pivot element and no element before (i+k)th is less then pivot element, then swap(arr[i], arr[i+k])

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}

int partition(int A[], int low, int high)
{
  int pivot = A[high];
  int i = low-1;

  for (int j = low; j <= high; j++)
  {
    if (A[j] <= pivot)
    {
      i++;
      swap(&A[i], &A[j]);
    }
  }
  return (i);
}

void quickSort(int A[], int low, int high)
{
  if (low < high)
  {
    int partsAt = partition(A, low, high);

    quickSort(A, low, partsAt - 1);
    quickSort(A, partsAt + 1, high);
  }
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
  printf("Enter the size of the array : ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the array of elements : \n");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printArray(arr, n);
  quickSort(arr, 0, n - 1);
  printArray(arr, n);
  return 0;
}
