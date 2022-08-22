#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<long,long> pl;
typedef pair<ll,ll> pll;
typedef vector<long> vl;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<vl> vvl;
typedef vector<vb> vvb;
typedef vector<vll> vvll;
typedef vector<pll> vpll;
typedef vector<string> vs;
#define FOR(i,a,b) for(long long i=a;i<b;++i)
#define REV(i,a,b) for(long long i=a;i>=b;i--)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()
#define tc ll tests;cin>>tests;while(tests--)
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define coutv(v) for(auto it: (v))cout<<it<<" ";newl;
#define cout2d(v) for(auto it: (v)) {for(auto j:it) cout<<j<<" ";newl;}
#define cinv(v,n) vll (v)(n);FOR(i,0,(n)){cin>>v[i];}
#define cinvg(v,n) (v).resize(n);FOR(i,0,(n)){cin>>v[i];}
#define cin2d(v,n,m) vvll (v)(n,vll(m,0));FOR(i,0,n){FOR(j,0,m){cin>>v[i][j];}}
#define cin2dg(v,n,m) (v).resize(n,vll(m));FOR(i,0,n){FOR(j,0,m){cin>>v[i][j];}}
#define newl cout<<"\n"
#define mod 1000000007
#define INF 1e18
int main()
{
io;
ll x,y;
cin>>x>>y;
if(y<=4*x&&(4*x-y)%2==0){cout<<"Yes";}
else{cout<<"No";}
return 0;
}
