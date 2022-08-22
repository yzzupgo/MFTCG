#include <bits/stdc++.h>
#if ONLINE_JUDGE
#define DEBUG false
#else
#define DEBUG true
#endif
#define REP(i,k,n) for (signed long long int i = (signed long long int)(k); i < (signed long long int)(n); i++)
#define rep(i,n) REP(i, 0, n)
#define rep1(i,n) REP(i, 1, n)
#define loop(n) rep(looping, n);
#define rREP(i,k,n) for (signed long long int i = (signed long long int)(n)-1; i >= k; i--)
#define rrep(i,n) rREP(i, 0, n)
#define all(x) (x).begin(),(x).end()
#define SORT(x) std::sort(all(x))
#define REV(x) std::reverse(all(x))
#define UNIQUE(x) x.erase(std::unique(all(x)), x.end());
#define MAX(x) *std::max_element(all(x))
#define MIN(x) *std::min_element(all(x))
#define LOWitr(x,n) std::lower_bound(all(x), n)
#define UPRitr(x,n) std::upper_bound(all(x), n)
#define cii(x) int x; std::cin >> x
#define cill(x) signed long long int x; std::cin >> x
#define cis(x) std::string x; std::cin >> x
#define co(x) std::cout << x << "\n"
#define pb push_back
#define mp std::make_pair
#define F first
#define S second
#define truecheck assert
#define dump(x) if(DEBUG) std::cout<<#x<<" : "<<(x)<<"\n"
using std::cin;
using std::cout;
using std::string;
using std::min;
using std::max;
using std::abs;
using std::next_permutation;
template<class T>using V = std::vector<T>;
template<class T>using VV = std::vector<std::vector<T>>;
template<class T>using Q = std::queue<T>;
template<class T>using PQ = std::priority_queue<T>;
template<class T,class U>using P = std::pair<T, U>;
template<class T,class U>using M = std::map<T, U>;
template<class T,class U>using UM = std::unordered_map<T, U>;
using LL = signed long long int;
using VL = V<LL>;
using VVL = V<VL>;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const LL LLINF = 0x3f3f3f3f3f3f3f3fLL;
const double PI = M_PI;
template<class T,class U>inline LL min(T a, U b){return std::min((LL)a, (LL)b);}
template<class T,class U>inline LL max(T a, U b){return std::max((LL)a, (LL)b);}
template<class T,class U>inline bool chmin(T &a, const U &b){if (b<a){a=b;return true;}return false;}
template<class T,class U>inline bool chmax(T &a, const U &b){if (a<b){a=b;return true;}return false;}
template<class T>inline void vcin(T &v){for(auto&& i : v) std::cin >> i;}
template<class T>inline void dumpv(const T& v, std::ostream& os = std::cout){
if(DEBUG){
os<<"{";std::for_each(all(v),[&os](typename T::value_type p){os<<p<<',';});os<<"}\n";
}
}
void Main(){
cill(x);
cill(y);
LL min = x * 2;
LL max = x * 4;
if(min <= y && y <= max && y%2==0){
co("Yes");
}else{
co("No");
}
}
int main() {
std::cin.tie(nullptr);
std::ios::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(15);
Main();
return 0;
}
