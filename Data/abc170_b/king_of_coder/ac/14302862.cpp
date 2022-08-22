#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;
signed main(void)
{
int x, y;
cin >> x >> y;
for(int turu = 0; turu <= x; turu++)
{
int kame = x - turu;
if (kame * 2 + turu * 4 == y)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
