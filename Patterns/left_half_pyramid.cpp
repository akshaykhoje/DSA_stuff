/*
    Input: 3
    Output: 
        *
       **
      ***

    Input: 5
    Output: 
        *
       **
      ***
     ****
    *****
*/

#include <iostream>

void printTriangle(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<=n; j++) {
            if(j >= n-i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
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