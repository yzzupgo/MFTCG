#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
using namespace __gnu_pbds;
typedef long long v99;
typedef unsigned long long ull;
typedef long double dll;
typedef complex<double> point;
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses "\n"
#define whp " "
#define mxi 200003
#define mp make_pair
#define pii pair<v99, v99>
#define pf printf
#define sf scanf
#define ff first
#define yes cout<<"YES"<<ses;
#define no cout<<"NO"<<ses;
#define sob(z) (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(v99 i=a; i<b; i++)
#define rep1(i,a,b) for(v99 i=a; i<=b; i++)
#define rep0in(i,a,b) for(v99 i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(v99 i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
#define vc vector<char>
#define vll vector<v99>
#define vs vector<string>
#define dqll deque<v99>
#define dqc deque<char>
#define lll list<v99>
#define lic list<char>
#define stll stack<v99>
#define stc stack<char>
#define mpll map<long long ,long long>
#define mps map<string,string>
#define sll set<v99>
#define sc set<char>
#define msll multiset<v99>
v99 fx[4] = {1, -1, 0, 0};
v99 fy[4] = {0, 0, 1, -1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1, -1, 1, -1, 0, 0, -1, 1};
bool sort2val(const pii &a, const pii &b) {
if(a.second == b.second) {
return a.first < b.first;
}
return a.second < b.second;
}
template< class T > T gcd(T a, T b) {
return (b != 0 ? gcd<T>(b, a % b) : a);
}
template< class T > T lcm(T a, T b) {
return (a / gcd<T>(a, b) * b);
}
typedef tree< v99, null_type, less<v99>, rb_tree_tag, tree_order_statistics_node_update> ott;
typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
bool isPowerOfTwo(v99 x) {
return x && (!(x & (x - 1)));
}
v99 pw(v99 a, v99 b) {
v99 ans = 1;
for(v99 i = 1; i <= b; ++i) {
ans = (ans * a);
}
return ans;
}
template <typename T> inline
void print(vector <T> v) {
for(T i : v) {
cout << i << whp;
}
cout << ses;
}
template <typename T> inline
void print(T &&t) {
cout << t << ses;
}
template <typename T> inline
void print(T *a, T n) {
for(T i = 0; i < n; i++) {
print(a[i]);
}
cout << ses;
}
template <typename T, typename Q> inline
void print(map < T, Q> v) {
for(auto i : v) {
cout << i.first << whp << i.second << ses;
}
cout << ses;
}
template <typename T>
void print(vector <vector <T>> &v) {
for(vector <T> &vv : v) {
for(T &i : vv) {
cout << i << whp;
}
cout << ses;
}
}
template <typename T>
inline void read(T &&t) {
cin >> t;
}
template <typename T> inline
void read(vector <T> &v) {
for(T &i : v) {
cin >> i;
}
}
template <typename T> inline
void read(T *arr, T n) {
for(T i = 0; i < n; i++) {
read(arr[i]);
}
}
template <typename T> inline
void read(T *arr, T s, T n) {
for(T i = s; i <= n; i++) {
read(arr[i]);
}
}
template <typename T, typename... Args> inline
void read(T &&t, Args &&... args) {
cin >> t;
read(forward<Args>(args)...);
}
template <typename T, typename... Args>
inline void print(T &&t, Args &&... args) {
cout << t << " ";
print(forward<Args>(args)...);
}
template <class T> inline T bigmod(T n, T p, T m) {
if(p == 0) {
return 1;
} else if(p % 2 == 0) {
v99 val = bigmod(n, p / 2, m);
return (T)((val * val) % m);
} else {
return (T)(((v99)n * (v99)bigmod(n, p - 1, m)) % m);
}
}
v99 modpow(v99 a, v99 n, v99 mod) {
v99 r = 1;
while(n > 0) {
if(n & 1) {
r = r * a % mod;
}
a = a * a % mod;
n >>= 1;
}
return r;
}
const v99 N = mxi;
void solve() {
v99 n;
read(n);
n = (n * 108) / 100;
if(n < 206) {
print("Yay!");
} else if(n == 206) {
print("so-so");
} else {
print(":(");
}
}
signed main() {
solve();
return 0;
}
