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
int main()
{
I_O;
int x,y,legs,tot,num;
cin>>x>>y;
set<int> s;
if(y<=x) return cout<<"No",0;
if(x == 1)
{
if(y == 2 || y == 4) return cout<<"Yes",0;
else return cout<<"No",0;
}
rep(i,x)
{
num = x - i;
tot = (2*i) + (4*num);
s.insert(tot);
}
bool isin = s.find(y)!=s.end();
if(isin) cout<<"Yes";
else cout<<"No";
}
