#include <bits/stdc++.h>
using namespace std;

int main() {
    int m = 9, index = -1, ans = 0;
    vector<int> a(5);
    for (auto i = 0; i < 5; i++) {
        cin >> a[i];
        if (m > a[i] % 10 and a[i] % 10 != 0)
            m = a[i] % 10, index = i;
    }
    ans += a[index];
    for (auto i = 0; i < 5; i++) {
        if (i == index) continue;
        ans +=
            (a[i] / 10 + ((a[i] % 10 != 0) ? 1 : 0)) * 10;
    }
    cout << ans << endl;
    return 0;
}