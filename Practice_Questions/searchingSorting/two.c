#include <stdio.h>
#include <stdlib.h>

void searchKey(int A[], int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (A[i-1] == i)
      printf("%d ", i);
    else 
      continue;
  }
  return;
}

int main()
{
  int n, key;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("Key is found at positions : \n");
  searchKey(arr, n);
  return 0;
}