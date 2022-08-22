#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    cin.tie(0); ios::sync_with_stdio(false);

    constexpr int n = 5;
    vector<pair<int, int>> order(n);
    for (int i = 0; i < n; ++i) {
        cin >> order[i].second;
        order[i].first = (order[i].second - 1) % 10;
    }
    sort(order.begin(), order.end());

    int take_time = order[0].second;
    for (int i = 1; i < n; ++i) {
        int add_time = (10 - (order[i].second % 10)) % 10;
        take_time += order[i].second + add_time;
    }

    cout << take_time << endl;

    return 0;
}
