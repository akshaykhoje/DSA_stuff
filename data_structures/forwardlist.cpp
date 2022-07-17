#include <bits/stdc++.h>
using namespace std;

int main()
{
  forward_list<int> list1;
  forward_list<int> list2 = {4,56,2,1,3};

  cout<<list2.front()<<endl;

  // list1.push_front(1);
  // list1.push_front(34);
  // list1.push_front(5);
  // list1.push_front(-9);
  // list1.reverse();

  list1.merge(list2);
  list1.sort();
  for(auto &elm:list1)
  {
    cout << elm << " ";
  }
  
  return 0;
}