#include <bits/stdc++.h>
#if ONLINE_JUDGE
#define DEBUG false
#else
#define DEBUG true
#endif
#define fastcin() cin.tie(0);ios::sync_with_stdio(false)
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i,n) for (int i = (int)(n)-1; i >= 0; i--)
#define rREP(i,k,n) for (int i = (int)(n)-1; i >= k; i--)
#define foreach(i,vec) for(auto &&i : vec)
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort(all(x))
#define REV(x) reverse(all(x))
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define LOWitr(x,n) lower_bound(all(x), n)
#define UPRitr(x,n) upper_bound(all(x), n)
#define cii(x) int x;cin >> x
#define cill(x) LL x;cin >> x
#define cis(x) string x;cin >> x
#define co(x) cout << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define truecheck assert
#define dump(x) cerr << #x << ": " << (x) << endl
using namespace std;
typedef long long LL;
typedef long long int64;
typedef std::vector<int> VI;
typedef std::vector<VI> VVI;
typedef std::vector<LL> VL;
typedef std::vector<VL> VVL;
typedef std::vector<string> VS;
typedef std::pair<int, int> PII;
typedef std::pair<int64, int64> PLL;
typedef std::queue<int> QI;
typedef std::priority_queue<int> PQI;
template<class T,class U>inline bool chmax(T &a, const U &b){if (a<b){a=b;return true;}return false;}
template<class T,class U>inline bool chmin(T &a, const U &b){if (b<a){a=b;return true;}return false;}
template<class T,class U>inline void vcin(T &v, U n){rep(i, n){typename T::value_type a;cin >> a;v.pb(a);}}
const int INF = 1e9, MOD = 1e9 + 7;
const LL LLINF = 1e16;
int main() {
fastcin();
cout << fixed << setprecision(10);
cill(n);
LL ans = 0;
REP(i, 1, n+1){
if(to_string(i).length() % 2 == 1)
ans++;
}
co(ans);
return 0;
}
