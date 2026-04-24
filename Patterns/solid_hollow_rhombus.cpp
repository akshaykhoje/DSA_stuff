/*
Input : n = 4
Output : 
Solid Rhombus:
   ****
  ****
 ****
****

Hollow Rhombus:
   ****
  *  *
 *  *
****
*/

#include <iostream>

bool isInputValid(int n) {
    return (n >= 4) ? true : false; 
}

void printHollowRhombus(int n) {
    std::cout << "\nPrinting Hollow Rhombus\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            std::cout << " ";
        }
        for(int k=0; k<n; k++) {
            if(i == 0 || i == n-1) {
                std::cout << "*";
                continue;
            }
            if (k == 0 || k == n-1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    return;
}

void printSolidRhombus(int n) {
    std::cout << "\nPrinting Solid Rhombus\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            std::cout << " ";
        }
        for(int k=0; k<n; k++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return;
}

void printRhombuses(int n) {
    if (!isInputValid(n)) {
        std::cerr << "Invalid Input!\n";
        return;
    } 
    printHollowRhombus(n);
    printSolidRhombus(n);
    return;
}

int main(void) {
    int n = 0;
    std::cout << "Enter the side of the rhombus : \n";
    std::cin >> n;
    printRhombuses(n);

    return 0;
}
