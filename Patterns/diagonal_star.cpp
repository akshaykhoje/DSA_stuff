/*
Input : 7
Output :

    *******
    **   **
    * * * *
    *  *  *
    * * * *
    **   **
    *******
*/

#include <iostream>

bool isInputvalid(int n) {
    return (n < 3) ? false : true;
}

void printDiagonal(int n) {
    if(!isInputvalid(n)) {
        std::cerr << "Invalid Input! Terminating...\n";
        return;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 || i==n-1) {
                std::cout << "*";
            }
            else if(j==0 || j==n-1 || j==i || j==n-i-1) {
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
    int n = 0;
    std::cout << "Enter the side of square : \n";
    std::cin >> n;
    printDiagonal(n);
    return 0;
}