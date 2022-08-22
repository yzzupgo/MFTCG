#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
#define int long long
#define mp make_pair
#define pb push_back
#define sz(x) ((int)((x).size()))
#define all(v) (v).begin(), (v).end()
#define endl "\n"
#define debug(x) cerr << __LINE__ << ' ' << #x << ':' << (x) << '\n'
#define files(name) ifstream fin(name".in"); ofstream fout(name".out");
template<typename T> istream &operator>>(istream &is, vector<T> &vec){ for (auto &v : vec) is >> v; return is; }
template<typename T> ostream &operator<<(ostream &o, vector<T> &vec) { for (auto &v : vec) o << v << ' '; return o; }
const int mod = 1e9 + 7;
const int mxN = 3e18;
const int inf = 3e18;
void solve() {
int x, y;
cin >> x >> y;
for(int i=0; i<=x; ++i) {
int j=x-i;
if(i*2+j*4==y) {
cout << "Yes\n";
return;
}
}
cout << "No\n";
}
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(0), cout.tie(0);
#ifdef ONPC
auto _time_begin = std::chrono::high_resolution_clock::now();
#endif
int tt=1;
while(tt--) {
solve();
}
#ifdef ONPC
auto _time_end = std::chrono::high_resolution_clock::now();
cerr << setprecision(4) << fixed;
cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(_time_end - _time_begin).count() << " seconds" << endl;
#endif
return 0;
}
