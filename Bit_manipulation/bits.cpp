// manipulate on the binary representation of data, coz it is faster!
/* NOTE : 
  int a = 0;
  ~a = -1;     // expected was that it should be 1, instead we get -1, as the MSB of the 32 bit representation is the sign bit. Hence we get ~a = -1. The rest 31 bits give the magnitude of the number.

------------------------------------------------------------------------------------
  IF 0 is a number and NOT a bit that you are dealing with, the ~0 is -1. MIND THIS!
------------------------------------------------------------------------------------

  For the negative numbers, since they are stored in 2's compliment form, invert all the numbers and then add 1 to it, the resultant is the magnitude of the negative number.

  THUS, negation of the integer 0 is -1, whereas that of a bit 0 is 1

*/

#include <iostream>
using namespace std;


int main()
{
  int x = 1;
  cout << ~x << endl;


  // LEFT-SHIFTING  -->   a << b = a * pow(2,b)
  int a = 5;
  cout << (a << 2) << endl;

  // RIGHT-SHIFTING  --> a >> b = a / pow(2,b)
  int b = 10;
  cout << (b >> 1) << endl;
  
  // expression to check if a number is odd(LSB=1) or even(LSB=1)
  int c;
  cin>>c;
  (c&1) ? cout<<"ODD" : cout<<"EVEN"; 


  return 0;
}

