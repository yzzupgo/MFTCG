#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef pair<double,double> pdd;
typedef set<int> si;
typedef set<ll> sll;
typedef vector<int> vi;
typedef vector<pair<int, int > > vii;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef vector<vll> vvll;
constexpr ll MOD = 1e9+7;
constexpr int INF = 1<<30;
constexpr ll LINF = 1LL<<60;
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define ABS(a,b) ((a)<(b)?(b)-(a):(a)-(b))
#define nbit(n) (1ll<<(n))
template<typename T>
T chmin(T& a, T b) {
if (a > b) {
a = b;
}
return a;
}
template<typename T>
T chmax(T& a, T b) {
if (a < b) {
a = b;
}
return a;
}
void addmod(ll& a, ll b) {
a = (a+b)%MOD;
}
template <typename T>
void dumpContents(const T& v, const string& msg)
{
cerr << "### " << msg << " ###\n";
for (const auto& x : v) {
cerr << x << " ";
}
cerr << endl;
}
struct before_main_function {
before_main_function() {
cin.tie(0);
ios::sync_with_stdio(false);
cout<<setprecision(20)<<fixed;
#define endl "\n"
}
} before_main_function;
int main(int argc, char** argv) {
int A, B;
cin >> A >> B;
if (A < 5) {
B = 0;
} else if (A<13) {
B /= 2;
}
cout << B << endl;
return 0;
}
