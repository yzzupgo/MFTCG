#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rng(i,a,b) for (int i = int(a); i < int(b); ++i)
#define rep(i,b) rng(i, 0, b)
#define gnr(i,a,b) for (int i = int(b) - 1; i >= int(a); --i)
#define per(i,b) gnr(i, 0, b)
#define all(obj) begin(obj), end(obj)
#define allr(obj) rbegin(obj), rend(obj)
#define sz(x) (int)(x).size()
#define cinv(a) rep(i, sz(a)) cin >> a[i]
#define debug(a) rep(i, sz(a)) cout << a[i] << " \n"[i == sz(a) - 1]
#define show(x) cerr << #x << " = " << x << endl;
#define pb push_back
#define pf push_front
#define eb emplace_back
typedef long long ll;
typedef pair<int, int> Pi;
typedef vector<Pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
template <typename T> bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return true;
}
return false;
}
template <typename T> bool chmin(T &a, const T &b) {
if(a > b) {
a = b;
return true;
}
return false;
}
template <typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, 1, 0, -1};
const int MOD = 1e9 + 7;
const int INF = 1e9 + 9;
const ll LINF = 1e18;
const long double eps = 1e-10;
const char nl = '\n';
ll power(ll a, ll b, int mod) {
return b ? power(a * a % mod, b / 2, mod) * (b % 2 ? a : 1) % mod : 1;
}
ll nCk(int n, int k, int mod) {
ll x = 1, y = 1;
for(int i = 1; i <= k; ++i) {
x = x * (n - i + 1) % mod;
y = y * i % mod;
}
return x * power(y, mod - 2, mod) % mod;
}
struct UF {
vi d;
UF(int n) : d(n, -1) {}
int root(int x) {
if(d[x] < 0) {
return x;
}
return d[x] = root(d[x]);
}
bool unite(int x, int y) {
x = root(x);
y = root(y);
if(x == y) {
return false;
}
if(d[x] > d[y]) {
swap(x, y);
}
d[x] += d[y];
d[y] = x;
return true;
}
bool same(int x, int y) {
return root(x) == root(y);
}
int size(int x) {
return -d[root(x)];
}
};
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
cout << fixed << setprecision(20);
int n;
cin >> n;
n *= 108;
n /= 100;
if(n == 206) {
cout << "so-so";
} else if(n < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
cout << nl;
}
