#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <cstring>
#include <string>
#include <utility>
#include <array>
#include <complex>
#include <valarray>
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <chrono>
#include <random>
#include <numeric>
#include<memory>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pullull;
typedef pair<ll,int> plli;
typedef pair<double,int> pdi;
typedef pair<long double, int> pdbi;
typedef pair<int,pii> pipii;
typedef pair<ll,pll> plpll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<pii> vpii;
typedef vector<vector<int>> mat;
#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n);i>0;i--)
#define rrep2(i,a,b) for (int i=(a);i>b;i--)
#define pb push_back
#define fi first
#define se second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
const ll hmod1 = 999999937;
const ll hmod2 = 1000000000 + 9;
const int INF = 1<<30;
const ll INFLL = 1LL<<62;
const long double EPS = 1e-12;
const ll mod = 1000000000 + 7;
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy8[8] = {0, 1, -1, 1, -1, 0, 1, -1};
const long double pi = 3.141592653589793;
#define addm(X,Y) (X) = ((X) + ((Y) % mod) + mod) % mod
#define inside(y,x,h,w) (0 <= (y) && (y) < (h) && 0 <= (x) && (x) < (w)) ? true : false
#define DEBUG
#define DUMPOUT cerr
#ifdef DEBUG
#define dump(...) DUMPOUT<<#__VA_ARGS__<<" :["<<__FUNCTION__<<":"<<__LINE__<<"]"<<endl; DUMPOUT<<"    "; dump_func(__VA_ARGS__)
#else
#define dump(...)
#endif
void dump_func() {DUMPOUT << endl;};
template <class Head, class... Tail> void dump_func(Head&& head, Tail&&... tail) {
DUMPOUT << head;
if (sizeof...(Tail) == 0) DUMPOUT << " ";
else DUMPOUT << ", ";
dump_func(std::move(tail)...);
}
template<typename T> ostream& operator << (ostream& os, vector<T>& vec) {
os << "["; for (int i = 0; i<vec.size(); i++) os << vec[i] << (i + 1 == vec.size() ? "" : ", "); os << "]";
return os;
}
template<typename T, typename U> ostream& operator << (ostream& os, pair<T, U>& pair_var) {
os << "(" << pair_var.first << ", " << pair_var.second << ")";
return os;
}
template<typename T, typename U> ostream& operator << (ostream& os, map<T, U>& map_var) {
os << "[";
for (auto itr = map_var.begin(); itr != map_var.end(); itr++) {
os << "(" << itr->first << ", " << itr->second << ")"; itr++; if(itr != map_var.end()) os << ", "; itr--;
}
os << "]";
return os;
}
template<typename T> ostream& operator << (ostream& os, set<T>& set_var) {
os << "[";
for (auto itr = set_var.begin(); itr != set_var.end(); itr++) {
os << *itr; ++itr; if(itr != set_var.end()) os << ", "; itr--;
}
os << "]";
return os;
}
int a, b;
signed main() {
cin.tie(0);
ios::sync_with_stdio(false);
cin >> a >> b;
cout << max({a+b, a-b, a+b}) << endl;
}
