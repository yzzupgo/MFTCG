#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define NMAX 1000000
void solve()
{
ll x, y;
cin >> x >> y;
if ((y - 2 * x) >= 0 and (y - 2 * x) % 2 == 0 and (4 * x - y) >= 0 and (4 * x - y) % 2 == 0)
{
cout << "Yes\n";
return;
}
cout << "No\n";
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}
