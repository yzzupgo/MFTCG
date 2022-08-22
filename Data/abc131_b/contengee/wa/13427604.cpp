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
int n,a; cin>> n>> a;
int l=a;
int r=a+n-1;
int eat;
if(r<=0) eat=r;
else if(l>=0) eat=l;
else eat=0;
int ans = (r+l)*(r+l+1)/2 - eat;
cout << ans << ln;
return 0;
}
