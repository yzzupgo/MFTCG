#include<bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl
#define debugArray(x,n) for(long long hoge = 0; (hoge) < (n); ++ (hoge)) cerr << #x << "[" << hoge << "]: " << x[hoge] << endl
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
const ll INF = LLONG_MAX/2;
const ll MOD = 1e9+7;
const double EPS=1e-12;
signed main(){
cin.tie(0);
ios::sync_with_stdio(false);
ll N,L;cin>>N>>L;
ll ans = L*N+N*(N-1)/2;
if(L>0)ans-=L;
if(L<-N+1)ans-=L+N-1;
cout<<ans<<endl;
return 0;
}
