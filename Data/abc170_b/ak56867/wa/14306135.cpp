#include<bits/stdc++.h>
using namespace std;
#define I_O ios::sync_with_stdio(false),cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define mod 1000000007
#define rep(i,n) for(ll i=1;i<=n;i++)
#define repv(i,a,n) for(ll i=a;i<=n;i++)
#define pb push_back
#define newl '\n'
#define deb(x) cout<<x<<" "
set<ll> s;
int a[100005],b[100005];
int main()
{
I_O;
int x,y,legs,tot,num;
cin>>x>>y;
if(x == 1)
{
if(y == 2 || y == 4) return cout<<"Yes",0;
else return cout<<"No",0;
}
if(!(x%2))
{
rep(i,(x/2))
{
num = x - i;
legs = (2*num) + (4*i);
if(legs == y)return cout<<"Yes",0;
}
}
else
{
rep(i,((x/2)+1))
{
num = x - i;
legs = (2*num) + (4*i);
if(legs == y)return cout<<"Yes",0;
}
}
cout<<"No";
}
