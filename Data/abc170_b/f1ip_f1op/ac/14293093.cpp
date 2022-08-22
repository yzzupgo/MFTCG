#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#define fo(i,n) for(long long i=0;i<n;i++)
#define ll long long int
#define inf 999999999999999999
#define pb push_back
#define MOD 1000000007
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); ++it)
#define fio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
void SieveOfEratosthenes()
{
bool prime[10000001];
memset(prime, true, sizeof(prime));
for (ll p=2; p*p<=10000000; p++)
{
if (prime[p] == true)
{
for (ll i=p*p; i<=10000000; i += p) {
prime[i] = false;
}
}
}
}
ll binpow(ll a, ll b) {
ll res = 1;
while (b > 0) {
if (b & 1)
res = (res * a);
a = (a * a);
b >>= 1;
}
return res;
}
ll gcd(ll a,ll b)
{
if(b%a==0)
return a;
return gcd(b%a,a);
}
ll nCrModpDP(ll n, ll r, ll p)
{
ll C[r+1];
memset(C, 0, sizeof(C));
C[0] = 1;
for (ll i = 1; i <= n; i++)
{
for (ll j = min(i, r); j > 0; j--)
C[j] = (C[j] + C[j-1])%p;
}
return C[r];
}
ll nCrModp(ll n, ll r, ll p)
{
if (r==0)
return 1;
ll ni = n%p, ri = r%p;
return (nCrModp(n/p, r/p, p) *
nCrModpDP(ni, ri, p)) % p;
}
int32_t main()
{
fio
ll j,i,n,t,l,r,c,h,k,y,m,maxi,d,x;
cin>>x>>y;
k=0;
for(i=0;i<=100;i++)
{
for(j=0;j<=100;j++)
{
if(i+j==x && 2*i+4*j==y)
{
k=1;
}
}
}
if(k)cout<<"Yes";
else
cout<<"No";
}
