#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcdEx(ll a, ll b, ll *x, ll *y) {
if (!a) {*x = 0; *y = 1; return b;}
ll x1, y1, gcd = gcdEx(b % a, a, &x1, &y1); *x = y1 - (b / a) * x1; *y = x1; return gcd;
}
ll modI(ll b, ll m) {ll x, y; gcdEx(b, m, &x, &y); return (x % m + m) % m;}
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<pii> vii;
typedef set<ll> si;
typedef map<string, ll> msi;
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())
#define loop(i,b,n) for(ll i=b;i<n;i++)
#define loopv(i,b,n,a) for(ll i=b;i<n;i+=a)
#define loopr(i,b,n) for(ll i=n;i>=0;i--)
#define sum(a) ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
#define mini(a) ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a) ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a,x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a,x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define start_routine() ll begtime = clock();
#define end_routine() ll endtime = clock(); \
cerr << "\n\n" << "Time elapsed: " << \
(endtime - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n"; \
return 0
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define MOD 1000000007
#define modA(a,b) (((a%MOD)+(b%MOD))%MOD)
#define modS(a,b) (((((a%MOD)-(b%MOD))%MOD)<0)?(ll)(MOD+((a%MOD)-(b%MOD))%MOD):(ll)(((a%MOD)-(b%MOD))%MOD))
#define modM(a,b) (ll)((((ll)(a%MOD))*((ll)(b%MOD)))%MOD)
#define modD(a,b) ((modI(b,MOD)*(a%MOD))%MOD)
ll modP(ll x, ll y) {
ll r = 1; x %= MOD; while (y > 0) {
if (y & 1) {r = (r * x) % MOD;}
y = y >> 1; x = (x * x) % MOD;
} return r;
}
ll max(ll a, ll b) {return (a > b ? a : b);}
ll min(ll a, ll b) {return (a < b ? a : b);}
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
const char* comma = strchr(names + 1, ',');
cerr.write(names, comma - names) << " = " << arg1 << " | "; __f(comma + 1, args...);
}
ll gcd( ll a, ll b )
{
if (b == 0)
{
return a;
}
else
{
return gcd( b, (a % b) );
}
}
ll lcm (ll a, ll b)
{
ll ans = (a / gcd(a, b)) * b;
return ans;
}
#define test int t;cin >>t;while(t--)
void solve()
{
ll n;
ll ans = 0;
ll x, y;
cin >> x >> y;
if (y <= 4 * x && y >= 2 * x)
cout << "Yes";
else
cout << "No" << "\n";
}
int main()
{
solve();
return 0;
}
