#include <bits/stdc++.h>
using namespace std;
#define rep(i,x,y) for(ll i=(x);i<(y);i++)
#define rrep(i,x,y) for(ll i=(ll)(y)-1;i>=(x);i--)
#define all(x) (x).begin(),(x).end()
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl
#define itrdebug(x) cerr << #x << " "; for (auto & el : (x)) {cerr << (el) << " ";} cerr << endl
#define dassert(...) assert(__VA_ARGS__)
#else
#define debug(x)
#define itrdebug(x)
#define dassert(...)
#endif
typedef long long ll;
const ll MOD = 1e9 + 7;
const long double EPS = 1e-8;
void solve(long long X, long long Y){
cout << ((4*X - Y) >= 0 && (4*X - Y) % 2 == 0 ? "Yes" : "No") << endl;
}
signed main(){
long long X;
scanf("%lld",&X);
long long Y;
scanf("%lld",&Y);
solve(X, Y);
return 0;
}
