#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define ll long long
#define ld long double
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector< pair<int,int> >
#define uset unordered_set
#define umap unordered_map
#define maxpq priority_queue<int>
#define minpq priority_queue<int,vi,greater<int>()>
#define all(v) v.begin(),v.end()
#define part(v,s,e) v.begin()+s,v.begin()+e
#define rev(v) reverse(v.begin(),v.end())
#define sz(x) (int)x.size()
#define def(v) memset(v,-1,sizeof(v));
#define def0(v) memset(v,0,sizeof(v));
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
#define sumv(a) accumulate(all(a),0)
#define lb lower_bound
#define ub upper_bound
#define desc greater<int>()
#define pb emplace_back
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define inf 1000000000000000
#define infty 1000000000000000000LL
#define md 998244353
#define PI acos(-1.0)
#define endl "\n"
#define rr return
#define br cout<<"\n";
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/(__gcd(a,b)))*b
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define ip(v) for(auto& i:v) cin>>i;
#define op(v) for(auto i:v) cout<<i<<" ";cout<<endl;
#define deb(x) cout <<"Value of " #x << " : " << x << endl;
void solve()
{
int x,y;
cin>>x>>y;
for(int i=1;i<=x;i++)
{
for(int j=1;j<=x-i;j++)
{
if(i*2+j*4==y)
{
cout<<"Yes\n";
rr;
}
}
}
cout<<"No\n";
}
int32_t main()
{
fastio
cout<<setprecision(15)<<fixed;
int t=1;
for(int i=1;i<=t;i++)
{
solve();
}
#ifndef ONLINE_JUDGE
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
#endif
return 0;
}
