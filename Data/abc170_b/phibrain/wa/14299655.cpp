#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#define pb emplace_back
#define ff first
#define ss second
#define tm1 first
#define tm2 second.first
#define tm3 second.second
#define sz(x) ll(x.size())
#define all(v) (v).begin(), (v).end()
#define FER(i,a,b) for(ll i=ll(a); i< ll(b); ++i)
#define IFR(i,a,b) for(ll i=ll(a); i>=ll(b); --i )
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
#define N 31000000
#define mod1 1000000007
#define mod2 1000000009
#define bas 987625403
#define sqr(x) (x)*(x)
#define INF 2000000000
using namespace std;
using namespace __gnu_pbds;
typedef int ll;
typedef pair<ll, ll> ii;
typedef pair<ll, ii > tri;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> S_t;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
#define trace(...) fff(#__VA_ARGS__, __VA_ARGS__)
template<typename t> void fff(const char* x, t&& val1) { cout<<x<< " : "<<val1<<"\n";}
template<typename t1, typename... t2> void fff(const char* x, t1&& val1, t2&&... val2){
const char* xd=strchr(x+1, ',');
cout.write(x, xd-x)<<" : "<<val1<<" | ";
fff(xd+1, val2...);
}
inline ll mul(ll a, ll b, ll mod) { return (long long) a*b%mod;}
inline ll add(ll a, ll b, ll mod) { return a+b < mod? a+b: a+b-mod;}
inline void Mul(ll &a, ll b, ll mod) { a = (long long) a*b%mod;}
inline ll bp(ll a, ll p, ll mod){
ll ret;
for(ret = 1; p; p>>=1, Mul(a, a, mod)) (p & 1) && (Mul(ret, a, mod), 1);
return ret;
}
static inline void read(ll &x) { cin>>x;}
int main(){
fastio;
ll x, y; cin>>x>>y;
ll c = y-2*x;
if(c&1){
cout<<"No\n";
}
else{
c>>=1;
if(c > x) cout<<"No\n";
else cout<<"Yes\n";
}
return 0;
}
