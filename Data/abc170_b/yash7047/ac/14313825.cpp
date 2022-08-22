#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define bs binary_search
#define pb push_back
#define pp pair<ll,ll>
#define F first
#define S second
#define lc "\n"
ll power(ll x,ll y,ll p){ll res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
ll MAX=1e18 , MIN=-1e18 , MOD=1000000007;
int main()
{
fastio
int x,y,n,m; cin>>x>>y;
if(y%2==0)
{
n=(4*x-y)/2; m=(y-2*x)/2;
if(n>=0&&m>=0) cout<<"Yes";
else cout<<"No";
}
else cout<<"No";
return 0;
}
