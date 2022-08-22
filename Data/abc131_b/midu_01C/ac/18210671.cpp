#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<long long> lve;
typedef vector<pair<ll,ll> > lvp;
typedef vector<vector<int> > ivve;
#define sp ' '
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define GCD(x,y) __gcd(x,y)
#define lb lower_bound
#define up upper_bound
#define setp setprecision
#define bs binary_search
#define all(x) x.begin(),x.end()
#define LCM(x,y) ((x*y)/__gcd(x,y))
#define spc(x) cout<<fixed<<setp(x)
const long long inf = 1e18;
const long long cs = 200005;
const long long mod = 1000000007;
const double PI = 2 * acos(0.0);
void solve()
{
ll t,m,n,a,b,c,d,e,i,j,k,x,y,z,cnt=0,cnt1=0;
bool flag = false;
cin>>n>>x;
m=n+x-1;
for(i=0;i<n;i++) cnt+=x+i;
for(i=x;i<x+n;i++) m=min(abs(i), m);
cout<<cnt-m<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
