#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;
template <class T> ostream &operator<<(ostream &os, vector<T> V) {
os << "[ ";
for (auto v : V)
os << v << " ";
os << "]";
return os;
}
template <class T> ostream &operator<<(ostream &os, set<T> S) {
os << "{ ";
for (auto s : S)
os << s << " ";
return os << "}";
}
template <class L, class R> ostream &operator<<(ostream &os, map<L, R> M) {
os << "{ ";
for (auto m : M)
os << "(" << m.first << ":" << m.second << ") ";
return os << "}";
}
template <class L, class R> ostream &operator<<(ostream &os, pair<L, R> P) {
return os << "(" << P.first << "," << P.second << ")";
}
void solve() {
int X, Y;
cin >> X >> Y;
if(Y >= 2 * X && Y <= 4 * X && X % 2 == 0 && Y % 2 == 0) {
cout << "Yes" << endl;
}
else cout << "No" << endl;
}
int32_t main() {
int t;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}
