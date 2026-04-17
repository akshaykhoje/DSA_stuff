/*
Input : 6
Output :
* *
* *
* * * *
* * * *
* * * * * *
* * * * * *

*/

#include <iostream>

bool isInputValid(int n) {
    if(n%2 != 0) {
        return false;
    }
    return true;
}

void printStairCase(int n) {
    if(!isInputValid(n)) {
        std::cerr << "Invalid Input. The input must be an even number.\n";
        return;
    }
    std::string stair_unit = "";
    for(int i=0; i<n; i++) {
        if(i%2 == 0) {
            stair_unit += "**";
        }
        std::cout << stair_unit;
        std::cout << "\n";
    }
    return;
}

int main(void) {
    int n;
    std::cout << "Enter the number of rows : ";
    std::cin >> n;
    printStairCase(n);
    return 0;
}
