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
int c = (y - 2 * x);
int t = (4 * x - y);
if (2 * c >= 0 and 4 * t >= 0) can = true;
puts(can ? "Yes" : "No");
}
