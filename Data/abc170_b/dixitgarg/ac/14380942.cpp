#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
#define int long long
typedef unsigned long long lu;
typedef vector<ll> v;
typedef vector<vector<ll> > vv;
typedef vector<string> vs;
typedef vector<pair<ll,ll>> vpr;
typedef long double ld;
#define f(i,n) for(ll i = 0; i < n; i++)
#define ff(i,n) for(ll i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define endl "\n"
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define amax(x,y) if(y>x) x=y;
#define amin(x,y) if(y<x)x=y;
#define bg(x) x.begin()
#define sz(x) (ll)x.size()
#define in(x,n) for(ll i=0;i<n;i++)cin>>x[i]
#define out(x,n) for(ll i=0;i<n;i++)cout<<x[i]<<" "
#define mxt(a) *(max_element(a.begin(),a.end()))
#define mnt(a) *(min_element(a.begin(),a.end())
#define tc ll t;cin>>t;while(t--)
typedef pair<ll,ll> pi;
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define yesno(f) if(f) yes else no
const v dx = {1, -1, 0, 0};
const v dy = {0, 0, 1, -1};
const ld PI = 2 * acos(0.0);
ll cel(ll x1,ll y1){if((x1%y1)==0)return x1/y1;else return x1/y1+1;}
ll power(ll a,ll b,ll m)
{
if(b==0)
return 1;
ll d=power(a,b/2,m);
d=(d*d)%m;
if(b&1)
d=(d*a)%m;
return d;
}
const ll mod=1e9+7;
int MOD(int a)
{
if(a<0)
a+=mod;
if(a>=mod)
a%=mod;
return a;
}
int32_t main()
{
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int x,y;cin>>x>>y;yesno(((y%2==0) && ((y/2)<=2*x) && ((y/2)>=x)));
return 0;
}
