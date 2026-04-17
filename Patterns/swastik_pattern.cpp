/*
Input : row = 7, column = 7        
Output:
*     * * * *
*     *
*     *
* * * * * * *
      *     *
      *     *
* * * *     *

Input : row = 11, column = 11
Output :
*         * * * * * *
*         *
*         *
*         *
*         *
* * * * * * * * * * * 
          *         * 
          *         * 
          *         * 
          *         * 
* * * * * *         * 
*/

#include <iostream>

bool isInputValid(int num) {
    if(num < 5 || num %2 == 0)
        return false;
    return true;
}

void printSwastik(int num) {
    if(!isInputValid(num)) {
        std::cerr << "Invalid input. Terminating...\n";
        return;
    }
    
    for(int i=0; i<num; i++) {
        for(int j=0; j<num; j++) {
            int mid = num/2;

            // center row and center column
            if(i==mid || j==mid) {
                std::cout << "* ";
            } else if(j==0 && i<mid) {
                std::cout << "* ";
            } else if(i==0 && j>mid) {
                std::cout << "* ";
            } else if(i==num-1 && j<mid) {
                std::cout << "* ";
            } else if(i>mid && j==num-1) {
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
    int num;
    std::cout << "Enter the length of swastik (must be an odd number >= 5) : \n";
    std::cin >> num;
    printSwastik(num);
    return 0;
}