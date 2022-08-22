#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <queue>
#include<stack>
#include<bitset>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring>
#include <cctype>
#include <cassert>
#include <limits>
#include <functional>
#include<unordered_map>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
#define aut(r,v) for(auto r:v)
#define each(it,o) for(aut(it, (o).begin()); it != (o).end(); ++ it)
#define all(o) (o).begin(), (o).end()
#define pb(x) push_back(x)
#define pc() pop_back()
#define ull unsigned long long
#define mp(x,y) make_pair((x),(y))
#define mset(m,v) memset(m,v,sizeof(m))
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
using namespace std;
#define endl '\n'
#define st stack<int>
#define vl vector<long long>
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvi vector<vi>
#define vs vector<string>
#define mod 1000000007
#define un unordered_map<int,int>
#define mii map<int,int>
#define Sort(a) sort(all(a))
#define ED(a) Sort(a), a.erase(unique(all(a)), a.end())
#define max3(a,b,c) max(a, max(b, c))
#define min3(a,b,c) min(a, min(b, c))
#define Max(a) *max_element(all(a))
#define Min(a) *min_element(all(a))
#define MaxP(a) max_element(all(a)) - a.begin()
#define MinP(a) min_element(all(a)) - a.begin()
#define allUpper(a) transform(all(a), a.begin(), :: toupper)
#define allLower(a) transform(all(a), a.begin(), :: tolower)
#define rev(a) reverse(all(a))
#define ub(v,k) upper_bound(all(v), k) - v.begin()
#define lb(v,k) lower_bound(all(v), k) - v.begin()
#define adv(a,n) advance(auto it:a,n)
#define RSort(a) sort(a.rbegin(),a.rend())
#define cnt(v,a) count(all(v),a)
#define bs(v,a) binary_search(all(v),a)
#define mmax(v) *max_element(all(v))
#define mmin(v) *min_element(all(v))
#define popcount(mask) __builtin_popcount(mask)
#define popcountLL(mask) __builtin_popcountll(mask)
#define X real()
#define Y imag()
#define ll long long
#define ss second
#define ff first
#define trace1(x) cerr << #x << ": " << x << endl;
#define trace2(x,y) cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x,y,z) cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a,b,c,d) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a,b,c,d,e) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a,b,c,d,e,f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
template <typename T> T gcd(T a, T b) { while (b) b ^= a ^= b ^= a %= b; return a; }
template <typename T> T setbit(T mask, T pos) { return mask |= (1 << pos); }
template <typename T> T resetbit(T mask, T pos) { return mask &= ~(1 << pos); }
template <typename T> T togglebit(T mask, T pos) { return mask ^= (1 << pos); }
template <typename T> T checkbit(T mask, T pos) { return (bool)(mask & (1 << pos)); }
template <typename T> T lcm(T a, T b) { return (a / gcd(a, b)) * b; }
template <typename T> T modu(T a, T b) { return (a < b ? a : a % b); }
template<typename T> T mod_neg(T a, T b) { a = mod(a, b); if (a < 0) { a += b; } return a; }
template <typename T>T expo(T e, T n) { T x = 1, p = e; while (n) { if (n & 1)x = x * p; p = p * p; n >>= 1; } return x; }
template<typename T> T mod_inverse(T a, T n) { T x, y; T d = extended_euclid(a, n, x, y); return (d > 1 ? -1 : mod_neg(x, n)); }
template <typename T>T power(T e, T n, T m) { T x = 1, p = e; while (n) { if (n & 1)x = mod(x * p, m); p = mod(p * p, m); n >>= 1; } return x; }
template <typename T>T powerL(T e, T n, T m) { T x = 1, p = e; while (n) { if (n & 1)x = mulmod(x, p, m); p = mulmod(p, p, m); n >>= 1; } return x; }
bool Pow2(int n) {
return n && (!(n & (n - 1)));
}
void printc(vc& result) {
aut(r, result) cout << r << " ";
cout << endl;
}
void printl(vl& result) {
aut(r, result) cout << r << " ";
cout << endl;
}
void print(vi& result) {
aut(r, result) cout << r << " ";
cout << endl;
}
int binpow(int a, int b)
{
if (b == 0)
return a;
int res = binpow(a, b / 2);
if (b % 2)
return res * res * a;
else
return res * res;
}
int pow(int a, int b)
{
int res = 1;
while (b)
{
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
int modpow(int a, int b, int m)
{
int ans = 1;
while (b)
{
if (b & 1)
ans = (ans * a) % m;
b /= 2;
a = (a * a) % m;
}
return ans;
}
const int MOD = 1000000000 + 7;
const int MXX = 100000 + 69;
int fact[MXX], invfact[MXX];
int modinv(int k) { return modpow(k, MOD - 2, MOD); }
void combinatorics()
{
fact[0] = fact[1] = 1;
for (int i = 2; i < MXX; i++)
{
fact[i] = fact[i - 1] * i;
fact[i] %= MOD;
}
invfact[MXX - 1] = modinv(fact[MXX - 1]);
for (int i = MXX - 2; i >= 0; i--)
{
invfact[i] = invfact[i + 1] * (i + 1);
invfact[i] %= MOD;
}
}
int nCr(int x, int y)
{
if (y > x)
return 0;
int num = fact[x];
num *= invfact[y];
num %= MOD;
num *= invfact[x - y];
num %= MOD;
return num;
}
int vis[100010];
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int test;
test = 1;
while (test--) {
int x, y;
cin >> x >> y;
int flag = 0;
if (y % 2) flag = 1;
int maxi = y / 2;
int mini = y / 4;
if (x<mini || x>maxi) flag = 1;
if (flag == 1) cout << "No" << endl;
else cout << "Yes" << endl;
}
}
