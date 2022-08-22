#include <bits/stdc++.h>
using namespace std;
template <class T>
void chmax(T& a, T b) {
a = max(a,b);
}
template <class T>
void chmin(T& a, T b) {
a = min(a,b);
}
#define rep(i,a,b) for (ll i = a; i < b; i++)
#define all(container) container.begin(), container.end()
typedef long l;
typedef long long ll;
typedef pair<int, int> ipi;
typedef pair<ll, ll> lpl;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef vector<vector<vector<ll>>> vvvl;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;
#define MOD 1'000'000'007LL
ll LLINF = LONG_LONG_MAX / 2;
int main() {
int x, y;
cin >> x >> y;
int Y = y-2*x;
if (Y%2) {
cout << "No";
} else if (x - Y/2 >= 0) {
cout << "Yes";
} else {
cout << "No";
}
return 0;
}
