#include <bits/stdc++.h>
using namespace std;
#define pb(a) push_back((a))
#define mp(a,b) make_pair((a), (b))
#define REP(a,b) for (ll i = (a); i < (b); i++)
#define REP2(a,b) for (ll j = (a); j < (b); j++)
#define REPE(a,b,c,d) \
REP(a, b) \
for (ll j = (c); j < (d); j++)
#define REPV(a,b,c) for (ll(a) = b; (a) < (c); (a)++)
#define IREP(a,b) for (ll i = (a); i >= (b); i--)
#define IREP2(a,b) for (ll j = (a); j >= (b); j--)
#define IREPV(a,b,c) for (ll(a) = b; (a) >= (c); (a)--)
#define all(v) (v).begin(), (v).end()
#define Trvs(c) for (auto &it : c)
#define INF INT_MAX
#define sz(x) x.size()
#define flash \
ios_base::sync_with_stdio(false); \
cin.tie(0); \
cout.tie(0);
#define F first
#define S second
#define MOD 1000000007
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
#define _DEBUG 1
#if _DEBUG
#define debug(x) cout << #x << "=" << x << endl
#define debug2(x,y) cout << #x << "=" << x << " " << #y << "=" << y << endl;
#define debug3(x,y,z) cout << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << endl;
#define debug4(x,y,z,w) cout << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << " " << #w << "=" << w << endl;
#define debug5(x,y,z,w,t) \
cout << #x << "=" << x << " "; \
debug4(y, z, w, t);
#define debug6(p,x,y,z,w,t) \
cout << #p << " " << p << " " << #x << "=" << x << " "; \
debug4(y, z, w, t);
#define debug7(o,p,x,y,z,w,t) \
cout << #o << " " << o << " "; \
debug6(p, x, y, z, w, t);
#define wait \
int xxxx; \
cin >> xxxx;
#define derr(x) cerr << #x << "=" << x << endl;
#define derr2(x,y) cerr << #x << "=" << x << " " << #y << "=" << y << endl;
#define derr3(x,y,z) cerr << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << endl;
#define derr4(x,y,z,w) cerr << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << " " << #w << "=" << w << endl;
#define derr5(x,y,z,w,t) \
cerr << #x << "=" << x << " "; \
derr4(y, z, w, t);
#define derr6(p,x,y,z,w,t) \
cerr << #p << " " << p << " " << #x << "=" << x << " "; \
derr4(y, z, w, t);
#define derr7(o,p,x,y,z,w,t) \
cerr << #o << " " << o << " "; \
derr6(p, x, y, z, w, t);
ll checkpoint_counter = 0;
#define checkpoint cerr << "At checkpoint : " << checkpoint_counter++ << endl;
#else
#define debug(x) ;
#define debug2(x,y) ;
#define debug3(x,y,z) ;
#define debug4(x,y,z,q) ;
#define debug5(x,y,z,r,t) ;
#define debug6(x,y,z,r,t,s) ;
#define debug7(x,y,z,r,t,s,u) ;
#define wait ;
#define derr(x) ;
#define derr2(x,y) ;
#define derr3(x,y,z) ;
#define derr4(x,y,z,q) ;
#define derr5(x,y,z,r,t) ;
#define derr6(x,y,z,r,t,s) ;
#define derr7(x,y,z,r,t,f,u) ;
#define checkpoint ;
#endif
#define print_matrix(a,n,m) \
REPE(0, n, 0, m) { cout << (a)[i][j] << ((j == m - 1) ? '\n' : ' '); }
#define present(container,element) (container.find(element) != container.end())
#define endl "\n"
auto cmp = [](pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b) {
if (a.F == b.F)
return a.S.F > b.S.F;
return a.F > b.F;
};
void solve()
{
ll x,y;
cin>>x>>y;
ll temp = 4*x-y;
if(temp%2==0 and temp > 1){
cout<<"Yes"<<endl;
return;
}
cout<<"No"<<endl;
return;
}
int main()
{
flash
solve();
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
return 0;
}
