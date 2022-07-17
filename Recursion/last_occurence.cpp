#include <iostream>
using namespace std;


int is_present(int A[], int n, int key)
{ 
  //base case
  if(n == 0)
    return -1;
  //rec case
  int subIndex = is_present(A + 1, n - 1, key);
  if(subIndex == -1)
    if(A[0] == key)
      return 0;
    else
      return -1;
  else
    return subIndex + 1;
}


int main()
{
  int arr[] = {1, 6, 2, 5, 8, 24, 6, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key;
  cin >> key;
  cout << is_present(arr, size, key) << endl;
  return 0;
}