#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (ll i = 0; i < n; i++)
#define rep1(i,n) for (ll i = 1; i < n; i++)
using P = pair<ll, ll>;
int main()
{
ll n, l;
cin >> n >> l;
ll a[n], ans = 0;
rep(i, n)
{
a[i] = i + l;
ans += a[i];
}
if (-1 * n > l)
ans -= a[n - 1];
else if (l > 0)
ans -= a[0];
cout << ans << endl;
return 0;
}
