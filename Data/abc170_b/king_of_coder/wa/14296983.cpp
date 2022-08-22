#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;
signed main(void)
{
int x, y, z;
cin >> x >> y;
z = x * 4 - y;
if (z >= 0 && (z / 2) * 2 + (x - z / 2) * 4 == y)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
