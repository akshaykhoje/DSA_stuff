#include <iostream>
using namespace std;

//combine setbit and clearbit here

void clearIthBit(int &n, int i)
{
  int mask = ~(1<<i);
  n = n & mask;
}

void updateIthBit(int &n, int i, int v)
{
  clearIthBit(n, i);
  int mask = (v << i);
  n = n | mask;   //sets the right value, if we want 0, it will OR with 0, else with 1 at ith position.
}

int main()
{
  int n;
  cin>>n;
  int i;
  cin>>i;
  updateIthBit(n,i,0);
  cout<<n<<endl;
  return 0;
}