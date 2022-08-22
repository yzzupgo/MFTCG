#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e2 + 5;
const int INF = 1e9 + 7;
int x, y;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> x >> y;
if ((y < 2) || (y & 1))
{
cout << "No";
return 0;
}
if (y / 4 == x || y / 2 == x)
{
cout << "Yes";
return 0;
}
int maxc = (y - 4) / 2;
for (int i = 1; i <= maxc; i++)
{
int total = i * 2 + (x - i) * 4;
if (total == y)
{
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
