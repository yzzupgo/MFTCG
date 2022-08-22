#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
#define f first
#define s second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rsz resize
#define bk back()
#define pb push_back
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(x,a) for (auto& x: a)
const int MX = 2e5+5;
const int MOD = 1e9+7;
const ll INF = 1061109567;
const ld EPS = 1e-9;
const ld PI = acos(-1);
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
void setIn(string s) { freopen(s.c_str(),"r",stdin); }
void setOut(string s) { freopen(s.c_str(),"w",stdout); }
void setIO(string s = "") {
ios_base::sync_with_stdio(0); cin.tie(0);
if (sz(s)) { setIn(s+".in"), setOut(s+".out"); }
}
int dp[105][105];
bool solve(int p, int legs) {
if (p == 0) return legs == 0;
if (dp[p][legs] != -1) return (bool)dp[p][legs];
bool res = solve(p-1,legs-2);
res |= solve(p-1,legs-4);
return dp[p][legs] = res;
}
int32_t main() {
setIO();
memset(dp,-1,sizeof dp);
int a,b; cin >> a >> b;
FOR(i,0,a+1) {
FOR(j,0,a+1) {
if (i+j == a && 4*i+2*j == b) {
cout << "Yes"; exit(false);
}
}
}
cout << "No";
}
