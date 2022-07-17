// key idea is to take larger element to the end by repeatedly swapping the adjacet elements.
// Time complexity: O(n^2)
// Space complexity: O(1)

/*

1st iteration       j = 0 -> n-2
  5,4,3,2,1
  4,5,3,2,1
  4,3,5,2,1
  4,3,2,5,1
  4,3,2,1,5

2nd iteration       j = 0 -> n-3
  4,3,2,1
  3,4,2,1
  3,2,4,1
  3,2,1,4

3rd iteration        j = 0 -> n-4
  3,2,1
  2,3,1
  2,1,3
  1,2,3

4th iteration        j = 0 -> n-5
  2,1
  1,2

We need to do the swapping process n-1 times for n given elements.

*/

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)  //sort the elements in increasing order
{
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++)   //repeated swapping
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);

}

int main()
{
  int arr[] = {-5, 2, 9, 6, 2, -7, 4, 1, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);

  for(auto x : arr)
    cout << x << " ";
  return 0;
}