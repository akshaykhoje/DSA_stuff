/*
    Input: n = 5
    Output:
    *****
    ****
    ***
    **
    *

    Input: n = 3
    Output:
    ***
    **
    *
*/

#include <iostream>

void printTriangle(int n) {
    for(int i=n; i>0; i--) {
        for(int j=i; j>0; j--) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return;
}

int main(void) {
    int n;
    std::cout << "Enter the number of rows : ";
    std::cin >> n;

    printTriangle(n);

    return 0;
}