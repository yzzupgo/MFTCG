#include "bits/stdc++.h"
#define ALL(x) x.begin(), x.end()
#define iostreamBooster() do{ cin.tie(nullptr); ios_base::sync_with_stdio(false); }while(0)
#define rep(i,s,n) for(int i(s); i < int(n); ++i)
using namespace std;
using i64 = long long;
using pii = pair<int, int>;
template<class A, class B>inline bool chmax(A &a, const B &b){return b>a ? a=b,1 : 0;}
template<class A, class B>inline bool chmin(A &a, const B &b){return b<a ? a=b,1 : 0;}
constexpr int INF = 0x3f3f3f3f;
constexpr i64 LINF = 0x3f3f3f3f3f3f3f3fLL;
constexpr int MOD = int(1e9) + 7;
signed main()
{
int a, b;
cin >>a >> b;
if (a <= 5) {
cout << 0 << endl;
}
else if (6 <= a && a <= 12) {
cout << b / 2 << endl;
} else {
cout << b << endl;
}
return 0;
}
