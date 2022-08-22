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
int y;
string ans = "No";
int main() {
int x;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
if ((i * 2) + ((x - i) * 4) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
