#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define pll pair<ll, ll>
#define debug_(x) cerr << #x << " = " << x << ' ';
#define debug(x) cerr << #x << " = " << x << '\n';
#define rep(i, a, b) for (ll i = (a); i <= (b); i++)
#define dec(i, a, b) for (ll i = (a); i >= (b); i--)
using namespace std;
const int N = 1e5 + 5;
ll inf = 1ll << 60;
ll mod = 1e9+7;

ll a[20];
int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = inf;
    bool fg = 0;
    rep(i, 1, 5) {
        cin >> a[i];
        if(a[i] % 10)
            ans = min(ans, a[i] % 10),fg = 1;
    }

    if (ans == inf) ans = 0;
    rep(i, 1, 5) {
        ans += (a[i] + 9) / 10 * 10;
    }
    if (fg) ans -= 10;
    cout << ans<< '\n';
    return 0;
}