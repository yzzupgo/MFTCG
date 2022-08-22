#include<bits/stdc++.h>
using ll= long long;
using ld = long double;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define RREP(i,n) for(ll i=1;i<ll(n+1);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define ALL(x) x.begin(),x.end()
#define JU_5 110000
#define JU_10_9_7 1000000007
#define IN(T,x) T x;cin >> x;
#define INF (int)1e9
#define LLINF (long long)1e12
#define MOD (int)1e9+7
#define PB push_back
#define Fir first
#define Sec second
#define __MAGIC__ ios::sync_with_stdio(false);cin.tie(nullptr);
#define YESNO(T) if(T){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(T) if(T){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(T) if(T){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
#define Graph vector<vector<int>>
#define GraphL vector<vector<ll>>
#define PII pair<int,int>
#define PLL pair<ll,ll>
#define VI vector<int>
#define VL vector<ll>
#define VVI vector<vector<int>>
#define VVL vector<vector<ll>>
#define VPII vector<pair<int,int>>
#define VPLL vector<pair<ll, ll>>
#define DDD fixed<<setprecision(17)
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
signed main() {
__MAGIC__
ll X,Y;
cin >> X >> Y;
REP(i,100)REP(j,100) {
if(X<i+j) {
YesNo(false);
return 0;
}
if(Y<i*2+j*4) {
break;
}
if(X==i+j and Y==i*2+j*4) {
YesNo(true);
return 0;
}
}
return 0;
}
