#include <iostream>
#include <string>

void solve() {
    std::string s;
    if(!(std::cin >> s)) return;

    int n = s.size();
    int max_count = 1;
    int curr_count = 1;

    for(int i=0; i<n-1; i++) {
        if(s[i] == s[i+1]) {
            curr_count++;
            if(curr_count > max_count) {
                max_count = curr_count;
            }
        } else {
            curr_count = 1;
        }
    }
    std::cout << max_count;
    return;
}

int main(void) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    solve();
    return 0;
}