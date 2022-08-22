#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    cin.tie(0); ios::sync_with_stdio(false);

    constexpr int n = 5;
    vector<pair<int, int>> order(n);
    for (int i = 0; i < n; ++i) {
        cin >> order[i].second;
        order[i].first = 10 - (order[i].second % 10);
    }
    sort(order.begin(), order.end());

    int take_time = order[0].second;
    for (int i = 1; i < n; ++i)
        take_time += order[i].first + order[i].second;

    cout << take_time << endl;

    return 0;
}
