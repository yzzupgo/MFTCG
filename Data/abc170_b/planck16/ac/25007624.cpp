#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const int inf = INT_MAX;
const int mod = 1000000007;
int main() {
int x, y;
cin >> x >> y;
bool can = false;
int t = (y - 2 * x) / 2;
int c = (4 * x - y) / 2;
if ((y - 2 * x) % 2 == 0 and (4 * x - y) % 2 == 0 and t >= 0 and c >= 0)
can = true;
if (can) cout << "Yes" << endl;
else cout << "No" << endl;
}
