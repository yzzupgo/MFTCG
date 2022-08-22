#include <iostream>

int ceil(int v) {
    if (v % 10 == 0) return v;
    int ans = v - (v % 10);
    return ans + 10;
}

int main() {
    int a[5];
    int min_mod_time = -1, min_mod = 10;
    int ans = 0;
    for (auto &v : a) {
        std::cin >> v;
        if (v % 10 != 0 && v % 10 < min_mod) {
            min_mod = v % 10;
            min_mod_time = v;
        }
    }
    for (auto &v : a) {
        ans += ceil(v);
    }
    ans = ans - ceil(min_mod_time) + min_mod_time;
    std::cout << ans << std::endl;
    return 0;
}