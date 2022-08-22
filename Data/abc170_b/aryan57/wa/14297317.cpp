#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
#define int ll
const int INF=(int)2e18;
const int MOD = 1000000007;
const int PEG = 998244353;
long double pie=acos(-1);
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int, int > pii;
typedef vector< pii > vpii;
#define X first
#define Y second
#define pb push_back
#define sz(a) (ll)(a).size()
#define all(a) (a).begin(),(a).end()
#define F(i,a,b) for(ll i=a;i<=b;i++)
#define RF(i,a,b) for(ll i=a;i>=b;i--)
#define Fo(i,a,b,j) for(ll i=a;i<=b;i+=j)
#define RFo(i,a,b,j) for(ll i=a;i>=b;i-=j)
#define in(a,n) F(i,0,n-1)cin>>a[i]
#define in1(a,n) F(i,1,n)cin>>a[i]
#define out(a,n) F(i,0,n-1)cout<<a[i]<<" "
#define out1(a,n) F(i,1,n)cout<<a[i]<<" "
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define popcount __builtin_popcountll
#define sf(x) cin>>x
#define pf(x) cout<<x
#define pfy cout<<"Yes"
#define pfn cout<<"No"
#define pfn1 cout<<"-1"
#define pf1 cout<<"1"
#define nl cout<<"\n"
#define watch(x) cout<<#x<<" is "<<x<<"\n"
#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>void __f(const char* name,Arg1&& arg1);
template <typename Arg1,typename... Args>void __f(const char* names,Arg1&& arg1,Args&&... args);
ll binpow(ll x,ll y,ll p);
signed main()
{
#ifndef ONLINE_JUDGE
#endif
fast;
int x,y;
cin>>x>>y;
if(4*x>=y && (4*x-y)%2==0)
{
pfy;
}
else pfn;
return 0;
}
ll binpow(ll x, ll y, ll p)
{
ll res = 1;
x = x % p;
while (y > 0)
{
if (y & 1)
res = (res * x) % p;
y = y >> 1;
x = (x * x) % p;
}
return res;
}
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
std::cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{
const char *comma = strchr(names + 1, ',');
std::cout.write(names, comma - names) << " : " << arg1 << "\n";
__f(comma + 1, args...);
}
