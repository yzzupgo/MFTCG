#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <math.h>
#include <cstring>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <list>
#include <iomanip>
#include <numeric>
#include <utility>
#include <random>
#include <chrono>
#include <cstdlib>
#include <cstdio>
#include <functional>
#include <memory.h>
#include <cassert>
#include <complex>
#include <ctime>
#include <limits>
using namespace std;
using ll = long long;
using ld = long double;
using db = double;
using str = string;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;
using vi = vector<int>;
using vl = vector<long long>;
using vd = vector<double>;
using vs = vector<string>;
using vld = vector<long double>;
using vpi = vector<pair<int, int>>;
using vpl = vector<pair<long long, long long>>;
using vpd = vector<pair<double, double>>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<long long>>;
#define mp make_pair
#define f first
#define s second
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define rs resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define nl "\n"
#define trav(i,x) for (auto& i: x)
const int MOD = 998244353;
const int MX = 5005;
const ll INF = 1e18;
const ld PI = acos((ld)-1);
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
ll lcm(ll a, ll b) { return (a / (__gcd(a, b)) * b); }
ll gcd(ll a,ll b) { return b ? gcd(b, a % b) : a; }
ll pow(ll a, ll b) { ll res = 1; while (b > 0) { if (b & 1) res = res * a; a = a * a; b >>= 1; } return res; }
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++) {
for(int j = 0; j <= x; j++) {
if(i * 2 + j * 4 == y && (i + j) == x) {
cout << "Yes" << nl;
return 0;
}
}
}
cout << "No" << nl;
}
