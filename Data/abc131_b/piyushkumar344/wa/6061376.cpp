#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define f(a,b) for(ll i = a; i < b; i++)
#define fr(a,b) for(ll j = a; j >= b; j--)
#define fi(a,b) for(ll j = a; j < b; j++)
#define fii(a,b) for(ll k = a; k < b; k++)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define pl pair<ll,ll>
#define vll vector<ll>
#define pll vector< pair<ll,ll> >
#define ld long double
void sieve(int n)
{
bool prime[n+1];
memset(prime, true, sizeof(prime));
for (int p=2; p*p<=n; p++)
{
if (prime[p] == true)
{
for (int i=p*p; i<=n; i += p)
prime[i] = false;
}
}
}
ll modpow(ll a,ll b){
ll rs=1;
a%=mod;
while(b>0){
if(b&1)rs=(rs*a)%mod;
b=b>>1;
a=(a*a)%mod;
}
return rs;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
while(t--){
int n,l,sm=0,val=10000000;
cin>>n>>l;
int a[n];
f(0,n){ a[i]=l+i; sm+=a[i]; val=min(val,abs(a[i]));}
cout<<sm-val;
}
return 0;
}
