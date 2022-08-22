#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vii vector<pii>
#define vl vector<ll>
#define vll vector<pll>
#define setbits(x) __builtin_popcountll(x)
#define f(i,l,r) for(ll i=l;i<r;i++)
#define d(i,n,m) for(ll i=n;i>=m;i--)
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define clr(x) memset(x,0,sizeof(x));
#define P (ll)(1e9+7)
#define PI acosl(-1.0l)
#define mod 998244353
#define pb push_back
#define F first
#define S second
#define IP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fixed(n) cout<<std::fixed<<std::setprecision(n)
using namespace std;
int offset[]={1,0,-1,0,1};
const int MXN=1e4+1;
int main()
{
IP
ll x,y;
cin>>x>>y;
bool found=0;
f(i,0,x+1)
{
ll rem=x-i;
if((2*i+4*rem)==y)
{
found=1;
break;
}
}
if(found)
cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
