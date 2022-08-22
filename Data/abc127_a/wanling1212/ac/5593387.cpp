#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<((ll)n);i++)
#define rep1(i,n) for(ll i=1;i<=((ll)n);i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
#define meow(a) cout<<a<<" meow\n";
typedef pair<long long,long long> pii;
const ll maxn=200005;
const ll MOD=998244353;
double mypow(ll a,ll b){
double res=1;
while(b){
if(b&1) res=res*a;
a=a*a;
b>>=1;
}
return res;
}
ll x,y;
int main()
{
while(cin>>x>>y)
{
if(x<6) cout<<0<<"\n";
else if(x<=12) cout<<y/2<<"\n";
else cout<<y<<"\n";
}
return 0;
}
