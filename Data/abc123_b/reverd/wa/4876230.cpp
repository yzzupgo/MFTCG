#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int sum = 0, ma = -1;
    for (int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        if (a % 10) ma = max(ma, 10 - a % 10);
        sum += (a + 9) / 10 * 10;
    }
    cout << sum - ma << endl;
}
