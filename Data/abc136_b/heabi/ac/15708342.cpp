#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;++i)
#define P pair<ll,ll>
#define Graph vector<vector<P>>
#define fi first
#define se second
constexpr ll mod=1000000007;
constexpr ll INF=(1ll<<60);
constexpr double pi=3.14159265358979323846;
template<typename T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template<typename T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}
ll keta(ll n){
ll ret=0;
while(n){
n/=10;
ret++;
}
return ret;
}
ll mypow(ll a,ll b){
ll ret=1;
while(b--){
ret*=a;
}
return ret;
}
int main(){
ll n;cin>>n;
ll num;num=keta(n);
ll ans=0;
for(ll i=1;i<=num;i++){
if(i==1){
ans+=min(n,9ll);
}else if(i%2==1){
ans+=min(n+1,mypow(10,i))-mypow(10,i-1);
}
}
cout<<ans<<endl;
return 0;
}
