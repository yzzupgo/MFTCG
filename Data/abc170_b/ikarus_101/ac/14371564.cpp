#include<bits/stdc++.h>
using namespace std;
#define ikarus_101 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define scl(x) scanf("%lld",&x)
#define scll(x,y) scanf("%lld%lld",&x,&y)
#define sclll(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define scc(x) scanf("%c",&x)
#define scs(x) scanf("%s",&x)
#define pfl(x) printf("%lld\n",x)
#define pfll(x,y) printf("%lld %lld\n",x,y)
#define pyes puts("Yes")
#define pno puts("No")
#define nel printf("\n")
#define spc ' '
#define nn '\n'
#define vcl vector<ll>
#define mpl map<ll,ll>
#define vpl vector<pair<ll,ll>>
#define pb push_back
#define mkp(x,y) make_pair(x,y)
#define F first
#define S second
#define vin(a) for(auto &it : a) cin>>it
#define vout(a) for(auto it : a) cout<<it<<spc;cout<<nn
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define all(a) a.begin(),a.end()
#define sajo(str) sort(str.begin(),str.end())
#define rev(str) reverse(str.begin(),str.end())
#define usajo(str) sort(str.rbegin(),str.rend())
#define rep(i,n) for ( i=0 ; i<n ; ++i )
#define rep1(i,n) for ( i=1 ; i<=n ; ++i )
#define pi 2*acos(0.0)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define mem(a,b) memset(a,b,sizeof (a))
#define dec(x) cout<<fixed<<setprecision(x)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define LIM 100005
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
const ll N = 2e5+7;
const ll M = 1e9+7;
const ll lmx = 92233720368547758;
int main() {ikarus_101
ll n,m,a,b,c,d,x,y,i,j,k;
scll(x,y);
if(2*x <= y && y <= 4*x && y%2==0) pyes;
else pno;
return 0;
}
