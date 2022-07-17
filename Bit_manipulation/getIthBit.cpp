#include <iostream>
using namespace std;


int getIthBit(int n, int i)
{
  int mask = 1 << i;
  return (n & mask) > 0 ? 1 : 0;
}

int main()
{
  int n; 
  cout << "Enter the number : ";
  cin>>n;
  int i;
  cout << "Enter i to get the bit at that position : ";
  cin>>i;

  cout << getIthBit(n, i) << endl;
  return 0;
}
