#include <bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
template<typename A, typename B> ostream &operator<<(ostream &os, const pair<A, B> &p) {
return os << '(' << p.first << ", " << p.second << ')';
}
template < typename T_container, typename T = typename enable_if < !is_same<T_container, string>::value, typename T_container::value_type >::type > ostream & operator<<(ostream &os, const T_container &v) {
os << '{';
string sep;
for(const T &x : v) {
os << sep << x, sep = ", ";
}
return os << '}';
}
void dbg_out() {
cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
cerr << ' ' << H;
dbg_out(T...);
}
#ifndef ACASSIO_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
#endif
int n, media;
cin >> n;
media = (n * 1.08) / 1;
if(media < 206) {
cout << "Yay!" << '\n';
} else if(media == 206) {
cout << "so-so" << '\n';
} else {
cout << ":(" << '\n';
}
}
