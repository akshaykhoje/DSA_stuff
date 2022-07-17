// Implementation of the vector data structure
// Whenever an element is to be inserted in a vector, if the vector is full to its capacity, the vector is resized to double its capacity, else it is inserted at the end of the vector using push_back() or emplace_back()

#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
  Vector<int> v(1);
  Vector<char> vchar;

  vchar.push_back('a');
  vchar.push_back('b');

  for(int i = 0; i < vchar.size(); i++)
    cout << vchar[i] << endl;

  v.push_back(1); 
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.pop_back();
  v.pop_back();
  

  cout << v.size() << endl;
  cout << v.capacity() << endl;
  cout << v.front() << endl;
  cout << v.back() << endl;
  // cout << v.at(12)<<endl;

  for(int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}


// why templates ? 
// In order to make the code more genneric, we can use templates. i.e. in order to store any data type in a vector, we can use templates.