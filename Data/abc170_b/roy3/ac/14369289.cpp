#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pb push_back
#define vi vector<long long>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace __gnu_pbds;
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> set1;
ll mod=1000000007;
ll large=1e18;
ll neg=-1e18;
ll N=500000;
ll mod1=998244353;
struct pii
{
ll x;
ll y;
};
struct edge
{
ll from;
ll to;
ll w;
ll id;
};
ll find(ll a,ll p[])
{
if(a==p[a])
return a;
else return p[a]=find(p[a],p);
}
void join(ll a,ll b,ll p[],ll sz[])
{
a=find(a,p);
b=find(b,p);
if(a!=b)
{
if(sz[a]<sz[b])
swap(a,b);
sz[a]+=sz[b];
p[b]=a;
}
}
ll power(ll a,ll b,ll mod)
{
ll res=1;
while(b>0)
{
if(b&1)
res=(res*a)%mod;
b=b/2;
a=(a*a)%mod;
}
return res;
}
ll inverse(ll x, ll p)
{
return power(x,p-2,p);
}
ll hash1(ll x,ll y)
{
return x+y+x*y;
}
void build(ll tree[],ll v,ll l,ll r,ll dp[])
{
if(l==r)
tree[v]=dp[l];
else
{
ll m=(l+r)/2;
build(tree,2*v,l,m,dp);
build(tree,2*v+1,m+1,r,dp);
tree[v]=max(tree[2*v],tree[2*v+1]);
}
}
ll query(ll tree[],ll v,ll l,ll r,ll tl,ll tr)
{
if(l==tl && tr==r)
{
return tree[v];
}
else
{
ll m=(l+r)/2;
if(tr<=m)
{
ll z1= query(tree,2*v,l,m,tl,tr);
return z1;
}
else if(tl>m)
{
ll z2= query(tree,2*v+1,m+1,r,tl,tr);
return z2;
}
else
{
ll z=query(tree,2*v,l,m,tl,m);
ll z1=query(tree,2*v+1,m+1,r,m+1,tr);
return max(z1,z);
}
}
}
void update(ll tree[],ll v,ll l,ll r,ll pos,ll element)
{
if(l==r && l==pos)
tree[v]=element;
else
{
ll m=(l+r)/2;
if(pos<=m)
update(tree,2*v,l,m,pos,element);
else
update(tree,2*v+1,m+1,r,pos,element);
tree[v]=max(tree[2*v],tree[2*v+1]);
}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x,y;
cin>>x>>y;
ll ans=0;
for(ll i=0;i<=x;i++)
{
if(2*i+4*(x-i)==y)
{
ans=1;
break;
}
}
if(ans==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
