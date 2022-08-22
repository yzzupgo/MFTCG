#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <random>
#include <fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define mod 256
double eps = 1e-12;
#define fors(i,e) for (ll i = 0; i < e; i++)
#define forsn(i,s,e) for (ll i = s; i < e; i++)
#define rforn(i,s) for (ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define INF 2e18
#define fast_cin() \
ios_base::sync_with_stdio(false); \
cin.tie(NULL); \
cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define iterate(x) for (auto itr = x.begin(); itr != x.end(); ++itr)
ll myceil(ll a, ll b) {
if(a % b == 0) {
return a / b;
} else {
return a / b + 1;
}
}
vector<ll> vec;
bool isPerSquare(long double a) {
if(a < 0) {
return false;
}
ll sr = sqrt(a);
return (sr * sr == a);
}
ll power(long long x, unsigned int y, int p) {
int res = 1;
x = x % p;
if(x == 0) {
return 0;
}
while(y > 0) {
if(y & 1) {
res = (res * x) % p;
}
y = y >> 1;
x = (x * x) % p;
}
return res;
}
unsigned int reverseBits(unsigned int n) {
unsigned int rev = 0;
while(n > 0) {
rev <<= 1;
if(n & 1 == 1) {
rev ^= 1;
}
n >>= 1;
}
return rev;
}
string decimalToBinary(int n) {
string s = bitset<64>(n).to_string();
const auto loc1 = s.find('1');
if(loc1 != string::npos) {
return s.substr(loc1);
}
return "0";
}
void solve() {
double n;
cin >> n;
double k = floor((double)(n * (double)(1.08)));
if(k == 206) {
cout << "so-so";
return;
}
if(k < 206) {
cout << "Yay!";
return;
}
cout << ":(";
}
int main() {
solve();
}
