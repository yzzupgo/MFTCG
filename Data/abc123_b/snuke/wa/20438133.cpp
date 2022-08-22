#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,n) for (int i = 1; i <= (n); ++i)
#define srep(i,l,r) for (int i = (l); i < (r); ++i)
#define df(x) int x = in();
#define dfl(x) ll x = inl();
#define pb push_back
#define eb emplace_back
#define sz(x) int(x.size())
#define yn puts("Yes"); else puts("No");
#define rng(x) x.begin(), x.end()
#define rrng(x) x.rbegin(), x.rend()
#define pcnt(x) __builtin_popcountll(x)
#define fi first
#define se second
using ll = long long;
using P = pair<int,int>;
inline int in() { int x; scanf("%d", &x); return x;}
inline ll inl() { ll x; scanf("%lld", &x); return x;}
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vp = vector<P>;
template<typename T>
inline void in(vector<T>& a) { rep(i,sz(a)) cin >> a[i];}
template<typename T>
inline void vvin(vector<T>& a) { rep(i,sz(a)) in(a);}
#define vin(x,n) vi x(n); in(x);
P pin() { P p; p.fi = in(); p.se = in(); return p;}
P padd(const P& a, const P& b) { return P(a.fi+b.fi, a.se+b.se);}
template<typename T>
void mins(T& x, const T& y) { x = min(x,y);}
template<typename T>
void maxs(T& x, const T& y) { x = max(x,y);}
template<typename T>
ll suma(const vector<T>& a) { ll res = 0; for (auto& x : a) res += x; return res;}
void priv(const vi& a) { rep(i,sz(a)) printf("%d%c", a[i], i==sz(a)-1?'\n':' ');}
#define dup(x,y) ((x)+(y)-1)/(y)
#define dame { puts("No"); return;}

const int INF = 1001001001;

struct Prime {
  vi ps, pf;
  Prime(int n) {
    pf = vi(n+1,1);
    pf[0] = pf[1];
    srep(i,2,n+1) {
      if (!pf[i]) continue;
      ps.pb(i);
      for (int j = i*2; j <= n; j += i) pf[j] = 0;
    }
  }
};

struct Solver {
  void solve() {
    vin(a,5);
    int ans = 0, s = 0;
    rep(i,5) s += dup(a[i],10)*10;
    rep(i,5) mins(ans, s+dup(a[i],10)*10-a[i]);
    //*
    cout << ans << endl;//*/
  }
};

int main() {
  int ts = 1;
  // ts = in();
  rep(ti,ts) {
    Solver s;
    s.solve();
  }
  return 0;
}