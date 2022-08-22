#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(p) p.begin(), p.end()
#define a_count(p) __builtin_acountll(p)
#define len(s,e) ((e)-(s)+1)
#define mid(s,e) ((s)+((e)-(s))/2)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
const int mod = 1e9 + 7;
const int oo = 1e9 + 100;
const ll OO = 1e18 + 100;
template <typename A, typename B>
istream &operator >>(istream &in, pair<A, B> &a) {
in >> a.first >> a.second;
return in;
}
template <typename T>
istream &operator >>(istream &in, vector<T> &a) {
for(auto &v : a) {
in >> v;
}
return in;
}
template <typename T, size_t N>
istream &operator >>(istream &in, array<T, N> &a) {
for(size_t i = 0; i < N; i++) {
in >> a[i];
}
return in;
}
#ifdef ANEEE_LOCAL
template <typename A, typename B>
ostream &operator <<(ostream &out, const pair<A, B> &a) {
out << "(" << a.first << "," << a.second << ")";
return out;
}
template <typename T>
ostream &operator <<(ostream &out, const vector<T> &a) {
out << "[";
bool first = true;
for(auto &v : a) {
out << (first ? "" : ", ");
out << v;
first = 0;
}
out << "]";
return out;
}
template <typename T, size_t N>
ostream &operator <<(ostream &out, const array<T, N> &a) {
out << "[";
bool first = true;
for(auto &v : a) {
out << (first ? "" : ", ");
out << v;
first = 0;
}
out << "]";
return out;
}
template <typename T, class Cmp>
ostream &operator <<(ostream &out, const set<T, Cmp> &a) {
out << "{";
bool first = true;
for(auto &v : a) {
out << (first ? "" : ", ");
out << v;
first = 0;
}
out << "}";
return out;
}
template <typename U, typename T, class Cmp>
ostream &operator <<(ostream &out, const map<U, T, Cmp> &a) {
out << "{";
bool first = true;
for(auto &p : a) {
out << (first ? "" : ", ");
out << p.first << ":" << p.second;
first = 0;
}
out << "}";
return out;
}
template <typename T>
ostream &operator <<(ostream &out, const list<T> &a) {
out << "[";
bool first = true;
for(auto &v : a) {
out << (first ? "" : ", ");
out << v;
first = 0;
}
out << "]";
return out;
}
#else
template <typename A, typename B>
ostream &operator <<(ostream &out, const pair<A, B> &a) {
out << a.first << " " << a.second;
return out;
}
template <typename T>
ostream &operator <<(ostream &out, const vector<T> &a) {
for(auto &v : a) {
out << v << ' ';
}
return out;
}
template <typename T, size_t N>
ostream &operator <<(ostream &out, const array<T, N> &a) {
for(auto &v : a) {
out << v << ' ';
}
return out;
}
template <typename T, class Cmp>
ostream &operator <<(ostream &out, const set<T, Cmp> &a) {
for(auto &v : a) {
out << v << ' ';
}
return out;
}
template <typename U, typename T, class Cmp>
ostream &operator <<(ostream &out, const map<U, T, Cmp> &a) {
for(auto &p : a) {
out << p << '\n';
}
return out;
}
template <typename T>
ostream &operator <<(ostream &out, const list<T> &a) {
for(auto &v : a) {
out << v << ' ';
}
return out;
}
#endif
#ifdef ANEEE_LOCAL
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...) 7
#endif
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
cerr << "[" << name << ": " << arg1 << "]" << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
const char *comma = strchr(names + 1, ',');
cerr << "[";
cerr.write(names, comma - names) << ": " << arg1 << "]  ";
__f(comma + 2, args...);
}
template <typename Arg1>
void print(Arg1 &&arg1) {
cout << arg1 << '\n';
}
template <typename Arg1, typename... Args>
void print(Arg1 &&arg1, Args &&... args) {
cout << arg1 << ' ';
print(args...);
}
template <typename Arg1>
void read(Arg1 &&arg1) {
cin >> arg1;
}
template <typename Arg1, typename... Args>
void read(Arg1 &&arg1, Args &&... args) {
cin >> arg1;
read(args...);
}
class Timer {
string _name;
clock_t _start;
public:
Timer(string name = "Runtime") {
_name = "[" + name + ": ", _start = clock();
}
~Timer() {
cerr << _name << double(clock() - _start) / CLOCKS_PER_SEC << "]\n";
}
};
template<typename T> T next() {
T x;
read(x);
return x;
}
ll power(ll a, ll b, ll m) {
ll ret = 1;
while(b) {
if(b & 1) {
ret = ret * a % m;
}
b >>= 1;
a = a * a % m;
}
return ret;
}
inline void precomp() {}
void solve() {
ll n;
read(n);
n = 108 * n / 100;
if(n < 206) {
print("yay");
} else if(n == 206) {
print("so-so");
} else {
print(":(");
}
}
signed main() {
Timer ti;
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int T = 1;
#ifdef TEST_CASES
cin >> T;
#endif
precomp();
for(int tt = 1; tt <= T; tt++) {
#ifdef CASE_INFO
cout << "Case #" << tt << ": ";
#endif
solve();
}
return 0;
}
