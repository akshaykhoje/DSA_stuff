// just keep a watch on the call-stack/tree and you are done!
// All recursion functions will take up extra space due to its innate nature of using stack
// Always in recursion, first write the base case and then the recursive case. The recursive case always moves towards the base case

#include <iostream>
using namespace std;

int fact(int n)  // Time complexity : O(n); Space complexity : O(n)
{
  if (n == 0 || n == 1)
    return 1;
  return n * fact(n - 1);
}

int main()
{
  int n;
  cin >> n;
  if (n < 0)
  {
    cout << "ERROR: n but must be positive" << endl;
    return -1;
  }
  int ans = fact(n);
  cout << "Factorial of " << n << " is " << ans << endl;

  return 0;
}