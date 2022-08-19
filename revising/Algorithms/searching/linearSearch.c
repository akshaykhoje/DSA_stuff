// time complexity : O(n)

#include <stdio.h>
#include <stdlib.h>

int linearSearch(int A[], int key, int n)
{
  int i;
  for (i=0; i < n; i++)
  {
    if (A[i] == key)
      return i;
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
  int status = linearSearch(arr, key, n);
  if (status == -1)
    printf("Key not found!");
  else
    printf("Key found at index %d!\n", status);
  
  
  return 0;
}