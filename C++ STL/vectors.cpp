#include <bits/stdc++.h>
using namespace std;

void printVector(vector<string> &v)
{
  cout<<"size : "<<v.size()<<endl;      //O(1)
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

/*
int main()
{
  vector<int> v;
  // vector<int> v1(7);
  // v1.push_back(9);
  // vector<int> v2(4,3);

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    v.push_back(x); // O(1)
  }

  printVector(v);
  v.pop_back();             //O(1)
  printVector(v);
  // printVector(v1);
  // printVector(v2);

  vector<int> v_new = v;        //O(n), since it copies each and every element of v to v_new. Hence an expensive operation.
  //thus when we call the printVector function, it will take O(n) time. So to reduce the time complexity, it is a good idea to pass by address.
  v_new.push_back(9);
  printVector(v_new);
  return 0;
}
*/

int main(){
  vector<string> sv;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    sv.push_back(s);
  }
  printVector(sv);
}