#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define endl "\n"
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int x, y, sum = 0, f = 0;
cin >> x >> y;
int a = 0, b = x;
sum = (2 * a) + (4 * b);
while (a <= x)
{
if (sum == y)
{
f = 1;
break;
}
a++;
b--;
sum = ((2 * a) + (4 * b));
}
if (f == 1)
cout << "Yes";
else
cout << "No";
return 0;
}
