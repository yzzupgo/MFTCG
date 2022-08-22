#include <bits/stdc++.h>
using namespace std;
#define mem(arr,i) fill(arr, arr + sizeof(arr), i)
#define MEM(arr,i) memset(arr, i, sizeof(arr))
#define Push push_back
#define Pair make_pair
#define ALL(x) x.begin(), x.end()
#define X first
#define Y second
#define ACCEL ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef unsigned long long ull;
typedef long long lli;
typedef pair<int,int> pii;
typedef pair<lli,lli> pll;
typedef pair<pll,lli> p3l;
typedef vector<int> vcI;
typedef vector<lli> vcL;
typedef vector<pii> vPI;
typedef vector<pll> vPL;
typedef vector<p3l> v3L;
typedef vector<vcL> vvL;
const double PI = 3.141592653589793;
const lli I_MAX = 1LL << 60;
lli mod = 1000000007;
const lli maxN = 2E5;
vcL inv(maxN+5, 1);
vcL fac(maxN+5, 1);
void ADD(lli &x, lli y) {
x += y;
if (x >= mod) x -= mod;
if (x < 0) x += mod;
}
void MUL(lli &x, lli y) {
x *= y;
x = (x % mod + mod) % mod;
}
lli mypow(lli b, lli e) {
lli ans = 1;
while (e) {
if (e & 1) MUL(ans, b);
MUL(b, b);
e >>= 1;
}
return ans;
}
lli modinv(lli n) {
return mypow(n, mod - 2);
}
void calcInv(lli n) {
for (int i = 2; i <= n; ++i) {
inv[i] = (mod - mod / i) * inv[mod % i] % mod;
}
}
void calcFac(lli n) {
for (int i = 2; i <= n; ++i) {
fac[i] = fac[i - 1] * i % mod;
}
}
lli cm(lli a, lli b) {
lli ans = 1;
if (a < b) return 0;
MUL(ans, inv[fac[a - b]]);
MUL(ans, inv[fac[b]]);
MUL(ans, fac[a]);
return ans;
}
lli Lucas(lli n, lli m) {
if (m == 0) return 1;
return cm(n % mod, m % mod) * Lucas(n / mod, m / mod) % mod;
}
lli doLucas(lli n, lli m) {
calcInv(mod);
calcFac(mod);
return Lucas(n, m);
}
const lli maxn = 1E5;
void precal() {
return;
}
void solve() {
lli n;
cin >> n;
lli ans = 0, p;
for (int i = 1; i <= n; ++i) {
int j = i, cnt = 0;
while (j > 0) {
j /= 10;
++cnt;
}
if (cnt % 2 == 1) ++ans;
}
cout << ans << '\n';
}
int main() {
precal();
int t = 1;
#ifdef LOCAL
t = INT_MAX;
#else
ACCEL;
#endif
for (int i = 1; i <= t; ++i) {
solve();
}
return 0;
}
