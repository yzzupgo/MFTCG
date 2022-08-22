#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
// #define double long
#define PII pair<int, int>
#define all(n) n.begin(), n.end()
#define pb push_back
#define endl '\n'
#define forn(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
inline char nc() { static char buf[1000000], * p1 = buf, * p2 = buf; return p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 1000000, stdin), p1 == p2) ? EOF : *p1++; }
inline void read(int& sum) { char ch = nc(); sum = 0; while (!(ch >= '0' && ch <= '9')) ch = nc(); while (ch >= '0' && ch <= '9') sum = (sum << 3) + (sum << 1) + (ch - 48), ch = nc(); }

const int maxn = 2e5 + 5;
const int inf = 0x3f3f3f3f;
const ll INF = 1e18;
const double PI = acos(double(-1));
const int mod = 1e9 + 7;

signed main() {
    IO;
    int a[5];
    int mi = 10;
    int ans = 0;
    forn(i, 5) {
        cin >> a[i];
        if (a[i] % 10)ans += 10;
        mi = min(mi, ((a[i] % 10 == 0) ? 10l : (a[i] % 10)));
        ans += a[i] / 10 * 10;
    }
    cout << mi << endl;
    cout << ans - 10 + mi;
}