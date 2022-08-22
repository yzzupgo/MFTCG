#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

const long long MAXN = (long long)1e6 + 5LL;

void solve() {
    vector<int> a(5);
    int ma = 1 << 20, sum = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];

        if (a[i] % 10) {
            ma = min(ma, a[i] % 10);
            int tmp = a[i] / 10;
            tmp += 1;
            tmp *= 10;
            sum += tmp;
        } else {
            sum += a[i];
        }
    }

    sum -= (10 - ma);
    cout << sum << endl;
}

int main() {
    solve();
}