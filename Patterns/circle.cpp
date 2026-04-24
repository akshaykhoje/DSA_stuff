/*
Input : n = 3
Output :
  ***  
 *   * 
*     *
*     *
*     *
 *   * 
  ***

Input : n = 6
Output :
    *****    
  **     **  
 **       ** 
 *         * 
*           *
*           *
*           *
*           *
*           *
 *         * 
 **       ** 
  **     **  
    *****    
*/

#include <iostream>
#include <math.h>

bool isValidInput(int n) {
    return (n >= 1) ? true : false; 
}

void printCricle(int n) {
    if(!isValidInput(n)) {
        std::cerr << "Invalid Input! Terminating...\n";
        return;
    }
    double dist;
    // for horizontal movement
    for(int i=0; i<= 2*n; i++) {
        //for vertical movement
        for(int j=0; j<= 2*n; j++) {
            dist = sqrt((i-n)*(i-n) + (j-n)*(j-n));

            // dist should be in the range (n-0.5) & (n+0.5) to print stars
            if(dist > (n-0.5) && dist < (n+0.5)) {
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
    std::cout << "Enter the radius of the circle : \n";
    std::cin >> n;
    printCricle(n);
    return 0;
}
