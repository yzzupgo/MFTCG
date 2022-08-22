#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
#define ll long long
#define ull unsigned long long
#define lld long double
#define fo(i,s,n) for(int i=s;i<n;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define MOD 1000000007
#define MOD1 998244353
#define nline "\n"
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vpii;
#define all(x) (x).begin(), (x).end()
#define prDeci(x) cout<<fixed<<setprecision(10)<<x
#define triplet pair<ll,pair<ll,ll>>
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define INF 1e18
#define sz(x) ((int)(x).size())
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x) ;
#endif
void _print(ll t) {
cerr << t;
}
void _print(int t) {
cerr << t;
}
void _print(string t) {
cerr << t;
}
void _print(char t) {
cerr << t;
}
void _print(lld t) {
cerr << t;
}
void _print(double t) {
cerr << t;
}
void _print(ull t) {
cerr << t;
}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {
cerr << "{";
_print(p.F);
cerr << ",";
_print(p.S);
cerr << "}";
}
template <class T> void _print(vector <T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
template <class T> void _print(set <T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
template <class T> void _print(multiset <T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
template <class T, class V> void _print(map <T, V> v) {
cerr << "[ ";
for(auto i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
void _print(pbds v) {
cerr << "[ ";
for(auto i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
ll gcd(ll a, ll b) {
if(b > a) {
return gcd(b, a);
}
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod) {
ll res = 1;
while(b > 0) {
if(b & 1) {
res = (res * a) % mod;
}
a = (a * a) % mod;
b = b >> 1;
}
return res;
}
void extendgcd(ll a, ll b, ll *v) {
if(b == 0) {
v[0] = 1;
v[1] = 0;
v[2] = a;
return ;
}
extendgcd(b, a % b, v);
ll x = v[1];
v[1] = v[0] - v[1] * (a / b);
v[0] = x;
return;
}
ll mminv(ll a, ll b) {
ll arr[3];
extendgcd(a, b, arr);
return arr[0];
}
ll mminvprime(ll a, ll b) {
return expo(a, b - 2, b);
}
bool revsort(ll a, ll b) {
return a > b;
}
void swap(int &x, int &y) {
int temp = x;
x = y;
y = temp;
}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {
ll val1 = fact[n];
ll val2 = ifact[n - r];
ll val3 = ifact[r];
return (((val1 * val2) % m) * val3) % m;
}
void google(int t) {
cout << "Case #" << t << ": ";
}
vector<ll> sieve(int n) {
int *arr = new int[n + 1]();
vector<ll> vect;
for(int i = 2; i <= n; i++)if(arr[i] == 0) {
vect.push_back(i);
for(int j = 2 * i; j <= n; j += i) {
arr[j] = 1;
}
}
return vect;
}
ll mod_add(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}
ll phin(ll n) {
ll number = n;
if(n % 2 == 0) {
number /= 2;
while(n % 2 == 0) {
n /= 2;
}
}
for(ll i = 3; i <= sqrt(n); i += 2) {
if(n % i == 0) {
while(n % i == 0) {
n /= i;
}
number = (number / i * (i - 1));
}
}
if(n > 1) {
number = (number / n * (n - 1)) ;
}
return number;
}
ll str_to_int(string s) {
stringstream geek(s);
ll x = 0;
geek >> x;
return x;
}
string int_to_str(ll n) {
return to_string(n);
}
ll HCF_of_vi(vi &A) {
ll i, a, n = A.size();
a = A[0];
fo(i, 1, n)a = __gcd(a, A[i]);
return a;
}
ll LCM_of_vi(vi &A) {
ll i, a, b, n = A.size();
a = A[0];
b = A[0];
fo(i, 1, n) {
b = __gcd(a, A[i]);
a = (a * A[i]) / b;
}
return a;
}
void factorize(ll n) {
ll i, count = 0;
while(!(n % 2)) {
n >>= 1;
count++;
}
if(count) {
cout << "2 : " << count << "\n";
}
for(i = 3; i <= sqrt(n); i += 2) {
count = 0;
while(n % i == 0) {
count++;
n = n / i;
}
if(count) {
cout << i << " : " << count << "\n";
}
}
if(n > 2) {
cout << n << " : 1" << "\n";
}
}
void testcase() {
int n;
cin >> n;
int ans = n * 108;
ans /= 100;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
void solve() {
ll t = 1;
while(t--) {
testcase();
}
}
signed main() {
FASTIO
#ifndef ONLINE_JUDGE
freopen("D:\input.txt", "r", stdin);
freopen("D:\output.txt", "w", stdout);
freopen("D:\\error.txt", "w", stderr);
#endif
solve();
#ifndef ONLINE_JUDGE
cerr << "\nTime: " << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
#endif
return 0;
}
