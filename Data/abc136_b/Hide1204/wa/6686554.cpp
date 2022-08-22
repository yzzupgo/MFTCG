#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <stdio.h>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#define rep(i,a,n) for(ll i =(a);i<(n);++i)
#define urep(i,a,n) for(ll i = (a);i>=(n);--i)
#define all(x) (x).begin(),(x).end()
#define INF 1e18
typedef long long ll;
const ll MAX=510000;
const ll mod = 1e9 + 7;
using namespace std;
ll dx[4] = { 1,-1,0,0 };
ll dy[4] = { 0,0,1,-1 };
ll N,M,X,Y,A,B,C,D,Q,K,R,W,H,P,L,G;
ll ans;
string S,T;
ll y[101010];
ll a[201010];
ll k[101010];
ll b[201010];
ll d[101010];
ll t[101010];
ll p[101010];
ll n[101010];
ll l[101010];
ll r[101010];
ll v[101010];
ll s[101010];
ll x[101010];
ll gcd(ll a, ll b) {
if (b == 0)return a;
else return gcd(b, a%b);
}
ll lcm(ll a,ll b){
return a/gcd(a,b)*b;
}
struct Edge{
ll to,cost;
Edge(ll to, ll cost) : to(to), cost(cost) {}
};
typedef vector<vector<Edge> > AdjList;
AdjList graph;
vector<ll> dist;
struct UnionFind {
vector<ll> par;
vector<ll> size;
UnionFind(ll N) : par(N),size(N) {
for(ll i = 0; i < N; i++) par[i] = i;
for(ll i = 0; i < N; i++) size[i] = 1;
}
ll root(ll x) {
if (par[x] == x) return x;
return par[x] = root(par[x]);
}
ll GetSize(ll x){
return size[root(x)];
}
void unite(ll x, ll y) {
ll rx = root(x);
ll ry = root(y);
if (rx == ry) return;
par[rx] = ry;
size[ry]+=size[rx];
}
bool same(ll x, ll y) {
ll rx = root(x);
ll ry = root(y);
return rx == ry;
}
};
int main(){
cin>>N;
ans=0;
rep(i,0,N){
ll num=i;
ll tmp=0;
while(num>=1){
num/=10;
tmp++;
}
if(tmp %2==1){
ans++;
}
}
cout<<ans<<endl;
return 0;
}
