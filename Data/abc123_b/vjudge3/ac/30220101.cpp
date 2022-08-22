#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

const long long MAXN = (long long)1e6 + 5LL;

void solve() {
    vector<int> a(5);
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    int ans = 1 << 20;
    for (int i = 0; i < 5; ++i) {
        int sum = 0;
        for (int j = 0; j < 5; ++j) {
            if (i == j)
                sum += a[j];
            else if (a[j] % 10) {
                int tmp = (a[j] / 10) + 1;
                sum += tmp * 10;
            } else
                sum += a[j];
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;
}

int main() {
    solve();
}