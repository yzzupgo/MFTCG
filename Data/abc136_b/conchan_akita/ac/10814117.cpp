#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <locale>
#include <cctype>
#include <sstream>
#include <iomanip>
#include <queue>
#include <bitset>
#include <numeric>
#include <random>
#include <climits>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> P;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<LL> VL;
typedef vector<VL> VVL;
typedef vector<pair<LL, LL> > VP;
typedef vector<string> VS;
typedef map<int, int> MAPII;
typedef multimap<int, char, greater<int> > MuMAPIC;
typedef multimap<int, string, greater<int> > MuMIS;
typedef pair<LL, pair<P, P> > PP;
#define INF 999999999999999997
#define MP make_pair
#define FAST_IO cin.tie(0); ios::sync_with_stdio(false);
#define FOR(i,a,b) for(LL i=(a);i<(b);i++)
#define FOR_REV(i,a,b) for(int i=(a);i>=(b);i--)
#define FOR_ITR(d) for(auto itr=d.begin(),d_end=d.end();itr!=d_end;++itr)
#define O(s) cout<<s<<endl;
#define SORTVL(v) sort(v.begin(), v.end());
#define SORTVL_GR(v) sort(v.begin(), v.end(), greater<LL>());
#define DUMP_VVI(b) if(dbgF){FOR(i,0,b.size()){FOR(j,0,b[i].size())printf("%d ",b[i][j]);puts("");}}
#define D_OUT(str,value) if(dbgF){cout<<str<<" : "<<value<<endl;}
template<class T>T IN() { T d; cin >> d; return d; }
LL gcd(LL a, LL b) { return (b > 0) ? gcd(b, a % b) : a; }
LL lcm(LL a, LL b) { return a / gcd(a, b) * b; }
bool uruu(LL Y) { return (((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0) ? true : false); }
string Replace(string S, string from, string to) { auto p = S.find(from); while (p != string::npos) { S.replace(p, from.size(), to); p = S.find(from, p + to.size()); }return S; }
LL Ketawa_s(string s) { LL a = 0; FOR(i, 0, s.length())a += s[i] - '0'; return a; }
LL CeilLastNumber(LL n) { return ((n + (10 - 1)) / 10) * 10; }
const LL MAX = 510000, p = 998244353; LL fac[MAX], finv[MAX], inv[MAX];
void COM_init() { fac[0] = fac[1] = 1; finv[0] = finv[1] = 1; inv[1] = 1; FOR(i, 2, MAX) { fac[i] = fac[i - 1] * i % p; inv[i] = p - inv[p % i] * (p / i) % p; finv[i] = finv[i - 1] * inv[i] % p; } }
LL COM(int n, int k) { if (n < k) return 0; if (n < 0 || k < 0) return 0; return fac[n] * (finv[k] * finv[n - k] % p) % p; }
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int dxx[8] = { 0,1,1,1,0,-1,-1,-1 };
int dyy[8] = { 1,1,0,-1,-1,-1,0,1 };
int main() {
FAST_IO;
bool dbgF = true;
LL N;
cin >> N;
LL ans = 0;
FOR(i, 1, N + 1) {
string s = to_string(i);
if (s.length() % 2 != 0) {
ans++;
}
}
O(ans);
return 0;
}
