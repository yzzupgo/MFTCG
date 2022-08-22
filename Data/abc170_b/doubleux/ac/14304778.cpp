#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pll> vpll;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test() int t;cin>>t;while(t--)
#define all(v) v.begin(),v.end()
#define prin(V) for(auto v:V) cout<<v<<" ";cout<<endl
#define take(V,f,n) for(int in=f;in<f+n;in++) cin>>V[in]
#define what(x) cerr<<#x<<" = "<<x<<endl
#define KStest() int t,t1;cin>>t;t1=t;while(t--)
#define KScout cout<<"Case #"<<t1-t<<": "
const int MOD = 1e9+7,MAX = 1e6+5;
ll powN(ll a,ll p,ll mod)
{
if(p==0) return 1;
ll z=powN(a,p/2,mod);
z=(z*z)%mod;
if(p%2) z=(z*a)%mod;
return z;
}
vector<bool> is_prime(MAX, true);
vector<int> MinDiv(MAX);
void Sieve()
{
is_prime[0] = is_prime[1] = false;
int i,j;
for (i = 2; i*i <= MAX; i++)
{
if (is_prime[i])
{
MinDiv[i]=i;
for (j = i * i; j <= MAX; j += i)
{
is_prime[j] = false;
MinDiv[j]=i;
}
}
}
for(int i=2;i<=MAX;i++) if(is_prime[i]) MinDiv[i]=i;
}
int main()
{
int x,y;
cin>>x>>y;
int a2 = 4*x-y;
int b2 = y-2*x;
if(a2>=0&&b2>=0&&a2%2==0&&b2%2==0) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
