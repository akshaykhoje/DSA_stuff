/*
    Input: 3
    Output: 
    *****
     ***
      *

    Input: 5
    Output: 
    *********
     *******
      *****
       *** 
        *

*/

#include <iostream>

void printTriangle(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j < i; j++) {
            std::cout << " ";
        }
        for(int j=0; j < 2*(n-i)-1; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return;
}

int main(void) {
    int n;
    std::cout << "Enter the nubmer of rows : ";
    std::cin >> n;
    printTriangle(n);
    return 0;
}
