#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2")
#pragma GCC optimize("Os")
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);
#define FO cout.tie(NULL);
#define FI cin.tie(NULL);
#define IN cin>>
#define OUT cout<<
#define loop(i,a,n) for(int i=a; i<n; i++)
#define rloop(i,a,n) for(int i=a; i>=n; i--)
#define endl "\n";
#define pb push_back
#define mp make_pair
#define set_bits(a) __builtin_popcountll(a)
#define ll long long int
#define ld long double
#define vll vector<long long int>
#define pll pair<long long int, long long int>
#define mod 1000000007
#define M 998244353
using namespace std;
ll gcd(ll a, ll b)
{
return (b?gcd(b,a%b):a);
}
ll P(ll B, ll power, ll modulo)
{
ll ans=1LL;
while(power>0LL)
{
if(power%2LL==1LL)
{
ans=(ans*B)%modulo;
}
B=(B*B)%modulo;
power/=2LL;
}
return ans;
}
bool isPrime(ll n)
{
if(n<=1LL)
{
return false;
}
if(n<=3LL)
{
return true;
}
if(n%2==0LL || n%3==0LL)
{
return false;
}
for(ll i=5LL; (i*i)<=n; i+=6LL)
{
if(n%i==0LL || n%(i+2LL)==0LL)
{
return false;
}
}
return true;
}
void vok()
{
FAST
FO
FI
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
}
int main()
{
vok();
int x,y;
IN x>>y;
if(((4*x)-y)%2==0 && ((4*x)-y)/2<=x && ((4*x)-y)/2>=0)
{
OUT "Yes"<<endl
}
else
{
OUT "No"<<endl
}
return 0;
}
