#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<queue>
#include<cmath>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<random>
#include<functional>
#include<algorithm>
#include<stack>
#include<cstdio>
#include<bitset>
#include<unordered_map>
#include<climits>
#include<fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
#define all(a) (a).begin(),(a).end()
#define EPS (1e-5)
#define bit(n,k) ((n>>k)&1)
const ll Mod = 1000000007;
const ll mod = 998244353;
struct H {
ll x, y;
bool operator<(const H &b) const {
if (x != b.x) return x < b.x;
return y < b.y;
}
bool operator>(const H &b) const {
if (x != b.x) return x > b.x;
return y > b.y;
}
bool operator==(const H &b) const { return x == b.x&&y == b.y; }
bool operator!=(const H &b) const { return (*this) != b; }
};
struct P {
ll pos, cost;
bool operator<(const P &b) const { return cost < b.cost; }
bool operator>(const P &b) const { return cost > b.cost; }
};
struct B {
ll to, cost;
bool operator<(const B& b) const { return cost < b.cost; }
bool operator>(const B& b) const { return cost > b.cost; }
};
struct E {
ll from, to, cost;
bool operator<(const E &b) const { return cost < b.cost; }
bool operator>(const E &b) const { return cost > b.cost; }
};
template<typename T, typename U>
void chmin(T &a, U b) {
if (a > b) a = b;
}
template<typename T, typename U>
void chmax(T &a, U b) {
if (a < b) a = b;
}
template<typename T>
T max_0(T a) {
if (a < 0) return 0;
return a;
}
template<typename T>
T min_0(T a) {
if (a > 0) return 0;
return a;
}
ll read() {
ll u;
ll k = scanf("%lld", &u);
return u;
}
ll gcd(ll i, ll j) {
if (i > j) swap(i, j);
if (i == 0) return j;
return gcd(j%i, i);
}
ll mod_pow(ll x, ll n, ll p) {
ll res = 1;
while (n > 0) {
if (n & 1) res = res * x % p;
x = x * x % p;
n >>= 1;
}
return res;
}
const ll Inf = 3023372036854775807;
const int inf = 1500000000;
#define int long long
int n, l;
signed main() {
cin >> n >> l;
int ans = 0, res = Inf;
for (int i = 0; i < n; i++) {
int sum = 0;
for (int j = 0; j < n; j++) {
if (i != j) sum += l + j;
}
if (res > abs(sum - l - i)) {
res = abs(sum - l - i);
ans = sum;
}
}
cout << ans << endl;
}
