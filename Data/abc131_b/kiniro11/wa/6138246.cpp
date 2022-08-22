#include <bits/stdc++.h>
using namespace std;
inline void solve ()
{
int n, l;
cin >> n >> l;
auto ans = l * n + n * (n - 1) / 2;
if (l < -n)
{
ans -= l + n - 1;
}
else if (l > 0)
{
ans -= l;
}
cout << ans << endl;
}
auto main () -> int
{
cin.tie (nullptr);
ios::sync_with_stdio (false);
cout << fixed << boolalpha;
cerr << fixed << boolalpha;
solve ();
}
