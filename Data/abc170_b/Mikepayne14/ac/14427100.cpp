#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef double db;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vector<int>> vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
typedef vector<vector<pair<int,int>>> vvpii;
typedef set<int> seti;
typedef unordered_set<int> us;
typedef unordered_set<int,greater<int>> usrev;
typedef priority_queue <int, vector<int>, greater<int>> revpq;
const int INF = (int)1e9;
const int EPS = 1e-8;
const int MOD = 1000000000;
const ld PI = 3.14159265359;
const int dx4[4] = {0, 1, 0, -1};
const int dy4[4] = {-1, 0, 1, 0};
const int dx8[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
#define acc accumulate
#define eb emplace_back
#define mii map <int,int>
#define F first
#define S second
#define MP make_pair
#define mid(s,e) (s+(e-s)/2)
#define fil(v,x) fill(all(v),x)
#define filcon(v,x) iota(all(v),x)
#define repi(n) for(int i=0;i<n;++i)
#define repj(n) for(int j=0;j<n;++j)
#define repr(n) for(int i=n-1;i>=0;--i)
#define sqr(x) ((x)*(x))
#define MEM(a,b) memset(a, b, sizeof(a))
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it,l) for (auto it = l.begin(); it != l.end(); it++)
#define inrange(i,a,b) ((i>=min(a,b)) && (i<=max(a,b)))
#define FLSH fflush(stdout)
#define PRECISION(x) cout << fixed << setprecision(x)
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define make_unique(v) sort(all(v)); v.erase(unique(all(v)), v.end());
#define readfull(s) getline(cin,s)
#define printv(v) for(auto i:v) cout << i << " "
#define trace(x) cout<<#x<<" = { "<<x<<" }\n";
#define khatam '\n'
#define test int t; cin >> t; repi(t) {solve(); cout << khatam;}
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
for ( \
auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
blockTime.second; \
debug("%s: %ld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
)
inline bool grid_inside(int x, int y, int n, int m) {return x >= 1 && x <= n && y >= 1 && y <= m;}
template<typename T>
T lcm(T a,T b)
{
return (a*b)/__gcd(a,b);
}
template<typename ForwardIterator,typename T>
T first_val(ForwardIterator first,ForwardIterator last,T value)
{
auto it = std::lower_bound(first,last,value);
return (it!=last)?(it - first) : -1;
}
template<typename ForwardIterator,typename T>
T last_val(ForwardIterator first,ForwardIterator last,T value)
{
auto it = std::upper_bound(first,last,value);
return ((it!=last)?((it - first)-1) : -1);
}
template <typename T> T Dis(T x1,T y1,T x2, T y2)
{return sqrt(sqr(x1-x2) + sqr(y1-y2));}
template <typename T> T Angle(T x1,T y1,T x2, T y2)
{return atan((db)(y1-y2) / (db)(x1-x2));}
int Set(int N,int pos){ return N=N | (1<<pos);}
int Reset(int N,int pos){return N= N & ~(1<<pos);}
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
template< class T, class X > inline T togglebit(T a, X i) { T t=1;return (a^(t<<i));}
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
return i.F < j.F;
}
int doubleCompare(double x, double y) {
if (fabs(x-y) <= EPS)
return 0;
if(x < y)
return -1;
return 1;
}
int LSOne(ll n){
return log2(n & -n) + 1;
}
int rangeClear(int n,int i,int j){
int ones = ~0;
int a = ones << (j+1);
int b = (i<<2)-1;
int mask = a|b;
int ans = n&mask;
return ans;
}
int countSetBits(int n)
{
int count=0;
while(n>0)
{
count += (n&1);
n = n>>1;
}
return count;
}
ll fast_power(int a,int x)
{
if(x==0)
return 1;
else if(x==1)
return a;
else
{
if(!(x&1))
return a*a;
else{
ll R = fast_power(a,x>>1);
return R*a*R;
}
}
}
ll fast_power_unlocked(ll a,ll n,ll mod)
{
ll res = 1;
while(n > 0)
{
if(n&1)
{
res = (res*a)%mod;
}
a = (a*a)%mod;
n = n >> 1;
}
return res;
}
ll modInverse(ll A,ll M)
{
return fast_power_unlocked(A,M-2,M);
}
const int MAX_N = 1e6;
void solve()
{
int x,y;
cin >> x >> y;
if(y<=x || (y&1)) {cout << "No"; return;}
int res1 = y/2;
int res2 = y/4;
res2 += (y%4)/2;
if(inrange(x,res1,res2)) cout << "Yes";
else cout << "No";
}
int main()
{
FAST_IO;
time__("Time Taken"){
solve();
}
}
