/*
Input : n = 4
Output :
   * 
  * * 
 *   * 
* * * * 

Input : n = 8
Output :
       * 
      * * 
     *   * 
    * * * * 
   *       * 
  * *     * * 
 *   *   *   * 
* * * * * * * * 
*/

#include <iostream>

bool isInputValid(int n) {
    return (n >= 4) ? true : false;
}

void printSierpinskiTriangle(int n) {
    if(!isInputValid(n)) {
        std::cerr << "Invalid Input! Terminating...\n";
        return;
    }
    for(int y=n-1; y>=0; y--) {
        for(int i=0; i<y; i++) {
            std::cout << " ";
        }
        
        for(int x=0; x+y<n; x++) {
            if(x & y) {
                std::cout << " " << " ";
            } else {
                std::cout << "* ";
            }
        }
        std::cout << "\n";
    }

    return;
}

int main(void) {
    int n;
    std::cout << "Enter the size of the triangle : \n";
    std::cin >> n;
    printSierpinskiTriangle(n);

    return 0;
}