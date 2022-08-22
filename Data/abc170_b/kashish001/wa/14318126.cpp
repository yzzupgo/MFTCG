#include <bits/stdc++.h>
using namespace std;
#define int long long int
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vpi;
double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
const int mod = 1e9 + 7;
string to_string(string s) {
return '"' + s + '"';
}
string to_string(const char* s) {
return to_string((string) s);
}
string to_string(bool b) {
return (b ? "true" : "false");
}
template <typename A, typename B>
string to_string(pair<A, B> p) {
return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
template <typename A>
string to_string(A v) {
bool first = true;
string res = "{";
for (const auto &x : v) {
if (!first) {
res += ", ";
}
first = false;
res += to_string(x);
}
res += "}";
return res;
}
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
cerr << to_string(H) << " " ;
debug_out(T...);
}
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define RESET(a,b) memset(a, b, sizeof(a))
#define EB emplace_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr,sz) arr, arr + sz
#define size(v) (int)v.size()
#define endl "\n"
#define UMO unordered_map
#define USO unordered_set
#define setBits(n) __builtin_popcountll(n)
#define MX *max_element
#define MN *min_element
#define TC int t; cin >> t; while (t--)
void Panda() {
int x, y;
cin >> x >> y;
if(x * 2 == y || x * 4 == y || (x * 4 - y) % 2 == 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
int32_t main() {
FAST;
Panda();
return 0;
}
