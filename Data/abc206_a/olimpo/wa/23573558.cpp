#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <functional>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <climits>
#include <queue>
#include <bitset>
#include <cassert>
#include <math.h>
#include <complex>
#include <iomanip>
#include <unordered_map>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
template<typename T1>
void dbg_pr(vector<T1> V, int add = 0, int start = -1, int end = -1) {
cout << "{";
if(start < 0) {
start = 0;
}
if(end < 0) {
end = V.size() - 1;
}
for(int i = start; i <= end; i++) {
cout << V[i] + add << ((i == end) ? "}" : " ");
}
}
void dbg_pr(string V) {
cout << "\"" << V << "\"";
}
template<typename T1>
void dbg_pr(T1 V) {
cout << V;
}
template<typename T1, typename T2>
void dbg_pr(map<T1, T2> M) {
cout << "{";
for(const auto m : M) {
dbg_pr(m.first);
cout << ":";
dbg_pr(m.second);
cout << ",";
}
cout << "}";
}
#ifdef _OLIMPOLOCAL
#define dbg(...) cerr << "\033[1;36m[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define dbg(...) 1337
#endif
void debug_out() {
cout << "\033[0m\n";
}
template<typename T1, typename... T2> void debug_out(T1 A, T2... B) {
cout << " ";
dbg_pr(A);
debug_out(B...);
}
int test = 1;
#define out(x) {cout << x << "\n";return;}
#define all(N) N.begin(),N.end()
#define allr(N) N.rbegin(),N.rend()
void setupFastCin() {
ios::sync_with_stdio(false);
cin.tie(0);
}
template<typename T1>
T1 chmin(T1 &x, const T1 v) {
return x = min(x, v);
}
template<typename T1>
T1 chmax(T1 &x, const T1 v) {
return x = max(x, v);
}
template<typename T1>
void pr(vector<T1> V, int add = 0, int start = -1, int end = -1) {
if(start < 0) {
start = 0;
}
if(end < 0) {
end = V.size() - 1;
}
for(int i = start; i <= end; i++) {
cout << V[i] + add << ((i == end) ? "\n" : " ");
}
}
#define rep(i,n) for (int i = 0; i < n; i++)
#define reps(i,s,n) for (int i = s; i < n; i++)
#define repr(i,n) for (int i = n-1; i >= 0; i--)
#define repsr(i,s,n) for (int i = n-1; i >= s; i--)
#define PI pair<int,int>
#define PLL pair<ll, ll>
template<typename T1>
T1 gcd(const T1 &a, const T1 &b) {
if(a == 0 || b == 0) {
return a + b;
}
return gcd(b, a % b);
}
#define MAX 1000000
#define MAXP 21
#define MOD 1000000007ll
long long power(long long x, long long n) {
long long p = x;
long long s = 1;
while(n > 0) {
if(n & 1) {
s = (s * p) % MOD;
}
p = (p * p) % MOD;
n /= 2;
}
return s;
}
int n;
void solve() {
cin >> n;
n = (n * 108) / 100;
dbg(n);
if(n < 206) out("Yay!")
if(n == 206) out("so-so;")
out(":(");
}
int main() {
setupFastCin();
int T = 1;
#ifdef _OLIMPOLOCAL
cin >> T;
#endif
reps(t, 1, T + 1) {
solve();
}
return 0;
}
