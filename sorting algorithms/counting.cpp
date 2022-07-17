// counting sort algorithm
// create a new array of size of the largest element in the array
// iterate through the given array and increment the count of the element in the new array
// TIME COMPLEXITY : O(n + range)

#include <iostream>
#include <vector>
using namespace std;


void counting_sort(int arr[], int n)
{
  int largest = -1;

  for(int i = 0; i < n; i++)
      largest = max(largest, arr[i]);

  //create a count array/vector
  vector<int> freq(largest + 1, 0);

  //update the frequency
  for(int i = 0; i < n; i++)
    freq[arr[i]]++;

  //put back the elements from freq into original array

  int j = 0;
  for(int i = 0; i <= largest; i++)
  {
    while(freq[i] > 0)
    {
      arr[j] = i;
      freq[i]--;
      j++;
    }
  }
}


int main()
{
  int arr[] = {5, 9, 6, 7, 4, 1, 10};
  int n = sizeof(arr)/sizeof(arr[0]);

  counting_sort(arr, n);
  for(int i = 0; i<n; i++)
    cout<<arr[i]<<", ";

  return 0; 
}