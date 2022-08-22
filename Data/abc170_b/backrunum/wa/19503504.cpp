#include <bits/stdc++.h>
#define rep(i,n) for (long long i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using V = vector<long long>;
int main()
{
string ans;
int x, y;
cin >> x >> y;
if (x % 2 == 0)
{
ans = "No";
}
else
{
y /= 2;
if (x <= y && 2 * x >= y)
{
ans = "Yes";
}
else
{
ans = "No";
}
}
cout << ans << endl;
return 0;
}
