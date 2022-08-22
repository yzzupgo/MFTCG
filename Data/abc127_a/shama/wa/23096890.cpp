#include <bits/stdc++.h>
const long long INF = 1e9;
const long long MOD = 1e9 + 7;
const long long LINF = 1e18;
using namespace std;
#define YES(n) cout << ((n) ? "YES" : "NO" ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No" ) << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE" ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible" ) << endl
#define dump(x) cout << #x << " = " << (x) << endl
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) for(int i=0;i<(n);++i)
#define REPR(i,n) for(int i=n;i>=0;i--)
#define COUT(x) cout<<(x)<<endl
#define SCOUT(x) cout<<(x)<<" "
#define VECCOUT(x) for(auto&youso_: (x) )cout<<right<<setw(10)<<youso_<<" ";cout<<endl
#define ENDL cout<<endl
#define CIN(...) int __VA_ARGS__;CINT(__VA_ARGS__)
#define LCIN(...) long long __VA_ARGS__;CINT(__VA_ARGS__)
#define SCIN(...) string __VA_ARGS__;CINT(__VA_ARGS__)
#define VECCIN(x) for(auto&youso_: (x) )cin>>youso_
#define mp make_pair
#define PQ priority_queue<long long>
#define PQG priority_queue<long long,V,greater<long long>>
typedef long long ll;
typedef vector<long long> vl;
typedef vector<long long> vi;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<vl> vvl;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vc> vvc;
typedef pair<long long, long long> pll;
#define COUT(x) cout<<(x)<<endl
void CINT(){}
template <class Head,class... Tail>
void CINT(Head&& head,Tail&&... tail){
cin>>head;
CINT(move(tail)...);
}
template<class T>
void mod(T &x) {
x %= MOD;
x += MOD;
x %= MOD;
}
ll GCD(ll a, ll b) {
if(b == 0) return a;
else return GCD(b, a%b);
}
struct COMB{
vl fact, fact_inv, inv;
void init_nCk(long long SIZE) {
fact.resize(SIZE + 5);
fact_inv.resize(SIZE + 5);
inv.resize(SIZE + 5);
fact.at(0) = fact.at(1) = fact_inv.at(0) = fact_inv.at(1) = inv.at(1) = 1;
for(long long i = 2; i < SIZE + 5; i++) {
fact.at(i) = fact.at(i - 1)*i%MOD;
inv.at(i) = MOD - inv.at(MOD%i)*(MOD/i)%MOD;
fact_inv.at(i) = fact_inv.at(i - 1)*inv.at(i)%MOD;
}
}
long long nCk (long long n, long long k) {
assert(!(n < k));
assert(!(n < 0 || k < 0));
return fact.at(n)*(fact_inv.at(k)*fact_inv.at(n - k)%MOD)%MOD;
}
};
ll extGCD(ll a, ll b, ll &x, ll &y) {
if(b == 0) {
x = 1;
y = 0;
return a;
}
ll d = extGCD(b, a%b, y, x);
y -= a/b*x;
return d;
}
void Main() {
ll ans = 0;
LCIN(A, B);
if(A >= 13) cout << B << endl;
else if(A >= 12) cout << B/2 << endl;
else cout << 0 << endl;
}
int main() {
cout << fixed << setprecision(15);
Main();
return 0;
}
