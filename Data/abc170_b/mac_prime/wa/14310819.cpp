#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,long long>
#define endl '\n'
#define ull unsigned long long
#define ll long long
const int mod = 1e9 + 7;
using u64 = uint64_t;
using u128 = __uint128_t;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
void solve() {
int n, m;
cin >> n >> m;
bool flag = false;
for (int i(0); i <= n ; ++i) {
if ((m - (i * 2)) == ((n - i) * 4)) {
flag = true;
break;
}
}
if (flag)
cout << "YES" << endl;
else
cout << "NO" << endl;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
#ifndef LOCAL_DEFINE
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
#endif
return 0;
}
