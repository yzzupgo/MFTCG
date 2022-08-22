#pragma GCC optimize ("Ofast,unroll-loops")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#define pb push_back
#define ff first
#define ss second
#define tm1 first
#define tm2 second.first
#define tm3 second.second
#define sz(x) ll(x.size())
#define fill(x,v) memset(x, v, sizeof(x))
#define all(v) (v).begin(), (v).end()
#define FER(i,a,b) for(ll i=ll(a); i< ll(b); ++i)
#define IFR(i,a,b) for(ll i=ll(a); i>=ll(b); --i )
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
#define mod1 998244353
#define bas 987625403
#define sqr(x) (x)*(x)
#define INF 2e18
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef pair<ll, ii > tri;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> S_t;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
x += 0x9e3779b97f4a7c15;
x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
return x ^ (x >> 31);
}
size_t operator()(uint64_t x) const {
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x + FIXED_RANDOM);
}
};
#define trace(...) fff(#__VA_ARGS__, __VA_ARGS__)
template<typename t> void fff(const char *x, t &&val1) {
cout << x << " : " << val1 << "\n";
}
template<typename t1, typename... t2> void fff(const char *x, t1 &&val1, t2 &&... val2) {
const char *xd = strchr(x + 1, ',');
cout.write(x, xd - x) << " : " << val1 << " | ";
fff(xd + 1, val2...);
}
inline ll add(ll a, ll b, ll mod) {
return a + b < mod ? a + b : a + b - mod;
}
inline ll rem(ll a, ll b, ll mod) {
return a >= b ? a - b : a - b + mod;
}
inline ll mul(ll a, ll b, ll mod) {
return (int) a * b % mod;
}
inline void Mul(ll &a, ll b, ll mod) {
a = (int) a * b % mod;
}
inline ll bp(ll a, ll p, ll mod) {
ll ret;
for(ret = 1; p; p >>= 1, Mul(a, a, mod)) {
(p & 1) &&(Mul(ret, a, mod), 1);
}
return ret;
}
static inline void read(ll &result) {
bool minus = false;
char ch;
ch = getchar();
while(true) {
if(ch == '-') {
break;
}
if(ch >= '0' and ch <= '9') {
break;
}
ch = getchar();
}
(ch == '-') ? minus = true : result = ch - '0';
while(true) {
ch = getchar();
if(ch < '0' or ch > '9') {
break;
}
result = (result << 3) + (result << 1) + (ch - '0');
}
if(minus) {
result = -result;
}
}
int main() {
ll n;
read(n);
double total = n * 1.08;
if((ll) total >= 206) {
cout << "yay!\n";
} else {
cout << ":(\n";
}
return 0;
}
