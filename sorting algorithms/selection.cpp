// the key idea here is to repeatedly find the minimum element from unsorted part and keep swapping it with the current element being parsed
// this way we sort the first n-1 elements and the last element is automatically sorted.
// TIME COMPLEXITY: O(n^2)

#include <bits/stdc++.h>
using namespace std;


void selection_sort(int arr[], int n)
{
  for (int pos = 0; pos<n-1; pos++)
  {
    int curr = arr[pos];
    int min_pos = pos;

  //find the element to be swapped with the current element
    for(int j = pos; j<n; j++)
    {
      if(arr[j] < arr[min_pos])
        min_pos = j;
    }
    swap(arr[pos], arr[min_pos]);
  }
  return;
}


int main()
{
  int arr[] = {-5, 2, 9, 6, 2, -74, 4, 1, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
  selection_sort(arr, n);
  for(auto x:arr)
    cout<<x<<", ";
  return 0;
}