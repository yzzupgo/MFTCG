#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < n; ++i)
typedef long long ll;
using namespace std;
const int INF = 1e9;
int main() {
int x, y;
cin >> x >> y;
int a = (4 * x - y) / 2;
int b = (y - 2 * x) / 2;
if (a + b != x || (a < 0 || b < 0))
cout << "No";
else
cout << "Yes";
cout << endl;
return 0;
}
