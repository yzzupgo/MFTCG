#pragma GCC optimize ("O2")
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define double long double
#define vec vector
#define vi vector<int>
#define vvi vector<vector<int>>
#define FZ(n) memset((n),0,sizeof())
#define FMO(n) memset((n),-1,sizeof(n))
#define unset unordered_set
#define ii pair<int, int>
#define vii vector<ii>
#define F first
#define S second
#define PB push_back
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define FORE(i,a,b) for(int i = (a); i <= (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define bitcount(n) __builtin_popcountll(n)
template <typename T,typename U>
std::pair<T,U> operator+(const std::pair<T,U> & l,const std::pair<T,U> & r) {
return {l.first+r.first, l.second+r.second};
}
typedef void (*callback_function)(void);
const long long ZERO = 0LL;
const long long INF64 = 1e18;
const int INF32 = 1e9;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0L);
const double EPS = static_cast<double>(1e-9);
typedef long long ll;
void FILEIO() { freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout); }
void input() { }
void solve() {
int n, l; cin >> n >> l;
vi a(n+1); FORE(i, 1, n) a[i] = l+i-1;
int sum = 0;
FORE(i, 1, n) sum += a[i];
int minV = INT_MAX, ans;
FORE(i, 1, n) {
int k = (int)abs(a[i]);
if(k <minV) {minV =k; ans = sum - a[i];}
}
cout << ans << endl;
}
signed main() {
ios_base::sync_with_stdio(false); cin.tie();
solve();
return 0;
}
