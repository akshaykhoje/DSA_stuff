/*
1. Reverse a string
*/

#include<bits/stdc++.h>

using namespace std; 
int main() 
{ 
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end()); 
    cout<<"\n"<<str; 
    return 0;
}