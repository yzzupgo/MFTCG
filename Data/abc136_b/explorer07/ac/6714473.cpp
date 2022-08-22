#include <bits/stdc++.h>
#define mem(dp,a) memset(dp,a,sizeof(dp))
#define pb(x) push_back(x)
#define m_p(x,y) make_pair(x,y)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repush_back(i,a,b) for(ll i=a;i>=b;i--)
#define f(n) for(ll i=0;i<n;i++)
#define r(n) for(ll j=0;j<n;j++)
#define F first
#define S second
#define pi 3.14159265359
#define hs ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
ll HRX=1e18;
ll INF=1e9+7;
int main()
{
hs;
ll n;
cin>>n;
ll res=0;
for(ll i=1;i<=n;i++)
{
if(i<=9)
res++;
else if(i>99 && i<1000)
res++;
else if(i>9999 && i<100000)
res++;
}
cout<<res<<endl;
return 0;
}
