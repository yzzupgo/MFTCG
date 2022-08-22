#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef double db;
typedef long double ldb;
typedef deque<ll> dl;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef map<ll, ll> mll;
typedef set<ll> sl;
typedef vector<pll> vp;
#define endl '\n'
#define F first
#define S second
#define rr return
#define pb push_back
#define pf pop_front()
#define puf push_front()
#define sz(x) (ll)x.size()
#define br cout << "\n"
#define all(s) s.begin(), s.end()
#define allr(s) s.rbegin(), s.rend()
#define ini(a,n) memset(a, n, sizeof(a))
#define test(t) int t; cin>>t; while(t--)
#define FOR(i,start,end) for(ll i = start; i <= end; i++)
#define FORD(i,start,end) for(ll i = start; i >= end; i--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string abc = "abcdefghijklmnopqrstuvwxyz";
const double pi = acosl(-1);
const int mod = 1e9 + 7;
const int mxN = 2e6 + 5;
const ll inf = LLONG_MAX;
ll a[mxN];
void Y() {
cout << "YES";
}
void N() {
cout << "NO";
}
void print(vl a) {
for(ll x : a) {
cout << x << ' ';
}
}
void write(ll a[], ll n) {
FOR(i, 0, n - 1)
cout << a[i] << ' ';
}
void solve() {
bool f = 0, f1 = 0, f2 = 0;
ll m, n, k, l, r, sum = 0, pos, ans = 0, cur = 0, prev = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
ll x, y, z, cnt = 0, mx = -inf, mn = inf;
string s, t, s1, s2;
string str = "";
cin >> n;
x = (n * 108);
x /= 100;
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
br;
}
int main() {
IOS;
bool tc = 0;
int t = 1;
if(tc) {
cin >> t;
}
while(t--) {
solve();
}
return 0;
}
