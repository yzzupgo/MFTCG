#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
#define ff(i,a,b) for(int i = a; i <= b; i++)
#define fb(i,b,a) for(int i = b; i >= a; i--)
#define trav(a,x) for (auto& a : x)
#define sz(a) (int)(a).size()
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1000000007;
const int inf = 1e9 + 5;
const int mxN = 200005;
int A, B;
int main() {
cin.tie(0)->sync_with_stdio(0);
cin >> A >> B;
if(A <= 5)cout << 0 << '\n';
if(A >= 6 && A <= 12)cout << B / 2 << '\n';
if(A > 12)cout << B << '\n';
return 0;
}
