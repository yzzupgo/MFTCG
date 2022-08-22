#include <bits/stdc++.h>
using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
template<class T> inline T sqr(T x) {return x*x;}
typedef long long LL;
typedef pair<int, int> PII;
typedef pair<LL,LL> PLL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef vector<double> VD;
typedef vector<VD> VVD;
typedef vector<string> VS;
typedef vector<VS> VVS;
typedef vector<char> VC;
typedef vector<VC> VVC;
typedef vector<PII> VPII;
typedef vector<PLL> VPLL;
typedef priority_queue<int> PQGI;
typedef priority_queue<int, VI, greater<int>> PQLI;
typedef priority_queue<PII> PQGP;
typedef priority_queue<PII, VPII, greater<PII>> PQLP;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EB emplace_back
#define EF emplace_front
#define PB push_back
#define PF push_front
#define POB pop_back
#define POF pop_front
#define MP make_pair
#define SZ(a) int((a).size())
#define SQ(a) ((a)*(a))
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define SORTR(c) sort((c).rbegin(), (c).rend())
#define LB lower_bound
#define UB upper_bound
#define NEXP next_permutation
#define FI first
#define SE second
#define Vmin(a) *min_element((a).begin(),(a).end())
#define Vmax(a) *max_element((a).begin(),(a).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORR(i,a,b) for(int i = (b-1);i>=(a);i--)
#define REPR(i,n) FORR(i,0,n)
#define CFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define CREP(i,n) CFOR(i,0,n)
#define CFORR(i,a,b) for(int i = (b);i>=(a);i--)
#define CREPR(i,n) CFORR(i,0,n)
#define BFOR(bit,a,b) for(int bit = (a); bit < (1<<(b)); ++bit)
#define BREP(bit,n) BFOR(bit,0,n)
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = INT_MAX/2;
const LL LINF = LLONG_MAX/3;
const int RINF = INT_MIN/2;
const LL RLINF = LLONG_MIN/3;
const LL MOD = 1e9+7;
const LL MODD = 998244353;
const int MAX = 510000;
inline bool Eq(double a, double b) { return fabs(b - a) < EPS; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define COUT(x) cout << (x) << endl
#define COUT2(x,y) cout << (x) << " " << (y) << endl
#define COUT3(x,y,z) cout << (x) << " " << (y) << " " << (z) << endl
#define PR(x) cout << (x)
#define ENDL cout << endl
#define SPACE cout << " "
#define BC(x) __builtin_popcountll(x)
VI dx = {1,0,-1,0,1,1,-1,-1};
VI dy = {0,1,0,-1,1,-1,1,-1};
LL Gcd(LL a, LL b) {return __gcd(a,b);}
LL Lcm(LL a, LL b) {return a/Gcd(a,b)*b;}
template< typename T1, typename T2 >
istream &operator>>(istream &is, pair< T1, T2 > &p) {
is >> p.first >> p.second;
return is;
}
template< typename T1, typename T2 >
ostream &operator<<(ostream &os, const pair< T1, T2 >& p) {
os << p.first << " " << p.second;
return os;
}
template< typename T >
istream &operator>>(istream &is, vector< T > &v) {
for(T &in : v) is >> in;
return is;
}
template< typename T >
ostream &operator<<(ostream &os, const vector< T > &v) {
for(int i = 0; i < SZ(v); i++) {
os << v[i] << (i + 1 != SZ(v) ? " " : "");
}
return os;
}
template<typename T>
vector<T> make_v(size_t a,T b){return vector<T>(a,b);}
template<typename... Ts>
auto make_v(size_t a,Ts... ts){
return vector<decltype(make_v(ts...))>(a,make_v(ts...));
}
int main() {
cout << fixed << setprecision(12);
int N, L;
cin >> N >> L;
int sum = 0;
CFOR(i,1,N){
sum += L+i-1;
}
int ans = 0, del = INF;
CFOR(i,1,N){
int dsum = 0;
CFOR(j,1,N){
if(i == j) continue;
dsum += L+j-1;
}
if(chmin(del, abs(sum-dsum))) ans = dsum;
}
COUT(ans);
return 0;
}
