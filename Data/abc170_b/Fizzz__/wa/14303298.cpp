#include<bits/stdc++.h>
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define pb push_back
#define ff first
#define ss second
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define all(v) v.begin(),v.end()
#define lllim 2147483648
#define Pi 2*acos(0.0)
#define sci(n) scanf("%d",&n)
#define scii(n,m) scanf("%d%d",&n,&m)
#define scl(n) scanf("%lld",&n)
#define scll(n,m) scanf("%lld%lld",&n,&m)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mem(a,b) memset(a, b, sizeof(a))
#define fill_(a,b) fill(a,a+n,b);
#define MOD 1000000007
#define fast_cin ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define filein freopen("input.txt","r", stdin)
#define watch(x) cerr << __LINE__ << ": " << #x << " = " << (x) << '\n'
#define case int t,cas=1;cin>>t;while(t--)
#define forn(i,a,n) for(int i=a;a==0?i<n:i<=n;i++)
using namespace std;
using namespace __gnu_pbds;
const int maxn=1e5+5;
void solve()
{
ll x,y;
cin>>x>>y;
bool f=0;
for(ll i=1;i<=x;i++)
{
ll l=2*i +(x-i)*4;
if(l==y)
{
f=1;
break;
}
}
if(f)
{
cout<<"Yes"<<endl;
}
else
cout<<"No"<<endl;
}
int main()
{
fast_cin;
{
solve();
}
return 0;
}
