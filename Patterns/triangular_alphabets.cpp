/*
Input N = 5
Output:
A 
A B 
A B C 
A B C D 
A B C D E 

*/

#include <iostream>

void printTriangularAlphabets(int n) {
    char ch = 'A';
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            std::cout << ch++;
        }
        std::cout << "\n";
        ch = 'A';
    }
    return;
}

int main(void) {
    int n;
    std::cout << "Enter the number of rows : \n";
    std::cin >> n;
    printTriangularAlphabets(n);
    return 0;
}