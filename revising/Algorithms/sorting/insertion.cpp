// insertion sort is similar to playing cards in our hands
// insert the card in its correct position in a sorted part
// TIME COMPLEXITY: O(n^2)

#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[], int n)
{
  for(int i = 1; i < n; i++)
  {
    int curr = arr[i];
    int prev = i-1;
    while(prev >= 0 && arr[prev] > curr)
    {
      arr[prev+1] = arr[prev];
      prev--;
    }
    arr[prev+1] = curr;
  }
  return;
}

int main()
{
  int arr[] = {-5, 2, 9, 6, 2, -7, 4, 1, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
  insertion_sort(arr,n);
  for(auto x:arr)
    cout<<x<<", ";

  return 0;
}