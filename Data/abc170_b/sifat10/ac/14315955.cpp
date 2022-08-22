#include <bits/stdc++.h>
using namespace std;
void solve();
void fastio()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr), cout.tie(nullptr);
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
fastio();
solve();
return 0;
}
void solve()
{
int X, Y;
cin >> X >> Y;
string ans;
bool isPossible = false;
if ((4 * X - Y) >= 0)
{
if ((4 * X - Y) <= 2 * X)
{
if (not((4 * X - Y) & 1)) isPossible = true;
}
}
ans = (isPossible)? "Yes": "No";
cout << ans << "\n";
}
