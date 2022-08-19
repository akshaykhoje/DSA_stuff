// TIME COMPLEXITY: O(n*log(n))


#include <iostream>
#include <algorithm>
using namespace std;


bool compare(int a, int b)
{
  return a > b;
}


int main()
{
  int arr[] = {-5, 22, 9, 6, 21, -7, 4, 1, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+n);
  for(auto x:arr)
    cout<<x<<", ";
  
  cout<<endl;
  // reverse(arr, arr+n);
  // for(auto x:arr)
  //   cout << x << ", ";

  // USING COMPARATORS
  sort(arr, arr+n, compare);
  for(auto x:arr)
    cout<<x<<", ";
  return 0;
}