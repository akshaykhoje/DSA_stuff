/*
Input : n = 5
Output : 

 *
  **
   ***
    ****
     *****
    ****
   ***
  **
 *

Input : n = 7
Output : 

 *
  **
   ***
    ****
     *****
      ******
       *******
      ******
     *****
    ****
   ***
  **
 *
*/
#include <iostream>

bool isInputValid(int n) {
    return (n < 3) ? false : true;
}

void printArrowPattern(int n) {
    if(!isInputValid(n)) {
        std::cerr << "Invalid Input! Termianting...\n";
        return;
    }
    // upper half
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            std::cout << " ";
        }
        for(int k=0; k<=i; k++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
   
    // lower half
    for(int i=n-1; i>0; i--) {
        for(int j=1; j<i; j++) {
            std::cout << " ";
        }
        for(int k=0; k<i; k++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }


    return;
}

int main(void) {
    int n = 0;
    std::cout << "Enter the half length of the square: \n";
    std::cin >> n;
    printArrowPattern(n);

    return 0;
}