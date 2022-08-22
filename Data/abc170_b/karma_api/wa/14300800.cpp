#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define ub upper_bound
#define lb lower_bound
#define all(v) ((v).begin()),((v).end())
#define allr(v) ((v).rbegin()),((v).rend())
#define ff first
#define ss second
#define mp make_pair
#define pll pair<ll,ll>
#define fo(i,n) for(ll i=0;i<n;i++)
#define foa(i,s,e) for(ll i=(s);i<e;i++)
#define fod(i,s,e) for(ll i= (s);i>=(e);i--)
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define deb(x) cerr<<#x<<' '<<'='<<' '<<x<<'\n'
const ld pi = 3.14159265358979323846;
ll MOD = 998244353;
const char nl = '\n';
const ll inf = 1e15;
ll mul(ll x,ll y){
return (1ll* (x%MOD)*(y%MOD));
}
ll modpow(ll x,ll y){ll z=1;while(y>0){if(y%2)z=mul(z,x);x =mul(x,x) ;y/=2;}return z;}
ll power(ll x,ll y){ll z=1;while(y>0){if(y%2)z=z*x;x =x*x ;y/=2;}return z;}
ll gcd(ll a,ll b){if(a<b) return gcd(b,a);if(b==0) return a;return gcd(b,a%b);}
ll min(ll a,ll b){if(a<b)return a;return b;}
ll max(ll a,ll b){if(a>b)return a;return b;}
ll sq(ll a){
ll ans = (1ll*a*a);
return ans;
}
void solve(){
ll x,y;
cin>>x>>y;
ll t = y - 2*x;
ll c = 4*x - y;
if(t%2 == 0 && c%2 == 0 && t>=0 && c>=0 && t + c == 2*x && c + 2*t == y){
cout<<"YES\n";
}
else{
cout<<"NO\n";
}
}
int main(){
ios::sync_with_stdio(false);
cin.tie(0),cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("inputf.txt" , "r" , stdin) ;
freopen("outputf.txt" , "w" , stdout) ;
freopen("error.txt" , "w" , stderr) ;
#endif
ll t = 1;
while(t--){
solve();
}
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}
