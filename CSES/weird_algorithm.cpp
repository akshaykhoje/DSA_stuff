#include <iostream>
#include <vector>
#include <math.h>

bool isInputValid(int n) {
	return (n>0 && n<1e6) ? true : false;
}

void algo(long long n) {
	if(!isInputValid(n)) {
		std::cerr << "Invalid Input! Terminating...\n";
		return;
	}
	while(n != 1) {
		if(n % 2 == 0){
			n = n/2;
		}
		else {
			n = 3*n+1;
		}
		std::cout << n << " ";
	}
	return;
}

int main(void) {
	long long n = -1;
	if (!(std::cin >> n)) return 0;

	std::cout << n << " ";
	algo(n);
	std::cout << std::endl;

	return 0;
}
