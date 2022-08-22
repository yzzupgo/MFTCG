#include <bits/stdc++.h>
using namespace std;
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep; for (const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename T, size_t size> ostream& operator<<(ostream &os, const array<T, size> &arr) { os << '{'; string sep; for (const auto &x : arr) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
using ll = int64_t;
constexpr ll mod = ll(1e9 + 7);
int main () {
ios::sync_with_stdio(0); cin.tie(0);
int TT = 1;
while (TT--) {
ll x,y;
cin >> x >> y;
bool found = false;
for (int n_crane = 0; n_crane <= x; ++n_crane) {
int n_turtle = x - n_crane;
int n_legs = n_crane*2 + n_turtle*4;
if (n_legs == y) {
found = true;
break;
}
}
if (found) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
}
