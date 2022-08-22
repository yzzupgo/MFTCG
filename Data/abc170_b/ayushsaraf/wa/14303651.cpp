#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define ar array
#define mod 1000000007
#define pb push_back
#define mpa make_pair
#define TEST ll t; cin>>t; while(t--)
#define vell vector<ll>
#define vel2 vector<vector<ll>>
#define all(v) v.begin(),v.end()
#define for0(i,n) for(ll i=0;i<(ll)n;i++)
#define for1(i,n) for(ll i=1;i<=(ll)n;i++)
#define forr(i,n) for(ll i=(ll)n-1;i>=0;i--)
#define fall(i,a,b,c) for(ll i=a;i<=(ll)b;i+=(ll)c)
#define db long double
#define endl "\n"
#define MAX INT_MAX
#define MIN INT_MIN
ll add(ll a,ll b) { return ((a%mod+b%mod)%mod); }
ll mult(ll a,ll b) { return (((a%mod)*(b%mod))%mod); }
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
if (a == 0) {
*x = 0, *y = 1;
return b;
}
ll x1, y1;
ll gcd = gcdExtended(b%a, a, &x1, &y1);
*x = y1 - (b/a) * x1;
*y = x1;
return gcd;
}
ll modInverse(ll b, ll m)
{
ll x, y;
ll g = gcdExtended(b, m, &x, &y);
if (g != 1)
return -1;
return (x%m + m) % m;
}
ll modDivide(ll a, ll b, ll m)
{
a = a % m;
int inv = modInverse(b, m);
return (inv * a) % m;
}
ll power(ll a,ll n)
{
ll ans=1;
while(n>0)
{
ll lastbit=(n&1);
if(lastbit)
ans*=a;
a*=a;
n>>=1;
}
return ans;
}
int sieveo(ll n)
{
bool prime[n+1];
memset(prime, true, sizeof(prime));
ll ans=0;
for (ll p=2; p*p<=n; p++)
{
if (prime[p] == true)
{
for (ll i=p*p; i<=n; i += p)
prime[i] = false;
}
}
for (ll p=2; p<=n; p++)
if (prime[p])
ans++;
return ans;
}
void primesieve(ll N, ll s[])
{
vector <bool> prime(N+1, false);
for (ll i=2; i<=N; i+=2)
s[i] = 2;
for (ll i=3; i<=N; i+=2)
{
if (prime[i] == false)
{
s[i] = i;
for (ll j=i; j*i<=N; j+=2)
{
if (prime[i*j] == false)
{
prime[i*j] = true;
s[i*j] = i;
}
}
}
}
}
void primefactor(ll N)
{
ll s[N+1];
primesieve(N, s);
ll curr = s[N];
ll cnt = 1;
while (N > 1)
{
N /= s[N];
if (curr == s[N])
{
cnt++;
continue;
}
curr = s[N];
cnt = 1;
}
}
void solve()
{
ll x,y;
cin >> x >> y;
ll d = y/x;
ll m = y%x;
if(m || 2*x == y || 4*x == y) {
cout << "Yes" << endl;
}
else
cout << "No" << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(0);cin.tie(0);
solve();
}
