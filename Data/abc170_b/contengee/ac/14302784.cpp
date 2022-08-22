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
const ll INF = (ll)1e18 + 1;
int main() {
ios::sync_with_stdio(false); cin.tie(nullptr);
int x, y; cin >> x >> y;
string res = "Yes";
if(y>=2*x && y<=4*x && y%2==0){
cout << res << ln;
}else{
cout << "No" << ln;
}
return 0;
}
