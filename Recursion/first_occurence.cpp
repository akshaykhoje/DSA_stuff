// Find the first occurence of an element in an array using RECURSION

#include <iostream>
using namespace std;

int is_present(int A[], int n, int key)
{
  // base case
  if (n == 0)
    return -1;

  // rec case
  if (A[0] == key)
    return 0;

  int subIndex = is_present(A + 1, n - 1, key);
  if (subIndex != -1)
    return subIndex + 1;

  return -1;
}

int main()
{
  int arr[] = {1, 6, 2, 5, 8, 24, 7, -2};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key;
  cin >> key;
  cout << is_present(arr, size, key) << endl;
  return 0;
}