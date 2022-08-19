// Best Case : O(1)
// Average Case :	O(logn)
// Worst Case	: O(logn)

// Space complexity : O(1)

#include <stdio.h>
#include <stdlib.h>

int RBinarySearch(int A[], int left, int right, int key)
{
  if (left <= right)
  {
    int mid = left + (right - left) / 2; // middle element is the key

    if (A[mid] == key)
      return mid;

    if (A[mid] > key)
      return RBinarySearch(A, left, mid - 1, key);

    return RBinarySearch(A, mid + 1, right, key);
  }

  return -1;
}

int itrBinarySearch(int A[], int n, int key)
{
  int low = 0, high = n-1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (key == A[mid]) 
      return mid;
    else if (key < mid) 
      high = mid -1;
    else
      low = mid + 1;
  }
  return -1;
}

int main()
{
  int n;
  printf("Enter the size of the array : ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the array elments: \n");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int key;
  printf("Enter the key: ");
  scanf("%d", &key);
  // int status = RBinarySearch(arr, 0, n-1, key);
  int status = itrBinarySearch(arr, n, key);
  (status == -1) ? printf("Key not found!\n") : printf("Key found at index %d", status);

  return 0;
}