#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define deb1(a) cout<<a<<"\n";
#define deb2(a,b) cout<<a<<" "<<b<<"\n";
#define all(a) a.begin(),a.end()
#define mine(a) *min_element(a.begin(),a.end())
#define maxe(a) *max_element(a.begin(),a.end())
#define sum(a) accumulate(a.begin(),a.end(),0ll)
#define popcnt(x) __builtin_popcount(x)
#define f(i,L,R) for (int i = L; i < R; i++)
#define fe(i,L,R) for (int i = L; i <= R; i++)
#define getFaster ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define pl pair<ll, ll>
#define vpl vector<pair<ll,ll>>
#define vl vector<ll>
#define spl set<pair<ll,ll>>
#define ff first
#define ss second
#define nl cout<<"\n"
#define en "\n"
const ll md = 1e9+7;
const ll inf = 1e18;
const ld pi = acos(-1);
ll power(ll x,ll y){ll res = 1;x%=md;while(y){if(y&1)res = (res*x)%md;x *= x; if(x>=md) x %= md; y >>= 1;}return res;}
ll inv(ll a){return power(a,md-2);}
ll gcd(ll x,ll y){for(ll z;y;z=x%y,x=y,y=z);return x;}
#define sorteo(v) sort(all(v), [](ll x, ll y) { return x % 2 < y % 2; } );
#define sortoe(v) sort(all(v), [](ll x, ll y) { return x % 2 > y % 2; } );
const int N = 1e5 + 10;
double eps = 1e-6;
void precompute()
{
}
void Try()
{
int n,k;
cin>>n>>k;
for(int i=1;i<=n;i++){
if(i*2 + (n-i)*4 == k || i*4 + (n-i)*2 == k){
cout<<"Yes\n";
return;
}
}
cout<<"No\n";
}
int main()
{
getFaster;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int tc=1;
precompute();
while(tc--) Try();
return 0;
}
