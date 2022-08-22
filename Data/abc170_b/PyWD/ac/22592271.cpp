#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i) = 0; (i) < (n); (i)++)
using ll = long long;
int main(void)
{
int x, y, m, n;
cin >> x >> y;
if ((y - 2 * x) % 2 == 0) {
m = (y - 2 * x) / 2;
}else {
cout << "No" << endl;
return 0;
}
n = x - m;
if (n >= 0 && m >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
