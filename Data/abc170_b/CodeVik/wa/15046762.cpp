#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mpr make_pair
#define pr pair<lli,lli>
#define pb push_back
#define vl vector<lli>
#define mp map<lli,lli>
#define all(x) x.begin(),x.end()
#define FOR(i,n) for(lli i=0;i<(lli)n;i++)
#define FOR1(i,j,n) for(lli i=j;i<(lli)n;i++)
#define mod 1000000007
lli gcd(lli a,lli b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
lli power(lli x,lli n,lli m)
{
lli res=1;
while(n>0)
{
if(n&1) res=(res*x)%m;
x=(x*x)%m;
n=n>>1;
}
return res;
}
lli modInverse(lli n,lli p)
{
return power(n,p-2,p);
}
lli nCr(lli n,lli r,lli p)
{
if(r==0)
return 1;
lli fac[n+1];
fac[0]=1;
for(lli i=1;i<=n;i++)
fac[i]=fac[i-1]*i%p;
return ((fac[n]* modInverse(fac[r], p) % p )%p*
modInverse(fac[n-r], p) % p) % p;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
lli x,y;
cin>>x>>y;
if(y/2==x||y/4==x) cout<<"No\n";
else cout<<"Yes\n";
return 0;
}
