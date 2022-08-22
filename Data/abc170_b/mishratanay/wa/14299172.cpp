#include <iostream>
#include <iosfwd>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <cctype>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <math.h>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
#pragma GCC optimize ("-O3")
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL);
#define tolower(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define toupper(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define ll long long int
ll max(ll a, ll b) { return a > b ? a : b; }
ll gcd(ll a, ll b) { if (a == 0) return b; return b == 0 ? a : gcd(b, a % b);}
#define case(i) cout<<"Case #"<<i<<": ";
#define debug(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr << '\n'; }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
#define debug2(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
void err(istream_iterator<string> it, T a, Args... args) { cerr << "[ " << *it << " = " << a << " ]"; err(++it, args...);}
#define time__(d) for (auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); blockTime.second; debug2("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false)
#define pii pair <ll , ll >
#define pb push_back
#define PRECISION 10
const ll inf = 9223372036854775800;
const int MAXN = 100001;
const int LOGN = 22;
const int MAXBIT = 62;
const long double PI = 3.141592653589793;
const int DIGITSIZE = 18;
ll mod = 1e9 + 7;
ll MOD = 998244353;
int x4[] = {1, -1, 0, 0};
int y4[] = {0, 0, 1, -1};
int x8[] = {1, 1, 1, -1, -1, -1, 0, 0};
int y8[] = {1, 0, -1, 1, 0, -1, 1, -1};
bool takeTestCases = 0;
bool printCaseNo = 0;
void getac(int T) {
int n;
int m;
cin >> n >> m;
for (int i = 0; i <= n; i++) {
for (int j = 0; j + i <= n; j++) {
if ((i * 2) + (j * 4) == m) {
cout << "Yes\n";
return ;
}
}
}
cout << "No\n";
}
int main()
{
fastio;
int t = 1;
if (takeTestCases) cin >> t;
int t_t = 1;
while (t--) {
if (printCaseNo)
case (t_t);
getac(t_t);
t_t++;
}
cerr << "Total time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms" << '\n';
return 0;
}
