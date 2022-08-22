#include <bits/stdc++.h>
using namespace std;
signed main()
{
cin.tie(0);
ios_base::sync_with_stdio(0);
int x, y;
bool ok = false;
cin >> x >> y;
for (int i = 1; i < x; i++)
{
for (int j = 1; j <= x - i; j++)
{
if (x != i + j)
continue;
cout << " turu: " << i << "kame: " << j;
cout << "\n";
if (y == 2 * i + 4 * j)
{
ok = true;
}
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
