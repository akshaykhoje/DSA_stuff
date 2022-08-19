/*
2. Check whether a string is palindrome
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str1, str2;
  getline(cin, str1);
  str2 = str1;
  reverse(str2.begin(), str2.end());
  cout<<"str1: "<<str1<<endl;
  cout<<"str2: "<<str2<<endl;
  if (str1==str2) 
    cout<<str1<<" is a palindrome"<<endl;
  else
    cout<<str1<<" is NOT a palindrome"<<endl;
  return 0;
}