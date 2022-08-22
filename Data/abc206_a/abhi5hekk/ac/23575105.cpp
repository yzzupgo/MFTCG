#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define fast_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rev(i,n) for(int i = n-1; ~i; i--)
#define pii pair<int,int>
#define ar(n) array<int,n>
#define sz(n) (int)n.size()
#define uniq(v) (v).erase(unique(v.begin(), v.end()),(v).end())
#ifndef ONLINE_JUDGE
#define dbg(x) cerr<<#x<<" "<<x<<endl;
#else
#define dbg(x)
#endif
template<typename T>istream &operator>>(istream &in, vector<T> &a) {
for(auto &i : a) {
in >> i;
}
return in;
}
template<typename T>ostream &operator<<(ostream &out, vector<T> &a) {
for(auto &i : a) {
out << i << " ";
}
return out;
}
auto clk = clock();
mt19937_64 rang(high_resolution_clock::now().time_since_epoch().count());
void run_time() {
cerr << endl;
cerr << "Time elapsed: " << (double)(clock() - clk) / CLOCKS_PER_SEC << endl;
return;
}
const int inf = 1e18;
const int32_t M = 1e9 + 7;
const int32_t mxn = 1e6 + 1;
void solve() {
double n;
cin >> n;
int res = n * 1.08;
string ans;
if(res < 206) {
ans = "Yay!";
} else if(res == 206) {
ans = "so-so";
} else {
ans = ":(";
}
cout << ans << endl;
}
int32_t main() {
fast_IO
#ifndef ONLINE_JUDGE
freopen("error.txt", "w", stderr);
#endif
int t = 1;
while(t--) {
solve();
}
run_time();
return 0;
}
