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
if(n<=9)
cout<<n<<endl;
else if(n>9 && n<=99)
cout<<"9"<<endl;
else if(n>99 && n<=9999)
cout<<n-99+9<<endl;
else if(n>9999 && n<=100000)
cout<<n-9999+910<<endl;
return 0;
}
