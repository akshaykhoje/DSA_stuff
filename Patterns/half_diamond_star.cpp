/*
Input: N = 3
Output:
*
**
***
**
*

Input: N = 6
Output:
*
**
***
****
*****
******
*****
****
***
**
*

*/

#include <iostream>

void printTriangle(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    for(int i=n-1; i>=0; i--) {
        for(int j=i; j!=0; j--) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return;
}

int main(void) {
    int n;
    std::cout << "Enter the number of rows : ";
    std::cin >> n;
    printTriangle(n);
    return 0;
}