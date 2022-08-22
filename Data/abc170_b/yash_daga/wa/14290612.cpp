#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define int long long
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);cout.precision(dbl::max_digits10);
#define pb push_back
#define mod 1000000007
#define lld long double
#define mii map<int, int>
#define mci map<char, int>
#define msi map<string, int>
#define pii pair<int, int>
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rep(i,x,y) for(int i=x; i<y; i++)
#define fill(a,b) memset(a, b, sizeof(a))
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define print2d(dp,n,m) for(int i=0;i<=n;i++){for(int j=0;j<=m;j++)cout<<dp[i][j]<<" ";cout<<"\n";}
typedef std::numeric_limits< double > dbl;
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
const long long N=200005, INF=2000000000000000000;
lld pi=3.1415926535897932;
int lcm(int a, int b)
{
int g=__gcd(a, b);
return a/g*b;
}
int power(int a, int b, int p)
{
if(a==0)
return 0;
int res=1;
a%=p;
while(b>0)
{
if(b&1)
res=(res*a)%p;
b>>=1;
a=(a*a)%p;
}
return res;
}
int32_t main()
{
IOS;
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++)
{
if(((4*i)+(2*(x-i)))==y)
{
cout<<"YES";
return 0;
}
}
cout<<"NO";
return 0;
}
