#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> PL;
#define int ll
const ll MOD = 1000000007;
const ll INF_LL = (ll)1000000007 * 1000000007;
const int INF_INT = (int)1000000007;
const double PI = 3.14159265358979323846;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define rep(i,n) FOR(i, 0, n)
#define rrep(i,n) for (int i = ((int)(n)-1); i >= 0; i--)
#define irep(itr,st) for (auto itr = (st).begin(); itr != (st).end(); ++itr)
#define irrep(itr,st) for (auto itr = (st).rbegin(); itr != (st).rend(); ++itr)
#define m0(x) memset((x), 0, sizeof((x)))
#define m1(x) memset((x), -1, sizeof((x)))
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define all(x) (x).begin(), (x).end()
#define pb emplace_back
#define mp make_pair
#define F first
#define S second
#define BITCOUNT __builtin_popcount
#define BITCOUNT_LL(x) __builtin_popcountll(x)
#define perm(c) \
sort(all(c)); \
for (bool c##p = 1; c##p; \
c##p = next_permutation(all(c)))
#define BIT(n) (1LL << (n))
#ifdef DEBUG
#define PRINT(A) std::cout << (#A) << ": " << (A) << std::endl;
#else
#define PRINT(A)
#endif
struct IoSetup {
IoSetup() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
cout << fixed << setprecision(20);
}
} iosetup;
template <class T>
inline bool chmin(T &a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template <class T>
inline bool chmax(T &a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
signed main() {
int X, Y;
cin >> X >> Y;
bool ok = false;
for( int i = 1; i < X; i++){
if (((X - i) * 2 + i * 4) == Y) ok = true;
}
if (ok) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
