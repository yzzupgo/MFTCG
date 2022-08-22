#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define fi first
#define se second
#define pb push_back
#define f_s(a) sort(a.begin(), a.end())
#define b_s(a) sort(a.rbegin(), a.rend())
#define p(a) cout<<a<<"\n"
ll gcd(ll a, ll b)
{
if(b==0) return a;
return gcd(b, a%b);
}
ll extended_gcd(ll a, ll b, ll& x, ll& y)
{
if(b==0)
{
x=1;
y=0;
return a;
}
ll x1, y1;
ll d = extended_gcd(b, a%b, x1, y1);
x=y1;
y=x1-y1*(a/b);
return d;
}
vector<int> sieveoferatosthenes(int n)
{
vector<bool> prime(n+1, true);
for(int i = 2; i <= sqrt(n); i++)
{
if(prime[i])
{
for(int j = i*i; j<=n; j+=i)
{
prime[j]=false;
}
}
}
vector<int> all_primes;
for(int i = 2; i <=n; i++)
{
if(prime[i]) all_primes.pb(i);
}
return all_primes;
}
ll bin_exp(ll a, ll b, ll mod)
{
ll ans = 1;
while(b)
{
if(b%2)
{
b--;
ans = (ans%mod*a%mod)%mod;
}
b/=2;
a = (a%mod*a%mod)%mod;
}
return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n, m, c;
cin>>n>>m;
if(n>=13)
{
c=m;
}
if(n>=6 and n<=12)
{
c=m/2;
}
else
{
c=0;
}
cout<<c<<endl;
}
