#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main()
{
ll x, y;
cin >> x >> y;
string ans = "No";
rep(i, y / 2 + 1)
{
if (2 * i + 4 * (x - i) == y)
{
ans = "Yes";
}
}
cout << ans << endl;
return 0;
}
