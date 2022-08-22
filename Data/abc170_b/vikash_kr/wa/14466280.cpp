#include<bits/stdc++.h>
#define ll long long int
#define ll_MAX LLONG_MAX
#define ll_MIN LLONG_MIN
#define pi 3.14159265358979323846
#define count_1(n) __builtin_popcountll(n)
#define MOD 1000000007
#define MAX 1e9
#define MIN -1e9
#define itoc(c) ((char)(((int)'0')+c))
#define mid(s,e) (s+(e-s)/2)
const int MX=10010896;
const int lmt=3164;
const int N=10000001;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
ll extgcd(ll a,ll b,ll& x,ll& y){if(b==0){x=1;y=0;return a;}else{int g=extgcd(b,a%b,y,x);y-=a/b*x;return g;}}
ll modpow(ll a,ll b) {ll res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
inline void solve(){
int x,y;cin>>x>>y;
string ans="No";
for(int i=1;i<=x;i++){
if(( (i*2)+((x-i)*4) )==y)
ans="Yes";
}
cout<<ans<<endl;
}
int main()
{
cout<<fixed<<setprecision(12);
fastio;ll t=1,tc=1;
while(t--){solve();}return 0;
}
