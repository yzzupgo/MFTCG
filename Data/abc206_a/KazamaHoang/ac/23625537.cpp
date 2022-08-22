#include <bits/stdc++.h>
#define Task ""
#define F first
#define S second
#define eb emplace_back
#define bit(x,i) ((x >> (i)) & 1)
#define debug(x) cerr << #x << " is " << x << "\n";
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
const int base = 1000;
const int B = 32;
const int inf = 1e9 + 7;
const ll INF = 1e18 + 7;
const int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
const int dy8[] = {1, -1, 0, 1, -1, 0, 1, -1};
const int dx4[] = {0, 0, 1, -1};
const int dy4[] = {1, -1, 0, 0};
int n;
void solve(int test_case) {
cin >> n;
n = 108 * n / 100;
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
signed main() {
cin.tie(0)->sync_with_stdio(0);
if(fopen(".inp", "r")) {
freopen(".inp", "r", stdin);
freopen(".out", "w", stdout);
freopen(".ou", "w", stderr);
} else if(fopen(Task".inp", "r")) {
freopen(Task".inp", "r", stdin);
freopen(Task".out", "w", stdout);
}
int test_case = 1;
for(int i = 1; i <= test_case; ++ i) {
solve(i);
}
return 0;
}
