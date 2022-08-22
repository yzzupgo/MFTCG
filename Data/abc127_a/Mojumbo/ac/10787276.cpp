#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#pragma warning(disable : 4996)
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<time.h>
#include<random>
#include<array>
using namespace std;
#define REP(i,n) for(int i = 0;i < (n);++i)
#define REPR(i,n) for(int i = n-1;i >= 0;--i)
#define FOR(i,m,n) for(int i = m;i < n;++i)
#define FORR(i,m,n) for(int i = m-1;i >= n;--i)
#define SORT(v,n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define REVERSE(v,n) reverse(v,v+n);
#define VREVERSE(v) reverse(v.begin(), v.end())
#define ll long long
#define print(x) cout<<(x)<<'\n'
#define pe(x) cout<<(x)<<" "
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define lb(v,n) lower_bound(v.begin(), v.end(), (n))
#define ub(v,n) upper_bound(v.begin(), v.end(), (n))
#define int long long
#define all(x) (x).begin(), (x).end()
#define print_space(v) REP(i,v.size())cout << v[i] << ((i == v.size() - 1) ? "\n" : " ")
template<typename T1, typename T2> inline void chmin(T1 & a, T2 b) { if (a > b) a = b; }
template<typename T1, typename T2> inline void chmax(T1& a, T2 b) { if (a < b) a = b; }
typedef pair<int, int>P;
std::random_device rd;
std::mt19937 mt(rd());
constexpr int MOD = 1e9 + 7; constexpr int MAX = 200020;
const double pi = acos(-1); constexpr double EPS = 1e-8;
constexpr ll INF = 1e16;
typedef array<int, 3>arr3;
void die(string s) { cout << s << endl; exit(0); }
int dx[4] = { 0,0,1,-1 }, dy[4] = { 1,-1,0,0 };
void solve() {
int A, B; cin >> A >> B;
if (A <= 5)print(0);
else if (A <= 12)print(B / 2);
else print(B);
}
signed main() {
solve();
}
