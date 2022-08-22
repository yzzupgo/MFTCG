#include <bits/stdc++.h>
using namespace std;
signed main()
{
cin.tie(0);
ios_base::sync_with_stdio(0);
int x, y;
bool ok = false;
cin >> x >> y;
for (int i = 0; i <= x; ++i)
{
int j = x - i;
if (y == 2 * i + 4 * j)
{
ok = true;
break;
}
}
if (ok)
{
cout << "Yes";
cout << "\n";
}
else
{
cout << "No";
cout << "\n";
}
return 0;
}
