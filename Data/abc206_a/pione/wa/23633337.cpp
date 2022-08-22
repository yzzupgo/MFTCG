#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = (int)(0); i < (int)(n); ++i)
#define reps(i,n) for (int i = (int)(1); i <= (int)(n); ++i)
#define rrep(i,n) for (int i = ((int)(n)-1); i >= 0; i--)
#define rreps(i,n) for (int i = ((int)(n)); i > 0; i--)
#define irep(i,m,n) for (int i = (int)(m); i < (int)(n); ++i)
#define ireps(i,m,n) for (int i = (int)(m); i <= (int)(n); ++i)
#define irreps(i,m,n) for (int i = ((int)(n)-1); i > (int)(m); ++i)
#define SORT(v,n) sort(v, v + n);
#define REVERSE(v,n) reverse(v, v+n);
#define vsort(v) sort(v.begin(), v.end());
#define all(v) v.begin(), v.end()
#define mp(n,m) make_pair(n, m);
#define cinline(n) getline(cin,n);
#define replace_all(s,b,a) replace(s.begin(),s.end(), b, a);
#define PI (acos(-1))
#define FILL(v,n,x) fill(v, v + n, x);
#define sz(x) (int)(x.size())
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vs = vector<string>;
using vpll = vector<pair<ll, ll>>;
using vtp = vector<tuple<ll, ll, ll>>;
using vb = vector<bool>;
using ld = long double;
template<class T> inline bool chmax(T &a, T b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T> inline bool chmin(T &a, T b) {
if(a > b) {
a = b;
return 1;
}
return 0;
}
template<class t> using vc = vector<t>;
template<class t> using vvc = vc<vc<t>>;
const ll INF = 1e9 + 10;
const ll MOD = 998244353;
const ll LINF = 1e18;
signed main() {
cin.tie(0);
ios::sync_with_stdio(false);
int n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yap!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
