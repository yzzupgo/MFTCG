#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define REP(i,n) for (int i = 1; i <= (int)(n); i++)
#define repi(i,s,n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define uniqueV(x) \
sort(x.begin(), x.end()); \
x.erase(unique(x.begin(), x.end()), x.end());
#define debug(x) cerr << #x << ": " << x << '\n'
#define debug2(x,y) \
cerr << "(" << #x << ", " << #y << ") = " \
<< "(" << x << ", " << y << ")" << '\n'
typedef long long int ll;
typedef pair<int, int> P;
const long long INF = 3e18 + 12;
const int inf = 1e9;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
rep(i, x + 1) {
debug(2 * i + y);
if ((2 * i + y) % 4 == 0) {
int b = (2 * i + y) % 4;
debug(x - b);
if (i + b == x) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
