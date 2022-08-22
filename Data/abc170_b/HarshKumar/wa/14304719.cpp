#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
const ll N = 1e6 + 6, M = 1e9 + 7;
int main()
{
ios::sync_with_stdio(false), cin.tie(nullptr);
ll x, y;
cin >> x >> y;
for (ll i = 0; i < 101; i++)
{
if (2 * i + 4 * (x - i) == y)
return cout << "Yes", 0;
}
cout << "No";
}
