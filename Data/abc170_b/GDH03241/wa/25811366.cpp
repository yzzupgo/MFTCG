#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define repp(i,st,en) for (ll i = (ll)st; i < (ll)(en); i++)
#define repm(i,st,en) for (ll i = (ll)st; i >= (ll)(en); i--)
#define All(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
template<class in_chmax> void chmax(in_chmax &x, in_chmax y) {x = max(x,y);}
template<class in_chmin> void chmin(in_chmin &x, in_chmin y) {x = min(x,y);}
using P = pair<int, int>;
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
for (int j = 0; j <= x; j++) {
if (i * 2 + j * 4 == y) {
cout << "Yes";
return 0;
}
if (i + j > x) break;
}
}
cout << "No";
return 0;
}
