#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>
#define vv vector<vll>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define pll pair<ll,ll>
#define vpll vector<pll>
#define ff first
#define ss second
#define tll tuple<ll,ll,ll>
#define vtll vector<tll>
#define mt make_tuple
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define rfo(i,a,b) for(ll i=a;i>=b;i--)
#define vect(a,n) vll a(n); fo(i,0,n) cin>>a[i];
#define all(a) a.begin(),a.end()
#define sortall(a) sort(a.begin(),a.end());
#define ps(x,y) fixed<<setprecision(y)<<x;
#define tc ll tc; cin>>tc; while(tc--)
#define printall(a) fo(i,0,a.size()) cout<<a[i]<<" "; cout<<endl;
#define pairout(p) cout<<"("<<p.ff<<","<<p.ss<<")  "<<endl;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll mod = 998244353;
#define PI 3.1415926535897932384626
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
void OJ(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin) ;
freopen("output.txt", "w", stdout) ;
#endif
}
long long mpow(ll base, ll exp);
void solve()
{
ll n,i,j,k,l;cin>>n>>l;
ll x,y;
ll flag=0;
fo(i,0,n+1){
if((2*i+(n-i)*4)==l){
flag++;
break;
}
}
if(flag==0) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
int main()
{
fastio;
solve();
return 0;
}
long long mpow(ll base, ll exp) {
base %= mod;
ll result = 1;
while (exp > 0) {
if (exp & 1) result = ((ll)result * base) % mod;
base = ((ll)base * base) % mod;
exp >>= 1;
}
return result;
}
