#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main()
{
ll x, y;
cin >> x >> y;
string ans;
if (y % 2 != 0)
{
ans = "No";
}
else
{
ll a = 2 * x - y / 2;
if (a < 0)
{
ans = "No";
}
else
{
ans = "Yes";
}
}
cout << ans << endl;
return 0;
}
