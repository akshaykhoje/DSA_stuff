/*
Input : Number of lines : 5
Output :
 * 
* *
***
* *
* *

Input : Number of lines : 10
Output :
 **** 
*    *
*    *
*    *
*    *
******
*    *
*    *
*    *
*    *

*/

#include <iostream>

bool validInputs(int n) {
    if(n < 5)
        return false;
    return true;
}

void printAlphabetA(int n) {
    if(!validInputs(n)) {
        std::cerr << "Invalid input. Must be at least 5\n";
        return;
    }
    
    // printing top row
    for(int i=0; i<n/2-1; i++) {
        if(i==0)
            std::cout << " ";
        std::cout << "*";
    }
    std::cout << "\n";

    // print vertical columns until row n/2
    for(int i=0; i<n/2; i++) {
        for(int j = 0; j<=n/2; j++) {
            if(j==0 || j==n/2) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    // print middle row
    for(int i=0; i<=n/2; i++) {
        std::cout << "*";
    }
    std::cout << "\n";

    // print vertical columns until row n/2
    for(int i=0; i<n/2; i++) {
        for(int j = 0; j<=n/2; j++) {
            if(j==0 || j==n/2) {
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
    std::cin>> n;
    printAlphabetA(n);
    return 0;
}