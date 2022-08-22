#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    cin.tie(0); ios::sync_with_stdio(false);

    constexpr int n = 5;
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);

    vector<int> take_time(n);
    for (int i = 0; i < n; ++i)
        cin >> take_time[i];

    int min_time = INT_MAX;
    do {
        int cur_time = 0;
        for (int i = 0; i < n; ++i) {
            if (cur_time % 10 == 0) {
                cur_time += take_time[idx[i]];
            }
            else {
                int add_time = 10 - cur_time % 10;
                cur_time += add_time + take_time[idx[i]];
            }
        }
        min_time = min(min_time, cur_time);

    } while (next_permutation(idx.begin(), idx.end()));

    cout << min_time << endl;

    return 0;
}
