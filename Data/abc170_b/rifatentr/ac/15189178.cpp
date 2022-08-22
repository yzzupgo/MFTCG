#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
#define fi first
#define se second
#define pb push_back
#define nn "\n"
#define all(p) p.begin(),p.end()
#define zz(v) (ll)v.size()
#define S(a) scanf("%lld",&a)
#define SS(a,b) scanf("%lld %lld",&a,&b)
#define SSS(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define ss ' '
#define pii pair<ll,ll>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
const double eps = 1e-8;
int main()
{
ll n,m;
cin>>n>>m;
for(ll i=0;i<=n;i++)
{
ll j=n-i;
if(i*2+4*j==m)
{
cout<<"Yes"<<nn;
return 0;
}
}
cout<<"No"<<nn;
}
