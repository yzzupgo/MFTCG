#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef long double ld;
#define ffit(i,dat) for (__typeof(dat.begin()) i = dat.begin(); i != dat.end(); ++i)
#define ff1(i,a,b) for(ll i = a; i < b; i++)
#define ff2(i,a,b) for(ll i = b-1; i >= a; i--)
#define ff3(i,a,b,m) for(ll i = a; i <b; i+=m)
#define ipar(ar,n) ll ar[n]; ff1(i,0,n) cin>>ar[i];
#define opar(ar,n) ff1(i,0,n) cout<<ar[i]<<" ";
#define foRev(num) for(ll i = num - 1; i >= 0; i--)
#define forIn(arr,num) for(ll i = 0; i < num; i++) sc1(arr[i]);
#define forIn1(arr,num) for(ll i = 1; i <= num; i++) sc1(arr[i]);
#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr,num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');
#define PI acos(-1.0)
#define eps 1e-7
#define size1 15
#define cu continue
#define br break
#define rsz resize
#define ins insert
#define ft front
#define bk back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mem(name,value) memset(name, value, sizeof(name))
#define MN3(n1,n2,n3) min(n1,min(n2,n3))
#define MN4(n1,n2,n3,n4) min(n1,min(n2,min(n3,n4)))
#define MX3(n1,n2,n3) max(n1,max(n2,n3))
#define MX4(n1,n2,n3,n4) max(n1,max(n2,max(n3,n4)))
#define mxar(a,n) *max_element(a,a+n)
#define mnar(a,n) *min_element(a,a+n)
#define arr_sm(a,n) accumulate(a,a+n,0)
#define vc_sm(ve) accumulate(ve.begin(),ve.end(),0)
#define mx_vc(ve) *max_element(ve.begin(),ve.end())
#define mn_vc(ve) *min_element(ve.begin(),ve.end())
typedef vector <ll> vll;
#define vvll vector<vll>
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll, ll> > vpll;
typedef priority_queue <pair <ll, ll> > pqpll;
#define ml unordered_map<ll,ll>
typedef unordered_set<ll> us;
#define oncnt __builtin_popcount
#define zerobegin __builtin_clz
#define zeroend __builtin_ctz
#define parity __builtin_parity
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtgrt(v) sort(all(v), greater<ll>())
#define prsrt greater<pair<int,int>>()
#define ip(n) ll n; cin>>n;
#define ip2(n,k) ll n; cin>>n; ll k; cin>>k;
#define kl '\n'
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define case cout << "Case " << t++ << ": ";
#define ps(x,y) fixed<<setprecision(y)<<x
#define inf 1e18
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define w(x) ll x; cin>>x; while(x--)
bool isPtSquare(long double x)
{
long double sr = sqrt(x);
return ((sr - floor(sr)) == 0);
}
ll facts(ll n,ll mod)
{
ll prod=1;
for(ll i=1;i<=n;i++)
{
prod=(prod*i)%mod;
}
return prod;
}
ll mod = 1e9+7;
lli powers(lli b, lli p, lli m = mod){
lli res = 1;
while(p > 0){
if(p & 1){
res = (res * b) % m;
}
b = (b * b) % m;
p = p>>1;
}
return res;
}
lli modInverse(lli n, lli m = mod){
return powers(n, m - 2, m);
}
vector<ll> factors(ll n){
ll lim = sqrt(n);
vector<ll> f;
for(int i = 1; i <= lim; i++){
if(n % i == 0){
f.push_back(i);
f.push_back(n / i);
if(i*i == n){
f.pop_back();
}
}
}
return f;
}
ll ceilAB(ll a, ll b){
return (a + b - 1) / b;
}
ll bigmod(ll n,ll pow)
{
if(pow==0)
return 1;
if(pow==1)
return n%mod;
ll ans=bigmod(n,pow/2);
ans=(ans*ans)%mod;
if(pow%2==1)
{
ans=(ans*n)%mod;
}
return ans%mod;
}
ll binpow(ll a, ll b, ll mod = 2e18){
ll ans = 1;
while(b){
if(b&1) ans*=a;
a*=a;
ans%=mod;
a%=mod;
b/=2;
}
return ans;
}
const int mxn = 1e3;
ll fact[mxn + 1];
void calcfac(ll n, ll mod = 2e18){
fact[0] = 1;
for(int i = 1; i<=n;++i){
fact[i] = fact[i-1]*i;
fact[i] %= mod;
}
}
ll nCr(ll p, ll q, ll mod = 2e18){
ll val = fact[p];
ll invfact = fact[q]*fact[p-q];
val%=mod;
invfact%=mod;
val*=binpow(invfact, mod - 2, mod);
return val%mod;
}
ll nPr(ll p, ll q, ll mod = 2e18){
ll val = nCr(p, q, mod);
val*=fact[q];
val%=mod;
return val;
}
bool isprime(int n)
{
if (n <= 1)
return false;
if (n <= 3)
return true;
if (n % 2 == 0 || n % 3 == 0)
return false;
for (int i = 5; i * i <= n; i += 6)
{
if ((n % i == 0) || (n % (i + 2) == 0))
return false;
}
return true;
}
ll power(ll x, ll y)
{
ll temp;
if(y == 0)
return 1;
temp = power(x, y / 2);
if (y % 2 == 0)
return temp * temp;
else
{
if(y > 0)
return (x * temp * temp);
else
return ((temp * temp) / x);
}
}
#define go(i,a) for (auto i : a)
#define go1(it,v) for(auto it = v.begin(); it != v.end(); ++it)
#define mk(arr,n,type) type *arr=new type[n];
#define sz(obj) (int(obj.size()))
#define ipve(vc,n) vll vc(n); ff1(i,0,n){cin>>vc[i];}
#define ipvc(vc,n) vll vc; ff1(i,0,n){ip(x);vc.pb(x);}
bool sortbysec(const pair<pair<ll,ll>,ll> &a,const pair<pair<ll,ll>,ll> &b)
{
return (a.second < b.second);
}
bool cmp(pll a,pll b)
{
return a.ff - a.ss < b.ff - b.ss;
}
const double pi = 3.141592653589793238460;
ll cbtr(ll n,ll m)
{
ll sm = 1;
ff1(i,1,m+1)
{
sm*=(n-i+1);
sm/=i;
}
return sm;
}
ld f(ld n)
{
ld sm = 1;
ff1(i,1,n+1)
{
sm*=i;
}
return sm;
}
ld pc(ld n, ld k)
{
ld sm = f(n)/f(n-k);
return sm;
}
vll prime;
void seive(ll n)
{
prime.resize(n+1,1);
iota(prime.begin(), prime.end(), 0);
prime[0] = 0, prime[1] = 0;
for (int i = 2; i*i <= n; i++)
if (prime[i] == i)
for (int j = i * i; j <= n; j += i)
prime[j] = i;
}
map< ll, int > prime_factor(ll n) {
map< ll, int > ret;
for(ll i = 2; i * i <= n; i++) {
while(n % i == 0) {
ret[i]++;
n /= i;
}
}
if(n != 1) ret[n] = 1;
return ret;
}
bool p2(ll n)
{
if(n==0)
return false;
return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ip2(x,y);
ll mn = 2*x;
ll mx = 4*x;
if(y%2 == 0 && y>=mn &&y<=mx) yes;
else no;
return 0;
}
