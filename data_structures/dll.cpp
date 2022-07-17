#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> list1 = {5,6,23,9,9};
  list1.emplace_back(8);
  list1.emplace_front(1);
  list1.sort();
  for(auto &elm:list1)
  {
    cout << elm << " ";
  }
  cout<<endl;
  list1.unique();
  for(auto &elm:list1)
  {
    cout << elm << " ";
  }
  return 0;
}