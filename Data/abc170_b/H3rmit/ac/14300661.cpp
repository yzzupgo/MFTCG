#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long int64;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const long long INFL = 1e18;
const int MOD = 1000000007;
const int MAX = 210000;
const int MAX_NUM = 999999999;
void solve() {
int X, Y; cin >> X >> Y;
for (int i = 0; i <= X; ++i) {
if (2 * (X - i) + 4 * (i) == Y) {
cout << "Yes" << endl;
return;
}
}
cout << "No" << endl;
return;
}
int main() {
solve();
return 0;
}
