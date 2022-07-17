// Determine whether the given array is sorted or not

#include <iostream>
using namespace std;

int isSorted(int A[], int n)
{
  if(n==0 || n == 1)     // single element is always sorted
    return 1;
  if((A[0] < A[1]) && isSorted(A+1, n - 1))
    return 1;
  return 0;
}

int main()
{
  int arr[] = {1,222,35,55};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << isSorted(arr, n) << endl;

  return 0;
}