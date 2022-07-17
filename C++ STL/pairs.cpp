#include <bits/stdc++.h>
using namespace std;

int main()
{
  pair<int,string> p;
  // p = make_pair(2,"hello");
  p = {5, "hello"};

  pair<int,string> p2 = p;       // send by value
  p2.first = 3;

  pair<int,string> &p3 = p;          //send by address
  // cout<<p.first<<" "<<p.second<<endl;
  // cout<<p2.first<<" "<<p2.second<<endl;
  // cout<<p3.first<<" "<<p3.second<<endl;

  //make an array of pairs
  pair<int,int> arr[3];
  arr[0] = {1,2};
  arr[1] = {3,4};
  arr[2] = {5,6};
  swap(arr[0],arr[2]);
  for (int i = 0; i < 3; i++)
  {
    cout<<arr[i].first<<" "<<arr[i].second<<endl;
  }

  
  return 0;
}