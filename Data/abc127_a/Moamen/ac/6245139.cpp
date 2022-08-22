#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define all(v) ((v).begin()), ((v).end())
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d) memset(v, d, sizeof(v))
const double EPS = 1e-8;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int>P;
const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
const int N = 1000001;
#define endl '\n'
#define ever ;;
#define F first
#define S second
#define pii pair<int,int>
#define sz(v) ((int)((v).size()))
#define pll pair<ll,ll>
void stop() {
#ifndef ONLINE_JUDGE
#endif
}
void file() {
#ifndef ONLINE_JUDGE
freopen("pizza.in", "r", stdin);
freopen("pizza.out", "w", stdout);
#endif
}
struct point {
double x, y;
};
ull gcd(ull a, ull b) { return !b ? a : gcd(b, a % b); }
ll fixMod(ll a, ll b) { return ((a%b) + b) % b; }
double triangle_area(int x1, int y1, int x2, int y2, int x3, int y3) {
return abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2.;
};
ll dis(point a, point b) {
ll x = a.x - b.x, y = a.y - b.y;
return x * x + y * y;
}
ull LCM(ull a, ull b) {
return a / gcd(a, b)*b;
}
ll power(ll x, ll y)
{
if (y == 0)return 1;
if (y == 1)return x;
ll r = power(x, y / 2) % mod;
return r%mod*r%mod*power(x, y % 2) % mod;
}
int main() {
fast
ll a, b;
cin >> a >> b;
if (a > 12)cout << b;
else if (a <= 5)cout << 0;
else cout << b / 2;
stop();
return 0;
}
