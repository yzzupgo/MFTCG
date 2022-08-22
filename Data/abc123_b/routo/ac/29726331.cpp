#include <bits/stdc++.h>
#define ll __int64_t
#define INF 999999999
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define defor(i, m, n) for (int i = m; i < n; i++)
using namespace std;

int main()
{
    vector<int> meals(5), sortm(5);
    rep(i, 5) cin >> meals[i];
    rep(i, 5) sortm[i] = (meals[i] % 10 > 0 ? 10 - meals[i] % 10 : 0);
    sort(sortm.begin(), sortm.end());
    int res = 0;
    rep(i, 5) res += (meals[i] % 10 > 0 ? (meals[i] / 10 + 1) * 10 : meals[i]);
    res -= sortm[4];
    cout << res;
}