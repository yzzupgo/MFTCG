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
if (n * 2 == m) {
cout << "YES" << endl;
return ;
}
if (n * 4 == m) {
cout << "YES" << endl;
return;
}
if (m >= (n * 2) && m <= (n * 4)) {
cout << "YES" << endl;
return ;
}
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
