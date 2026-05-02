#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<int> V;

// property used : x ^ x = 0; x ^ 0 = x
int returnMissing(int n, V& vec) {
    int xor_all = 0;

    for(int i=1; i<=n; i++) {
        xor_all ^= i;
    }

    for(int x : vec) {
        xor_all ^= x;
    }

    return xor_all;
}

int main(void) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    if(!(std::cin >> n)) return 0;

    V vec(n-1);
    for(int i=0; i<n-1; i++) {
        std::cin >> vec[i];
    }
    
    std::cout << returnMissing(n, vec) << "\n";
    return 0;
}
