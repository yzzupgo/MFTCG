#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define co cout
#define ci cin
#define sf1(n) scanf("%lld",&n)
#define sf2(n,m) scanf("%lld %lld",&n,&m);
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p);
#define pf1(n) printf("%lld\n",n);
#define en cout<<endl;
#define pb push_back
#define fi first
#define se second
#define coy cout<< "YES"<<endl;
#define con cout<< "NO"<<endl;
#define f(a,b) for(ll i=a;i<b;i++)
#define pi pair<ll,ll>
#define br break;
#define i64 long long
ll vis[150];
int main()
{
ll t,n,g,k,m,mx=0,mn=1e9,c,res,c1,x,y,w,z,c2;
ci>>x>>y;
c=0;
for(ll i=0;i<=x;i++)
{
if(i*2+(x-i)*4==y)
{
c=1;
br
}
}
if(c) co<< "Yes";
else co<< "No";
}
