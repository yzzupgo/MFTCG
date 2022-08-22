#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define Abs(x) ((x) < 0 ? (x) * -1 : (x))
#define rep(x,y) for ((x) = 0; (x) < (y); (x)++)
#define repin(x,y) for ((x) = 0; (x) <= (y); (x)++)
#define nep(x,y) for ((x) = (y) - 1; 0 <= (x); (x)--)
#define nepi(x,y,z) for ((x) = (y) - 1; (z) <= (x); (x)--)
#define repi(x,y,z) for ((x) = (z); (x) < (y); (x)++)
#define repiin(x,y,z) for ((x) = (z); (x) <= (y); (x)++)
#define reps(x,y,z) for ((x) = 0; (x) < (y); (x) += (z))
#define repis(x,y,z,s) for ((x) = (z); (x) < (y); (x) += (s))
#define repiins(x,y,z,s) for ((x) = (z); (x) <= (y); (x) += (s))
#define repit(x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define repit2(x) for (__typeof((x).begin()) it2 = (x).begin(); it2 != (x).end(); it2++)
#define nepit(x) for (__typeof((x).rbegin()) it = (x).rbegin(); it != (x).rend(); it++)
#define All(x) (x).begin(),(x).end()
#define Mem0(x) memset(x, 0, sizeof(x))
#define Mem1(x) memset(x, -1, sizeof(x))
#define Unique(v) v.resize(unique(All(v)) - v.begin())
#define peq(p0,p1) (p0.first == p1.first && p0.second == p1.second)
#define End '\n'
#define Out(x) cout<<(x)<<End
template<typename T>
void OutN(T x) {
size_t i, len = x.size() - 1;
for (i = 0; i < len; i++) cout << x[i] << " ";
cout << x[len] << '\n';
}
#define OutaN(x) \
do { \
size_t i, len = sizeof(x) / sizeof(__typeof(x[0])) - 1; \
for (i = 0; i < len; i++) cout << x[i] << " "; \
cout << x[len] << '\n'; \
} while (0);
template<typename T>
void Outit(T x) {
auto end = x.end();
end--;
for (auto it = x.begin(); it != end; it++) cout << *it << " ";
cout << *end << '\n';
}
template<typename T>
void Debug(const T &val) { cerr << val << End; }
template<typename T, typename... Args>
void Debug(const T &val, Args... args) {
cerr << val << ' ';
Debug(std::forward<Args>(args)...);
}
template<typename T> inline bool Max(T &x, const T &y) { return x < y ? x = y, 1 : 0; }
template<typename T> inline bool Min(T &x, const T &y) { return x > y ? x = y, 1 : 0; }
template<typename T> using V = vector<T>;
template<typename T> using VV = V<V<T> >;
#define Sort(v) sort(All(v))
#define SortR(v) sort(All(v), std::greater<__typeof(v[0])>())
#define Sart(a) sort(a, a + sizeof(a) / sizeof(__typeof(a[0])));
#define SartR(a) sort(a, a + sizeof(a) / sizeof(__typeof(a[0])), std::greater<__typeof(a[0])>())
#define pb push_back
#define mp make_pair
#define a first
#define b second
#define lb std::lower_bound
#define ub std::upper_bound
#define lbi(v,x) lb(All(v), (x))-v.begin()
#define ubi(v,x) ub(All(v), (x))-v.begin()
static const ll MOD = 1e9 + 7;
static const double PI = 3.141592653589793;
#define LOCAL 0
int main()
{
#if LOCAL
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
freopen("debug.txt", "w", stderr);
#endif
cin.tie(0);
ios::sync_with_stdio(false);
std::cout.precision(18);
long n;
cin >> n;
if (n < 10) {
Out(n);
} else if (n < 100) {
Out(9);
} else if (n < 1000) {
Out(n - 90);
} else if (n < 10000) {
Out(909);
} else if (n < 100000) {
Out(n - 9090);
} else if (n == 100000) {
Out(90909);
}
return 0;
}
