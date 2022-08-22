#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(),a.end()
#define rrng(a) a.rbegin(),a.rend()
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define limit(x,l,r) max(l,min(x,r))
#define lims(x,l,r) (x = max(l,min(x,r)))
#define isin(x,l,r) ((l) <= (x) && (x) < (r))
#define pb push_back
#define eb emplace_back
#define all(c) begin(c),end(c)
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define uni(x) x.erase(unique(rng(x)),x.end())
#define snuke srand((unsigned)clock()+(unsigned)time(NULL));
#define show(x) cout<<#x<<" = "<<x<<endl;
#define PQ(T) priority_queue<T,v(T),greater<T> >
#define bn(x) ((1<<x)-1)
#define dup(x,y) (((x)+(y)-1)/(y))
#define newline puts("")
#define v(T) vector<T>
#define vv(T) v(v(T))
using namespace std;
typedef long long int ll;
typedef unsigned uint;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef tuple<int,int,int> T;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
typedef vector<T> vt;
ll gcd(ll x, ll y) {
return y ? gcd(y, x % y) : x;
}
ll lcm(ll x, ll y) {
return x/gcd(x, y)*y;
}
vector<pair<ll,int>> factorize(ll n) {
vector<pair<ll,int>> res;
for (ll i = 2; i*i <= n; ++i) {
if (n%i) continue;
res.emplace_back(i,0);
while (n%i == 0) {
n /= i;
res.back().second++;
}
}
if (n != 1) res.emplace_back(n,1);
return res;
}
ll mod=998244353;
int main() {
int x,y;
cin>>x>>y;
int t,s;
for(s=0;s<=x;s++){
t=x-s;
int y2=4*s+2*t;
if(y2==y){
cout<<"Yes";
return 0;
}
}
cout<<"No";
}
