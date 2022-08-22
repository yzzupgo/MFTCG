#include <bits/stdc++.h>
using namespace std;
#define rep(i,m,n) for(int (i)=(int)(m);i<(int)(n);++i)
#define rep2(i,m,n) for(int (i)=(int)(n)-1;i>=(int)(m);--i)
#define REP(i,n) rep(i,0,n)
#define REP2(i,n) rep2(i,0,n)
#define FOR(i,c) for(decltype((c).begin())i=(c).begin();i!=(c).end();++i)
#define all(hoge) (hoge).begin(),(hoge).end()
#define en '\n'
using ll = long long;
using ull = unsigned long long;
template <class T> using vec = vector<T>;
template <class T> using vvec = vector<vec<T>>;
typedef pair<ll, ll> P;
constexpr long long INF = 1LL << 60;
constexpr int INF_INT = 1 << 25;
constexpr long long MOD = (ll) 1e9 + 7;
using ld=long double;
static const ld pi = 3.141592653589793L;
typedef vector<ll> Array;
typedef vector<Array> Matrix;
template<class T> inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
struct Edge {
ll to, rev;
long double cap;
Edge(ll _to, long double _cap, ll _rev) {
to = _to; cap = _cap; rev = _rev;
}
};
using Edges = vector<Edge>;
using Graph = vector<Edges>;
void add_edge(Graph& G, ll from, ll to, long double cap, bool revFlag, long double revCap) {
G[from].push_back(Edge(to, cap, (ll)G[to].size()));
if (revFlag)G[to].push_back(Edge(from, revCap, (ll)G[from].size() - 1));
}
void solve(){
ll x,y;
cin>>x>>y;
rep(i,0,x+1){
int j=x-i;
if(i*2+j*4==y){
cout<<"Yes"<<en;
return;
}
}
cout<<"No"<<en;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
