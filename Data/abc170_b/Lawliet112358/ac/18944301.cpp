#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define FF ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define deb(x) cout<<#x<<"="<<x<<endl
#define asort(v) sort(v.begin(),v.end())
#define arev(v) reverse(v.begin(),v.end())
#define mp make_pair
#define sq(a) ((a)*(a))
#define F first
#define S second
typedef long long int ll;
typedef long double llf;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
int main()
{
FF;
ll x,y;cin>>x>>y;
if(y&1) cout<<"No"<<endl;
else
{
if(y>=x*2 && y<=x*4) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
return 0;
}
