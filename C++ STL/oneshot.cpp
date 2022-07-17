#include <bits/stdc++.h>
using namespace std;

/*
C++ STL is divided into four parts :
1. algorithms
2. containers
3. functions     // NOT REQUIRED
4. iterators
*/

void explainPair()
{
  pair<int, int> p = {3, 5};
  cout << p.first << " " << p.second << endl;

  pair<int, pair<int, int>> p1 = {3, {5, 6}};
  cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

  pair<int, int> arr[] = {{3, 5}, {4, 6}, {5, 9}};
  cout << arr[1].second << endl;
  ;

  return;
}

void explainVector()
{
  // use vectors when you don't know the size of storage required
  vector<int> v;

  // v.push_back(4);
  // v.push_back(7);
  // v.emplace_back(100);      //this is faster than push_back
  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout<<v[i]<<" ";
  // }
  // cout<<endl;

  // vector<pair<int,int>>vec;
  // vec.push_back({3,5});
  // vec.emplace_back(1,7);
  // for (int i = 0; i < vec.size(); i++)
  // {
  //   cout<<vec[i].first<<" "<<vec[i].second<<endl;
  // }

  // //vector with n instances of a number :
  // vector<int> v1(5,100);       //we have five 100s here
  // for (int i = 0; i < v1.size(); i++)
  // {
  //   cout<<v1[i]<<" ";
  // }
  // cout<<endl;

  // passing a copy of a vector to another
  //  vector<int> v2(v1);
  //  v2[2] = 43;
  //  for (int i = 0; i < v2.size(); i++)
  //  {
  //    cout<<v2[i]<<" ";
  //  }
  //  cout<<endl;

  // --------------------------------------------------------------------------------
  //                                                ITERATORS
  v.emplace_back(4);
  v.emplace_back(65);
  v.emplace_back(2);
  v.emplace_back(77);
  v.emplace_back(-93);
  // vector<int>::iterator it = v.begin();
  // cout<<*(it)<<"  ";
  // it++;
  // cout<<*(it)<<"  ";
  // it+=2;
  // cout<<*(it)<<"  ";

  // vector<int>::iterator it = v.end();       //points to the memory location after the last element in the vector
  // vector<int>::iterator it2 = v.rend();     //points to the memory location before the first element in the vector
  // vector<int>::iterator it3 = v.rbegin();   //points to the memory location of the last element in the vector

  // cout<<v.back()<<" ";

  // printing the entire vector using iterators
  // for(vector<int>::iterator it = v.begin(); it !=v.end(); it++)
  // {
  //   cout<<*it<<" ";
  // }

  // THIS is STL! writing too much is bad here. When we do not know what data type is being used, or when we do not want to write long initialization, we use the keyword "auto".
  // for (auto it = v.begin(); it != v.end(); it++)
  // {
  //   cout<<*it<<" ";
  // }

  // even shorter way to write the above code... FOR EACH LOOP
  //  for(auto it : v)
  //  {
  //    cout<<it<<" ";
  //  }

  // v.erase(v.begin() + 1);    //erases the element at index 1
  // v.erase(v.begin() +2, v.begin()+4); //erases the elements from index 2 to 3 and not 4 [start,end)

  // --------------------------------------------------------------------------

  // INSERT FUNCTION

  vector<int> v1(2, 100);           //{100,100}
  v1.insert(v1.begin(), 300);       //{300,100,100}
  v1.insert(v1.begin() + 1, 2, 10); //{300,10,10,100,100}
  for (auto it : v1)
  {
    cout << it << " ";
  }
  cout << endl;

  cout << v1.size();
  v1.pop_back();

  // v1.swap(v2);              //swaps v1 with v2
  // v.clear();           //erase the entire vector
  cout << endl;
  cout << v.empty();

  return;
}

void explainList()
{
  list<int> ls;

  ls.push_back(4);    //{4}
  ls.emplace_back(5); //{4,5}
  // INSERT in a vector is costlier

  ls.push_front(89); //{89,4,5}

  // rest functions are same as for vector
  // begin, end, rbegin, rend, clear, insert, size swap
  for (auto i : ls)
  {
    cout << i << " ";
  }

  return;
}

void explainDeque()
{
  deque<int> dq;
  dq.push_back(4);
  dq.push_front(5);
  dq.emplace_back(9);
  dq.emplace_back(89);
  dq.pop_back();
  dq.back();
  dq.front();

  // rest functions are same as for vector
  for (auto i : dq)
  {
    cout << i << " ";
  }

  return;
}

void explainStack()
{
  // all operations on stack have time complexity : O(1)
  stack<int> st;
  st.push(5);
  st.push(43);
  st.push(1);
  st.emplace(8);
  cout << st.top() << endl;
  cout << st.size() << endl;
  cout << st.empty();

  stack<int> st1, st2;
  st1.swap(st2);

  return;
}

