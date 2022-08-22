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
int c = (y - 2 * x) / 2;
int t = (4 * x - y) / 4;
if (c >= 0 and t >= 0) can = true;
if ((y - 2 * x) % 2 != 0 or (4 * x - y) % 4 != 0) can = false;
puts(can ? "Yes" : "No");
}
