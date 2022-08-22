#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define MP make_pair
#define SET(a,val) memset(a,val,sizeof(a))
#define deci(n) cout<<fixed<<setprecision(n);
#define show(a,l,r) for(int i=l;i<r;i++) cout<<a[i]<<" ";
#define all(a) a.begin(),a.end()
const int N=1000004;
const int dx[] = {-1, 0, 1, 0, -1,-1, 1, 1};
const int dy[] = { 0, 1, 0,-1, -1, 1,-1, 1};
char dir[]={'L','D','R','U'};
typedef long long int ll;
const ll mod=(ll)1e9+7;
const ll inf=1e18+100;
int BIT[1000005],n;
int prime[17],spf[17];
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}
template<typename T> T min3(T a,T b,T c) {return min(a,min(b,c));}
template<typename T> T max3(T a,T b,T c) {return max(a,max(b,c));}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
ll mInv(ll a, ll m)
{
ll m0 = m;
ll y = 0, x = 1;
if (m == 1)
return 0;
while (a > 1)
{
ll q = a / m;
ll t = m;
m = a % m, a = t;
t = y;
y = x - q * y;
x = t;
}
if (x < 0)
x += m0;
return x;
}
ll power(ll x, ll y)
{
ll res = 1;
x = x % mod;
while (y > 0)
{
if (y & 1)
res = (res*x) % mod;
y = y>>1;
x = (x*x)% mod;
}
return res;
}
ll gcd(ll a,ll b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
long long ExtendedGcd (long long a, long long b, long long *x, long long *y) {
if (!a) {
*x = 0;
*y = 1;
return b;
}
long long nx, ny;
long long d = ExtendedGcd (b % a, a, &nx, &ny);
long long k = b / a;
*y = nx;
*x = -k * nx + ny;
return d;
}
void update(int x, int delta)
{
if(!x)
{
BIT[x]+=delta;
return;
}
for(; x <= N; x += x&-x)
BIT[x] += delta;
}
ll query(int x)
{
ll sum = BIT[0];
for(; x > 0; x -= x&-x)
sum += BIT[x];
return sum;
}
void Sieve()
{
for(int i=1;i<=N;i++)
prime[i]=1;
prime[0]=0;
prime[1]=0;
for (ll p=2; p*p<=N; p++)
{
if (prime[p] == 1)
{
for (ll i=p*p; i<=N; i += p)
prime[i] = 0;
}
}
for(int p=3;p<=N;p++)
prime[p]+=prime[p-1];
}
void sieve()
{
spf[1] = 1;
for (int i=2; i<N; i++)
spf[i] = i;
for (int i=4; i<N; i+=2)
spf[i] = 2;
for (ll i=3; i*i<N; i++)
{
if (spf[i] == i)
{
for (ll j=i*i; j<N; j+=i)
if (spf[j]==j)
spf[j] = i;
}
}
}
struct cmp {
bool operator() (const pair<int,int>&x, const pair<int,int>&y) const {
if(x.first!=y.first)
return x.first<y.first;
return x.second>y.second;
}
};
void gInput(int m,vector<int>adj[])
{
int u,v;
for(int i=0;i<m;i++)
{
cin>>u>>v;
adj[u].pb(v);
adj[v].pb(u);
}
}
vector<ll>fac;
void factorial()
{
int N=(int)1e6;
fac.resize(N);
fac[0]=1;
for(ll i=1;i<=N;i++)
{
fac[i]=((fac[i-1]%mod)*i)%mod;
}
}
ll nCr(ll n,ll r)
{
ll x=fac[n];
ll y=fac[r];
ll z=fac[n-r];
ll pr=((y%mod)*(z%mod))%mod;
pr=mInv(pr,mod);
ll ncr=((x%mod)*(pr%mod))%mod;
return ncr;
}
int main()
{
fast
int t=1;
while(t--)
{
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++)
{
int p=i*2;
int q=y-p;
if(q==(x-i)*4)
{
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
}
return 0;
}
