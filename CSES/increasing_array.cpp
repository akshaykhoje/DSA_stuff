#include <iostream>
#include <vector>

typedef long long ll;
typedef std::vector<ll> V;

void solve(int n, V& vec) {
    ll moves = 0;
    for(int i=1; i<n; i++) {
        if(vec[i] >= vec[i-1]) {
            continue;
        } else {
            moves += (vec[i-1] - vec[i]);
            vec[i] = vec[i-1];
        }
    }
    std::cout << moves;
    return;
}

int main(void) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    if(!(std::cin >> n)) return 0;

    V vec(n);
    for(int i=0; i<n; i++) {
        std::cin >> vec[i];
    }

    solve(n, vec);

    return 0;
}
