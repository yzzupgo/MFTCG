#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define rep(i,n) for (int i = 0; i < (n); i++)
typedef pair<int, int> P;
const long double EPS = 1e-10;
const long long INF = 1e18;
const int MOD = (int)1e9 + 7;
const long double PI = acos(-1.0L);
int main() {
int x, y;
cin >> x >> y;
rep(xi, 1 << x) {
int yi = 0;
rep(i, x) {
if (xi >> i & 1) {
yi += 2;
} else {
yi += 4;
}
}
if (yi == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
