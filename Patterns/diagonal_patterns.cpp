/*
Input : 5
Output:
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
*/

#include <iostream>

bool isInputValid(int n) {
    return (n <= 3) ? false : true;
}

void printPattern(int n) {
    if(!isInputValid(n)) {
        std::cerr << "Invalid Input! Terminating...\n";
        return;
    }

    // print upper half
    for(int i=0; i<n; i++) {
        for(int j=0; j<2*n; j++) {
            if(j < n-i || j >= n+i) {
                std::cout << "* ";
            } 
            else {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }

    // print lower half
    for(int i=0; i<n; i++) {
        for(int j=0; j<2*n; j++) {
            if(j<=i || j >= 2*n-i-1) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }

    return;
}

int main(void) {
    int n = 0;
    std::cout << "Enter the half length of the square: \n";
    std::cin >> n;
    printPattern(n);

    return 0;
}