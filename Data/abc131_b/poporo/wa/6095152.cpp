#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <limits>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }
template<class T> inline T sqr(T x) { return x * x; }
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define EXISTch(s,c) ((((s).find_first_of(c)) != std::string::npos)? 1 : 0)
#define SORT(c) sort((c).begin(),(c).end())
#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = (int)1000000007;
const LL MOD = (LL)1000000007;
const LL INF2 = (LL)100000000000000000;
int main() {
int n, l; cin >> n >> l;
int before = 0;
for (int i = 1; i < n+1; i++) {
before += (l + i - 1);
}
int diff = INF;
int ans = INF;
for (int i = 1; i < n+1; i++) {
int tmp = 0;
for (int j = 1; j < n+1; j++) {
if (i == j)continue;
tmp += (l + i - 1);
}
if (diff > abs(before - tmp)) {
diff = abs(before - tmp);
ans = tmp;
}
}
cout << ans << endl;
return 0;
}
