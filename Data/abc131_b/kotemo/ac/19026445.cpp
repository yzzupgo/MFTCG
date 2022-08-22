#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define FORA(i,I) for(const auto& i:I)
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())
#define INF 1000000000000
#define MOD 1000000007
#define MAXR 100000
#define PB push_back
#define MP make_pair
#define F first
#define S second
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
signed main(){
int n,l;
cin>>n>>l;
int count=0;
int mn=MOD;
rep(i,n){
int ans=abs(i+l);
mn=min(mn,ans);
count+=i+l;
}
if(n+l-1>=0)cout<<count-mn<<endl;
else cout<<count+mn<<endl;
return 0;
}
