#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define l long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define M1 1000000007
#define M2 998244353
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define bfl(i,a,b) for(ll i=b-1;i>=a;i--)
#define f(i,n) for(int i=0;i<n;i++)
#define bf(i,n) for(int i=n-1;i>=0;i--)
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a,b) cout << a << " " << b << endl
#define p3(a,b,c) cout << a << " " << b << " " << c << endl
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << endl
#define bn "\n"
ll modI(ll a,ll m);
ll gcd(ll a,ll b);
ll powM(ll x,ll y,ll m);
ll swap(ll a,ll b);
void swap(ll& a,ll& b)
{
ll tp=a;
a=b;
b=tp;
}
ll gcd(ll x,ll y)
{
if(x==0) return y;
return gcd(y%x,x);
}
ll powM(ll x,ll y,ll m)
{
ll ans=1,r=1;
x%=m;
while(r>0&&r<=y)
{
if(r&y)
{
ans*=x;
ans%=m;
}
r<<=1;
x*=x;
x%=m;
}
return ans;
}
ll modI(ll a, ll m)
{
ll m0=m,y=0,x=1;
if(m==1) return 0;
while(a>1)
{
ll q=a/m;
ll t=m;
m=a%m;
a=t;
t=y;
y=x-q*y;
x=t;
}
if(x<0) x+=m0;
return x;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(0);
int tt=1;
while(tt--)
{
int x,y;
cin>>x>>y;
fl(i,1,x+1)
{
if(i*2 + (x-i)*4 == y)
{
cout<<"Yes"<<bn;return 0;
}
}
cout<<"No"<<bn;
}
return 0;
}
