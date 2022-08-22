#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define per(i,n) for (int i = (n - 1); i >= 0; --i)
#define rep2(i,l,r) for (int i = (l); i < (r); ++i)
#define per2(i,l,r) for (int i = (r - 1); i >= (l); --i)
#define all(a) a.begin(), a.end()
#define sz(x) x.size()
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define yn(p) cout << (p?"Yes":"No") << endl;
#define Pr pair<ll,ll>
#define Tp tuple<ll,ll,ll>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
const int INF = 1000000000;
const int MOD = 1000000007;
const ll llINF = 1000000000000000000;
void solve() {
int A, B;
cin >> A >> B;
cout << max({A+B, A-B, A*B}) << endl;
}
int main() {
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(15);
solve();
return 0;
}
