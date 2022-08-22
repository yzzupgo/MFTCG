#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define inf ll(1e18)
#define mod 1000000007
#define mod1 998244353
#define mod2 999983
ll power(ll a,ll n,ll m) ;
ll power(ll a,ll n,ll m)
{ if(n==0)
return 1 ;
ll x=power(a,n/2,m) ;
if(n%2!=0)
return (((a*x)%m)*(x)%m)%m ;
else return (x*x)%m ;
}
double PI=3.14159265357 ;
int32_t main()
{ ll n,i,j,x,y,m,k,t,sum,count,cnt,b,c,d,j1,z,a,temp;
ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
cin>>x>>y ;
for(i=0;i<=x;i++)
{
z=i*2+(4)*(x-i) ;
if(z==y)
break ;
}
if(i<=x)
cout<<"Yes" ;
else cout<<"No" ;
return 0; }
