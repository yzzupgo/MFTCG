#include <bits/stdc++.h>
#define float double
#define sz 100005
#define all(a) a.begin(), a.end()
#define mod 1000000007
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define here cout << "here" << endl;
#define f(i,l,n) for (int i = l; i < n; ++i)
#define F(i,l,n) for (int i = l; i <= n; ++i)
#define pb push_back
#define ff first
#define ss second
#define pi pair<int, int>
#define pl pair<long long, long long>
#define pii pair<int, pair<int, int>>
#define pll pair<long long, pair<long long, long long>>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << x << " ";
#define pe(x) cout << x << endl;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#ifndef ONLINE_JUDGE
#define debug(x) \
cerr << #x << " "; \
_print(x); \
cerr << endl;
#else
#define debug(x)
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
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p) {
cerr << "{";
_print(p.ff);
cerr << ",";
_print(p.ss);
cerr << "}";
}
template <class T>
void _print(vector<T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
cerr << "\n";
}
template <class T>
void _print(set<T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
cerr << "\n";
}
template <class T>
void _print(multiset<T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
cerr << "\n";
}
template <class T, class V>
void _print(map<T, V> v) {
cerr << "[ ";
for(auto i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
cerr << "\n";
}
ll pwr(ll a, ll b) {
a = a % mod;
if(a == 0) {
return 0;
}
ll res = 1;
while(b > 0) {
if(b & 1) {
res = (res * a) % mod;
}
b = b >> 1;
a = (a * a) % mod;
}
return res;
}
int BIT[100001] = {
0
};
int getsum(int l, int r) {
int R = 0;
for(; r >= 1; r = r & (r - 1)) {
R += BIT[r];
}
int L = 0;
l--;
for(; l >= 1; l = l & (l - 1)) {
L += BIT[l];
}
return R - L;
}
void add(int x, int index, int n) {
for(; index <= n; index += (index & (-index))) {
BIT[index] += x;
}
return;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("error.txt",
"w", stderr);
#endif
#ifndef ONLINE_JUDGE
freopen("input.txt",
"r", stdin);
freopen("output.txt",
"w", stdout);
#endif
int t;
t = 1;
while(t--) {
double n;
cin >> n;
double x = floor(1.08 * n);
debug(x);
if(x < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
#ifndef ONLINE_JUDGE
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
}
