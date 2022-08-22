#include <bits/stdc++.h>
using namespace std;
#define int long long int
void test()
{
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++)
{
if (i * 2 + (x - i) * 4 == y)
{
cout << "Yes" << endl;
return;
}
}
cout << "No" << endl;
}
int32_t main()
{
int t = 1;
while (t--)
{
test();
}
return 0;
}
