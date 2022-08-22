#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#define all(x) x.begin(),x.end()
#define rep(i,j,n) for (int i = j; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
#define MOD 1000000007
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
signed main(){
int a,b; cin>>a>>b;
if(a>=13) cout<<b;
else if(6>=a) cout<<b/2;
else cout<<0;
return 0;
}
