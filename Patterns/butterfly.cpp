/*
Input: 3
Output: 
*   *
** **
*****
** **
*   *

Input: 5
Output: 
*       *
**     **
***   ***
**** ****
*********
**** ****
***   ***
**     **
*       *
*/

#include <iostream>

bool isInputValid(int n) {
    return (n < 5) ? false : true;
}

void printButterfly(int n) {
    if(!isInputValid(n)) {
        std::cerr << "Invalid Input! Terminating...\n";
        return;
    }
    int space_end_idx = n-1;
    for(int i=1; i<=n; i++) {
        // first half until the middle complete line
        for(int j=1; j<2*n; j++) {
            space_end_idx = 2*n-i;
            if(j<=i || j>=space_end_idx) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    for(int i=n-1; i>=1; i--) {
        int space_end_idx = 2*n -i;
        for(int j=1; j<2*n; j++) {
            if(j <= i || j >= space_end_idx) {
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
    std::cout << "Enter the length of butterfly : \n";
    std::cin >> n;
    printButterfly(n);

    return 0;
}