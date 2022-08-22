#include<bits/stdc++.h>
using namespace std;
#define fi freopen("in.txt","r",stdin)
#define fo freopen("out.txt","w",stdout)
#define sc1(a) scanf("%lld",&a)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define scar(arr,n) for(int index=0;index<n;index++)sc1(arr[index]);
#define vs vector<string>
#define vll vector<long long int >
#define vc vector<char>
#define vpll vector<pair<long long,long long> >
#define vvll vector<vector<long long>>
#define up(v,x) upper_bound(v.begin(),v.end(),x)-v.begin()
#define low(v,x) lower_bound(v.begin(),v.end(),x)-v.begin()
#define all(a) (a).begin(),(a).end()
#define foreach(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define cases ll t,ti=0;cin>>t;while((ti++)!=t)
#define fr(a,n) for(long long i = (a); i < (n); i++)
#define fri(a,n) for(long long i = (a); i <= (n); i++)
#define eps 1e-13
#define mod 1000000007LL
#define PI acos(-1)
#define INF 1000000011
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pil pair<int, long long>
#define pli pair<long long, int>
#define pcc pair<char, char>
#define pdd pair<double, double>
#define mk make_pair
#define ff first
#define ss second
#define clc clock_t time_req=clock()
#define pclc cout<<setprecision(10)<<(float)time_req/CLOCKS_PER_SEC
#define ll long long int
#define nl printf("\n")
#define qll queue<long long int >
#define mll map<long long int , long long int>
#define pb(x) push_back(x)
#define gtl(x) getline(cin, (x))
#define flsh fflush(stdout)
#define sws ios_base::sync_with_stdio(false); cin.tie(0)
#define mst(x) memset(x,0,sizeof(x))
#define Log(x,a) (log(a)/log(x))
#define PNY(f,a) printf((f==a)?"NO\n":"YES\n");
#define PYN(f,a) printf((f==a)?"YES\n":"NO\n");
bool CMP(int a, int b) { return a>b; }
ll p=1e9+7;
ll power2(ll n)
{
ll res=1;
for(ll i=1;i<=n;i++)
res*=2;
return res;
}
ll power(ll x, ll y)
{
ll res = 1;
x = x % p;
if (x == 0) return 0;
while (y > 0)
{
if (y & 1)
res = (res*x) % p;
y = y>>1;
x = (x*x) % p;
}
return res;
}
ll cnt1=0,u,cnt=0,n;
vector<vector<ll> >adj1(200010);
vector<pair<ll,ll> >adj[200010];
vector<ll>wt(200010);
ll visi[310068],vis[300100],last1[10000];
vector<ll> viso;
bool ok=false;
ll m,ans=0;
#define PI 3.14159265
ll dp[200010];
bool mycompare(string s,string t)
{
string x=s+t;
string y=t+s;
if(x>y)
return 1;
else
return 0;
}
ll maxi=1e7;
set<ll>w;
pair<ll, ll> rotate(ll x, ll y, ll a, ll b, ll t)
{
ll i;
for (i = 0; i < t; i++)
{
ll p = a + b - y, q = x + b - a;
x = p, y = q;
}
pair<ll, ll> P = make_pair(x, y);
return P;
}
ll dist(ll x1, ll y1, ll x2, ll y2)
{
ll d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
return d;
}
bool check(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x4, ll y4)
{
ll d2 = dist(x1, y1, x2, y2);
ll d3 = dist(x1, y1, x3, y3);
ll d4 = dist(x1, y1, x4, y4);
if (d2 == 0 || d3 == 0 || d4 == 0)
return false;
if (d2 == d3 && d4 == 2 * d2 && 2 * dist(x2, y2, x4, y4) == dist(x2, y2, x3, y3))
return true;
if (d3 == d4 && d2 == 2 * d3 && 2 * dist(x2, y2, x3, y3) == dist(x3, y3, x4, y4))
return true;
if (d2 == d4 && d3 == 2 * d2 && 2 * dist(x2, y2, x3, y3) == dist(x2, y2, x4, y4))
return true;
return false;
}
#ifdef Akshat
#include "../../trace.h"
#else
#define trace(args...)
#endif
ll A[20010];
class SegmentTree{
public:
vector<ll>A;
vector<ll>tree;
ll n,d;
SegmentTree(vector<ll> &inp, ll depth)
{
A=inp;
d=depth;
n=A.size();
tree.resize(4*n);
build(1,0,n-1,d);
}
void build(ll node, ll start,ll end,ll depth)
{
if(start==end)
tree[node]=A[start];
else
{
ll mid=(start+end)/2;
build(2*node,start,mid,depth-1);
build(2*node+1,mid+1,end,depth-1);
if(depth%2==1)
tree[node]=tree[2*node]|tree[2*node+1];
else
tree[node]=tree[2*node]^tree[2*node+1];
}
}
void update(ll node,ll start,ll end,ll idx,ll depth)
{
if(start==end)
{
tree[node]=A[start];
}
else
{
ll mid=(start+end)/2;
if(start<=idx && idx<=mid)
update(2*node,start,mid,idx,depth-1);
else
update(2*node+1,mid+1,end,idx,depth-1);
if(depth%2==1)
tree[node]=tree[2*node]|tree[2*node+1];
else
tree[node]=tree[2*node]^tree[2*node+1];
}
}
ll update(ll index,ll value)
{
A[index]=value;
update(1,0,n-1,index,d);
return tree[1];
}
};
priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > >pq;
void dj(ll s)
{
pair<ll,ll>pi;
for(ll i=0;i<adj[s].size();i++)
{
if(vis[adj[s][i].first]>vis[s]+adj[s][i].second)
{
vis[adj[s][i].first]=vis[s]+adj[s][i].second;
visi[adj[s][i].first]=s;
pq.push(mk(vis[adj[s][i].first],adj[s][i].first));
}
}
if(pq.empty())
return;
pi=pq.top();
pq.pop();
dj(pi.second);
}
void path(ll x)
{
if(x==0)
return ;
path(visi[x]);
cout<<x<<" ";
}
int main()
{
ll x,y;
cin>>x>>y;
if(y-2*x<0||4*x-y<0||((y-2*x)%2!=0)||((4*x-y)%2==0))
{
cout<<"No"<<endl;
return 0;
}
cout<<"Yes"<<endl;
}
