#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    vector<int> a(5);
    rep(i, 5) cin >> a[i];
    int mx = 0, ans = 0;
    rep(i, 5)
    {
        ans += a[i];
        int x = a[i] % 10;
        if (x == 0)
            continue;
        x = 10 - x;
        ans += x;
        mx = max(mx, x);
    }
    ans -= mx;
    cout << ans << endl;
    return 0;
}