#include <stdio.h>
#include <stdlib.h>

void rotateByOne(int A[], int n)
{
  int x = A[n - 1];
  for (int i = n - 1; i > 0; i--)
    A[i] = A[i - 1];
  A[0] = x;
  return;
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
  int n, rotations;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("Original Array:\n");
  printArray(arr, n);
  printf("Enter the number of rotations: ");
  scanf("%d", &rotations);
  for (int i = 0; i < rotations; i++)
      rotateByOne(arr, n);
  
  printf("Rotated Array:\n");
  printArray(arr, n);
  return 0;
}