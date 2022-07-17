// print numbers 1,2,...,N recursively in ascending order and descending order

#include <iostream>
using namespace std;


void decreasing(int n)
{
  if (n == 0)  //base case
    return;
  cout << n << " ";

  //moving towards the base case
  decreasing(n - 1);
}

void increasing(int n)
{
  if(n == 0)
    return; 
  increasing(n-1);
  cout << n << " ";
}


int main()
{
  int n;
  cin>>n;
  decreasing(n);
  cout << endl;
  increasing(n);
  return 0;
}