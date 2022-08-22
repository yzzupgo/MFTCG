#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
constexpr char ln = '\n';
constexpr long long MOD = 1000000007LL;
template<class T, class U> inline bool chmax(T &a, U b) { if (a < b) { a = b; return true;} return false; }
template<class T, class U> inline bool chmin(T &a, U b) { if (a > b) { a = b; return true;} return false; }
int main() {
ios::sync_with_stdio(false); cin.tie(nullptr);
int n,l; cin >> n >> l;
int a[n]; rep(i,n) a[i] = l+i;
int ans = 0;
int total = 0;
rep(i,n) total += a[i];
if(l>0) ans = total - a[0];
else if(l<=0 && l>=(-n+1)) ans = total - a[-l];
else ans = total - a[n-1];
cout << ans << ln;
return 0;
}
