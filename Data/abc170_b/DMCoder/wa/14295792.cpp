#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define repa(i,a,b) for (auto i = (a); i <= (b); i++)
#define repd(i,a,b) for (auto i = (a); i >= (b); i--)
#define rep(i,n) for (int i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define zero(a) memset((a), 0, sizeof (a))
#define sz(x) (int)(x).size()
#define debug(x) cout << (x) << "\n";
#define mp make_pair
#define pb push_back
constexpr auto inf = numeric_limits<int>().max();
constexpr auto llinf = numeric_limits<ll>().max();
template<typename ForwardIterator>
void dump(ForwardIterator st, ForwardIterator en) {
for (auto it = st; it != en; it++) {
cout << *it << " ";
}
cout << "\n";
}
template<typename ForwardIterator>
void dump_map(ForwardIterator st, ForwardIterator en) {
for (auto it = st; it != en; it++) {
cout << (*it).first << ":" << (*it).second << " ";
}
cout << "\n";
}
void solve() {
int x, y;
cin >> x >> y;
if (y % 2 == 0) {
cout << "Yes";
} else {
cout << "No";
}
cout << "\n";
}
int main() {
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
solve();
return 0;
}
