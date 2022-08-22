#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef map<int, int> dictii;
typedef map<string, int> dictsi;
typedef map<string, string> dictss;
typedef pair<string, string> pss;
typedef set<int> si;
typedef set<string> ss;
typedef set<char> sc;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define sut(a,b) (b*(b+1)/2 - a*(a+1)/2)
#define len(a) a.length()
#define FORD(a) for(const auto &[key, value] : a)
#define nodup(v) v.erase(unique(v.begin(), v.end()), v.end())
#define string(d) to_string(d)
#define PI acos(-1)
const int INF = 1e9 + 1;
const int N = 2e5 + 100;
const double eps = 1e-7;
const int mod = 1e+7;
template <class T> using V = vector<T>;
template <class T> using VV = V<V<T>>;
template <typename XPAX>
void ckma(XPAX &x, XPAX y) {
x = (x < y ? y : x);
}
template <typename XPAX>
void ckmi(XPAX &x, XPAX y) {
x = (x > y ? y : x);
}
void __print(int x) {
cerr << x;
}
void __print(long x) {
cerr << x;
}
void __print(long long x) {
cerr << x;
}
void __print(unsigned x) {
cerr << x;
}
void __print(unsigned long x) {
cerr << x;
}
void __print(unsigned long long x) {
cerr << x;
}
void __print(float x) {
cerr << x;
}
void __print(double x) {
cerr << x;
}
void __print(long double x) {
cerr << x;
}
void __print(char x) {
cerr << '\'' << x << '\'';
}
void __print(const char *x) {
cerr << '\"' << x << '\"';
}
void __print(const string &x) {
cerr << '\"' << x << '\"';
}
void __print(bool x) {
cerr << (x ? "true" : "false");
}
template<typename T, typename V>
void __print(const pair<T, V> &x) {
cerr << '{';
__print(x.first);
cerr << ',';
__print(x.second);
cerr << '}';
}
template<typename T>
void __print(const T &x) {
int f = 0;
cerr << '{';
for(auto &i : x) {
cerr << (f++ ? "," : ""), __print(i);
}
cerr << "}";
}
void _print() {
cerr << "]\n";
}
template <typename T, typename... V>
void _print(T t, V... v) {
__print(t);
if(sizeof...(v)) {
cerr << ", ";
}
_print(v...);
}
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
auto random_address = [] {
char *p = new char;
delete p;
return (uint64_t) p;
};
bool isPrime(ll n) {
if(n == 0 || n == 1) {
return false;
} else {
for(ll i = 2; i * i <= n; ++i) {
if(n % i == 0) {
return false;
break;
}
}
}
return true;
}
int check1(int n) {
int ans = 0;
while(n % 2 == 0) {
ans++;
n /= 2;
}
for(int i = 3; i * i <= n; i = i + 2) {
while(n % i == 0) {
ans++;
n /= i;
}
}
if(n > 2) {
ans++;
}
return ans;
}
int ch[27];
void solve() {
}
ll fact(ll n) {
if(n == 1) {
return 1;
}
return n * fact(n - 1);
}
void test_case() {
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin >> n;
if(n * 108 / 100 < 206) {
cout << "Yay!";
} else if(n * 108 / 100 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
