#include<bits/stdc++.h>
#define FF ios_base::sync_with_stdio(0);cin.tie(0)
#define binary(value,size) cout << bitset<size>(value) << '\n'
#define Tp template<class T>
#define Tpp template<typename T>
#define Tppp template<typename T1,typename T2>
#define eps 1e-9
#define pf printf
#define sf scanf
#define clr(arr) memset((arr),0,(sizeof(arr)))
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define repb(i,a,b) for(long long int i=a;i>=b;i--)
#define all(v) (v).begin(),(v).end()
#define asort(a) sort(a.begin(),a.end())
#define arev(a) reverse(a.begin(),a.end())
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define pbb pop_back
#define mp make_pair
#define mt make_tuple
#define BS(v,x) binary_search(v.begin(),v.end(),x)
#define LB(v,x) lower_bound(v.begin(),v.end(),x)
#define UB(v,x) upper_bound(v.begin(),v.end(),x)
#define sma(c) towlower(c)
#define rt(x) sqrt(x)
#define cap(c) towupper(c)
#define sq(a) ((a)*(a))
#define cube(a) ((a)*(a)*(a))
#define mx 1000
#define MX 100000
#define SZ(x) long long int(x.size())
#define N 10000000
#define Ceil(n) (long long int)ceil(n)
#define Floor(n) (long long int)floor(n)
#define deb(x) std::cout << #x << " = " << x << std::endl;
#define out(ans) cout<<ans<<endl
#define outs(ans) cout<<ans<<" "<<endl
#define FI freopen ("in.txt", "r", stdin)
#define FO freopen ("out.txt", "w", stdout)
using namespace std;
typedef long long int ll;
typedef double lf;
typedef long double llf;
typedef unsigned long long int ull;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef map<ll, ll> mpl;
typedef priority_queue<int> heap;
typedef priority_queue<int, vector<int>, greater<int> > revheap;
bool isLetter(char c) {
return (c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z');
}
bool isUpperCase(char c) {
return c >= 'A' and c <= 'Z';
}
bool isLowerCase(char c) {
return c >= 'a' and c <= 'z';
}
bool isDigit(char c) {
return c >= '0' and c <= '9';
}
bool isVowel(char c) {
return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}
bool isConsonant(char c) {
return !isVowel(c);
}
Tp void Debug(T v) {
for(int i = 0; i < (int)v.size(); i++) {
cout << v[i] << " ";
}
cout << endl;
}
Tp void Input(T &v) {
for(int i = 0; i < (int)v.size(); i++) {
cin >> v[i];
}
}
Tp string toString(T n) {
ostringstream ost;
ost << n;
ost.flush();
return ost.str();
}
string intTobinary(int x) {
std::string binary = std::bitset<32>(x).to_string();
return binary;
}
string lltobinary(ll x) {
std::string binary = std::bitset<64>(x).to_string();
return binary;
}
ll toNumber(string s) {
stringstream aa(s);
ll mm;
aa >> mm;
return mm;
}
ll binaryToDecimal(string n) {
string num = n;
ll dec_value = 0;
ll base = 1;
ll len = num.length();
for(int i = len - 1; i >= 0; i--) {
if(num[i] == '1') {
dec_value += base;
}
base = base * 2;
}
return dec_value;
}
Tpp T nCr(T n, T r) {
if(r > n - r) {
r = n - r;
}
int ans = 1, i;
for(i = 1; i <= r; i++) {
ans *= n - r + i;
ans /= i;
}
return ans;
}
ll Binpow(ll a, ll p) {
ll ret = 1;
while(p > 0) {
if(p & 1) {
ret = (1LL * ret * a) ;
}
a = (1LL * a * a) ;
p >>= 1LL;
}
return ret;
}
template<typename A, typename P>
int BigMod(A a, P p, int mod) {
int ret = 1;
while(p) {
if(p & 1) {
ret = (1LL * ret * a) % mod;
}
a = (1LL * a * a) % mod;
p >>= 1LL;
}
return ret;
}
Tpp T toBase(T n, T base) {
T ret = 0LL;
while(n) {
ret += n % base;
ret *= 10LL;
n /= base;
}
return ret;
}
Tpp vector<T> Divisor(T value) {
vector<T> v;
for(int i = 1LL; i * i <= value; ++i) {
if(value % i == 0) {
v.push_back(i);
if(i * i != value) {
v.push_back(value / i);
}
}
}
return v;
}
Tpp bool prime(T n) {
if(n % 2 == 0) {
return 0;
}
for(T i = 3; i * i <= n; i += 2) {
if(n % i == 0) {
return 0;
}
}
return 1;
}
Tpp void Sieve(T n) {
bool prime[n + 1];
memset(prime, true, sizeof(prime));
for(T p = 2; p * p <= n; p++) {
if(prime[p] == true) {
for(int i = p * p; i <= n; i += p) {
prime[i] = false;
}
}
}
}
Tpp ll sum(std::vector<T> &v) {
return std::accumulate(all(v), 0);
}
Tpp T minval(std::vector<T> &v) {
return *std::min_element(all(v));
}
Tpp T maxval(std::vector<T> &v) {
return *std::max_element(all(v));
}
Tpp void make_unique(std::vector<T> &v) {
v.resize(unique(all(v)) - v.begin());
}
Tpp void make_unique_sorted(std::vector<T> &v) {
asort(v);
v.resize(unique(all(v)) - v.begin());
}
Tpp int lowerBound(std::vector<T> &v, T x) {
return v.back() < x ? -1 : lower_bound(all(v), x) - v.begin();
}
Tpp int upperBound(std::vector<T> &v, T x) {
return v.back() < x ? -1 : upper_bound(all(v), x) - v.begin();
}
double startTime = clock();
void showCurrentTime() {
printf("%.6lf\n", ((double)clock() - startTime) / CLOCKS_PER_SEC);
}
ll MakeOneBit(ll decimalvalue, int pos) {
return (decimalvalue | (1 << pos));
}
ll MakeZeroBit(ll decimalvalue, int pos) {
return (decimalvalue & ~(1 << pos));
}
ll FlipBit(ll decimalvalue, int pos) {
return (decimalvalue ^ (1 << pos));
}
bool CheckBit(ll decimalvalue, int pos) {
return (decimalvalue & (1 << pos));
}
int MSB(ll k) {
return (63 - __builtin_clzll(k));
}
int LSB(ll k) {
return __builtin_ffs(k) - 1 ;
}
int Totalset(ll decimalvalue) {
return __builtin_popcountll(decimalvalue);
}
int Totolnotset(ll decimalvalue) {
return MSB(decimalvalue) - Totalset(decimalvalue) + 1;
}
bool ispow2(int i) {
return i && (i & -i) == i;
}
ll nC2(ll n) {
return (n * (n - 1)) / 2;
}
ll nc3(ll n) {
return (n * (n - 1) * (n - 2)) / 6;
}
ll arithsum(ll n, ll a = 1, ll d = 1) {
return (n * (a + a + (n - 1) * d)) / 2;
}
ll LCM(ll a, ll b) {
return (a / __gcd(a, b)) * b;
}
ll OnetoNsum(ll n) {
return (n * (n + 1)) / 2;
}
ll longdivision(string s, ll a) {
ll ans = 0;
ll temp = 0;
rep(i, 0, s.length()) {
temp = temp * 10 + (s[i] - '0');
ans += (temp / a);
ans *= 10;
temp = temp % a;
}
return (ans / 10);
}
const long long int INF = 1000000000000000000;
const double EPS = 1e-9;
const double PI = acos(-1.0);
const double PIby2 = asin(1.0);
const int MOD = 1e9 + 7;
Tpp void debugvec(vector<T> v) {
for(ll i = 0; i < v.size(); i++) {
cout << v[i] << " ";
}
cout << endl;
}
Tppp void debugvpll(vector<pair<T1, T2> > v) {
for(ll i = 0; i < v.size(); i++) {
deb(i);
deb(v[i].F);
deb(v[i].S);
cout << endl;
}
}
void debSpec(vll v, ll pos) {
cout << pos << "=" << v[pos] << endl;
}
Tppp void debugmap(map<T1, T2> m) {
ll i = 0;
for(auto x : m) {
deb(i);
deb(x.F);
deb(x.S);
cout << endl;
i++;
}
}
Tpp void debugset(set<T> s) {
for(auto x : s) {
deb(x);
cout << endl;
}
}
Tpp void debugmultiset(multiset<T> s) {
for(auto x : s) {
deb(x);
cout << endl;
}
}
Tpp void debugpqueue(priority_queue<T> pq) {
while(!pq.empty()) {
deb(pq.top());
pq.pop();
}
}
Tpp void debugstack(stack<T> st) {
while(!st.empty()) {
deb(st.top());
st.pop();
}
}
Tpp void debugqueue(queue<T> q) {
while(!q.empty()) {
deb(q.front());
q.pop();
}
}
void debuggraph(vector<ll> adj[], ll node) {
rep(i, 0, node + 1) {
deb(i);
rep(j, 0, adj[i].size()) {
cout << adj[i][j] << " ";
}
cout << endl;
}
cout << endl;
}
Tpp void Inputvec(vector<T> &v, ll n) {
rep(i, 0, n) {
T d;
cin >> d;
v.pb(d);
}
}
Tppp void Inputvpll(vector<pair<T1, T2> > &v, ll n) {
rep(i, 0, n) {
T1 a;
T2 b;
cin >> a >> b;
v.pb(mp(a, b));
}
}
void Inputgraph(vector<ll> adj[], ll edge, ll indexbase, bool directed) {
rep(i, 0, edge) {
ll a, b;
cin >> a >> b;
if(indexbase == 0) {
a--;
b--;
}
adj[a].pb(b);
if(directed == 0) {
adj[b].pb(a);
}
}
}
void Yay() {
cout << "Yay!" << endl;
}
void Nay() {
cout << ":(" << endl;
}
int main() {
FF;
ll n;
cin >> n;
ll q = Floor(n * 1.08);
if(q < 206) {
Yay();
} else if(q == 206) {
cout << "so-so" << endl;
} else {
Nay();
}
return 0;
}
