#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;
signed main(void)
{
int x, y;
cin >> x >> y;
if (x * 4 - y >= 0 && (x * 4 - y) % 2 == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
