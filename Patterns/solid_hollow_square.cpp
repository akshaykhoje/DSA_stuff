/*
Input : n = 4
Output : 

Solid Square:
****
****
****
****

Hollow Square:
****
*  *
*  *
****

*/

#include <iostream>

bool validInput(int n) {
    if(n < 3)
        return false;
    return true;
}

void printSolidSquare(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return;
}

void printHollowSquare(int n) {
    for(int i=0; i<n; i++) {
        if(i==0 || i==n-1) {
            for(int j=0; j<n; j++) {
                std::cout << "*";
            }
        } else {
            for(int j=0; j<n; j++) {
                if(j == 0 || j == n-1) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
        }
        std::cout << "\n";
    }
    return;
}

void printSquares(int n) {
    if(!validInput(n)) {
        std::cerr << "Invalid input! Must be at least 3\n";
        return;
    }
    std::cout << "Printing Solid Square...\n";
    printSolidSquare(n);
    std::cout << "\nPrinting Hollow Square...\n";
    printHollowSquare(n);
    return;
}

int main(void) {
    int n;
    std::cout << "Enter the number of rows : ";
    std::cin >> n;
    printSquares(n);
    return 0;
}