void explainQueue()
{
  // all operations have time complexity : O(1)
  queue<int> q;
  q.push(4);
  q.push(8);
  q.push(89);
  q.emplace(2);
  q.back() += 5;

  q.pop(); // deletes the front guy

  // rest operations are same as for stack

  return;
}

void explainPQ()
{
  // element with maximum element stays at the top
  //  time complexities : push and pop -> O(logn); top -> O(1)
  //  priority_queue<int>pq;
  //  pq.push(6);
  //  pq.push(89);
  //  pq.push(2);
  //  pq.emplace(-2);
  //  //{89,6,2,-2}
  //  cout<<pq.top()<<endl;      //89

  // minimum heap
  //  priority_queue<int, vector<int>, greater<int>> pq;
  //  pq.push(4);
  //  pq.push(8);
  //  pq.push(0);
  //  pq.emplace(9);

  // cout<<pq.top()<<endl;

  return;
}

void explainSet()
{
  // almost all operations here take O(logn) time
  // stores in sorted order and unique elements only
  set<int> st;
  st.insert(1);   //{1}
  st.emplace(3);  //{1,3}
  st.insert(1);   //{1,3}
  st.insert(-43); //{-43,1,3}

  // auto it = st.find(3);     //points to the address where 3 is stored

  // auto it = st.find(6);   // if element not in container, it will always return st.end()

  st.erase(1); // takes logarithmic time O(logn)

  // st.erase(it);  //time complexity : O(1)

  //{1,2,3,4,5}
  auto it1 = st.find(2);
  auto it2 = st.find(4);
  st.erase(it1, it2); // delete from 2 to 4 ie. indices 2 and 3 will be deleted

  int cnt = st.count(1); // if 1 is there it will return 1 else 0

  // auto it = st.lower_bound(2);
  // auto it = st.upper_bound(3);
  return;
}

void explainMultiSet()
{
  // everything is same as in set
  // stores duplicate elements also

  multiset<int> ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(1); //{1,1,1}

  int cnt = ms.count(1);
  ms.erase(1);          // all 1's are erased
  ms.erase(ms.find(1)); // only a single 1 is erased, because find() returns an iterator
  // ms.erase(ms.find(1), ms.find(1)+2);

  return;
}

void explainUSet()
{
  // everything same as in set, only NOT sorted
  //  all operations have same time complexity : O(1)
  //  only lower_bound() and upper_bound() operations DO NOT work

  // the worst case - extremely rare scenario --> O(n)
  unordered_set<int> ust;

  return;
}

void explainMap()
{
  // key(s), value(s) pairs
  // stores unique keys in sorted order of KEYS similar to set data structure

  map<int, int> mpp;
  // map<int, pair<int,int>> mpp;
  // map<pair<int,int>, int> mpp;

  mpp[1] = 2;
  mpp.emplace(5, 1);
  mpp.insert({8, 6});

  //{{1,2}, {8,6}, {5,1}}

  // mpp[2,3] = 10;

  for (auto it : mpp)
  {
    cout << it.first << " " << it.second << endl;
  }
  cout << mpp[1] << endl;
  cout << mpp[5] << endl;

  return;
}

void explainMultiMap()
{
  // everything same as map, only it can store mulitple keys
  //  only mpp[key] cannot be used here
  return;
}

void explainUnorderedMap()
{
  // same as set and unordered_set difference
  // has uniques keys
  // not sorted

  // TIME complexity : O(1)
  // worst case time complexity : O(n)
  return;
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false; // automatically swap
  if (p1.first > p2.first)
    return true;
  return false;
}

void explainExtra()
{
  // sort(a,a+n);
  // sort(v.begin(), v.end());
  // sort(a+2, a+5);

  // sort in descending order ...
  // sort(a, a+n, greater<int>);

  pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
  // sort it according to the increasing order of second element
  //  if second element is same, then sort it according to first element but in descending
  sort(a, a + 3, comp); // comp is a self-written comparator, its a bool
  // {{4,1}, {2,1}, {1,2}}

  int num = 7;
  int cnt = __builtin_popcount(num);  //returns the number of set bits in the the binary form of num

  string s = "123";
  sort(s.begin(), s.end());
  // it is important in order to exhaust all the possible permutations, you start with the sorted order i.e. 123 is perfect here, 231 would have given fewer results
  do
  {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

  // int maxi = *max_element(a, a+n);  //returns the maximum element of the array

  return;
}

int main()
{
  // explainPair();
  // arrays are constant in size, thus in order to add more elements to the array, we introduced vectors
  // explainVector();
  // explainList();
  // explainDeque();
  // explainStack();
  // explainQueue();
  // explainPQ();
  // explainSet();
  // explainMultiSet();
  // explainUSet();
  // explainMap();
  // explainMultiMap();
  // explainUnorderedMap();

  explainExtra();
  return 0;
}