#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    cin.tie(0); ios::sync_with_stdio(false);

    constexpr int n = 5;
    int take_time = 0;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        int add_time = 10 - x % 10;
        take_time += add_time + x;
    }

    cout << take_time << endl;

    return 0;
}
