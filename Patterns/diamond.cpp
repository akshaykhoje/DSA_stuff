/*
Input: N=5
Output:
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/

#include <iostream>

void upperHalfDiamond(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j < n-i-1; j++) {
            std::cout << " ";
        }
        for(int j=0; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return;
}

void lowerHalfDiamond(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j < i; j++) {
            std::cout << " ";
        }
        for(int j=0; j < n-i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return;
}

void printDiamond(int n) {
    upperHalfDiamond(n);
    lowerHalfDiamond(n);
    return;
}

int main(void) {
    int n;
    std::cout << "Enter the number of rows : ";
    std::cin >> n;
    printDiamond(n);
    return 0;
}