#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
*this << "[";
for (auto it = d.b; it != d.e; ++it)
*this << ", " + 2 * (it == d.b) << *it;
ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using ll = long long;
const int INF32 = static_cast<int>(1e9);
const int64_t INF64 = static_cast<int64_t>(1e18);
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<typename T> void read_vector(vector<T>& v){for(T& e : v)cin>>e;}
template<typename T> void output_vector(vector<T>& v){for(int i=0;i<(int)v.size();i++){cout<<v[i]<<"\n "[i!=(int)v.size()-1];}}
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
for (int i = 0; i <= 100; i++) {
for (int j = 0; j <= 100; j++) {
if ((i * 2 + j * 4) == y && (i + j) == x) {
cout << "Yes" << "\n";
return 0;
}
}
}
cout << "No" << "\n";
return 0;
}
