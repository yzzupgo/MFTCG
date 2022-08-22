#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<ll>> vvl;
typedef pair<ll, ll> ppl;
#define ain(a,n) for (ll i = 0; i < (n); ++i) cin >> (a)[i];
#define loop(i,n) for (ll i = 0; i < (n); ++i)
#define FOR(i,a,b) for (ll i = (a); i <= (b); ++i)
#define FORD(i,a,b) for (ll i = (a); i >= (b); --i)
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define endl "\n"
#define pb push_back
#define mp make_pair
#define PI 3.14159265359
#define MOD 1000003
#define go(c,itr) for (auto itr = (c).begin(); itr != (c).end(); ++itr)
void fast_IO() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
#ifdef LOCAL
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
_print(p.ff);
cerr << ",";
_print(p.ss);
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
ll mminvprime(ll a, ll b) {
return expo(a, b - 2, b);
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
bool prime_check(int n) {
if(n == 1 || n == 0) {
return false;
}
if(n == 2) {
return true;
}
if(n % 2 == 0) {
return false;
}
for(int i = 3; i * i <= n; i += 2) {
if(n % i == 0) {
return false;
}
}
return true;
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
string make(int m, int s) {
string str;
for(int i = 0; i < m; ++i) {
if(s >= 9) {
str.push_back('9');
s -= 9;
} else {
str.push_back('0' + s);
s = 0;
}
}
if(s > 0) {
str.clear();
str.push_back('-');
str.pb('1');
}
return str;
}
void solve(int T) {
int n;
cin >> n;
int x = 1.08 * n;
if(x < 206) {
cout << "Yay\n";
} else if(x == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
int main() {
#ifdef LOCAL
freopen("Error.txt", "w", stderr);
#endif
fast_IO();
int T = 1;
for(int i = 1; i <= T; ++i) {
solve(i);
}
}
