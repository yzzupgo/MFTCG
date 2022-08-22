#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
int x, y;
cin >> x >> y;
if (((y - 2 * x) % 2 == 0) && ((y - 2 * x) <= 2 * x))
printf("Yes\n");
else
printf("No\n");
return 0;
}
