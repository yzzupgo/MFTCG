#include <bits/stdc++.h>
#include <string.h>
#define rep(i,n) for(int i=0; i < n; i++)
#define REP(i,n,m) for(int i=n; i < m; i++)
#define reps(i,n) for(int i=1; i <= n; i++)
#define ALL(v) v.begin(), v.end()
#define rALL(v) v.rbegin(), v.rend()
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
using namespace std;
using ll=long long;
const ll INF = 1LL << 60;
ll mod=1000000007;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
int main() {
int x,y;cin>>x>>y;
rep(a,x+1){
int b=x-a;
if(2*a+4*b==y){cout<<"Yes";return 0;}
}
cout<<"No";
}
