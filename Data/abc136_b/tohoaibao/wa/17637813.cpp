#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define forn(i,a,b) for (int i = (a); i < (b); ++i)
string to_string(char c) {
return string(1, c);
}
string to_string(string s) {
return s;
}
template<class A, class B> string to_string(pair<A, B> p) {
return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
template<class T> string to_string(T v) {
bool f = true;
string res = "{";
for (auto &x : v) {
if (!f) {
res += ", ";
}
f = false;
res += to_string(x);
}
res += "}";
return res;
}
void DBG() {
cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
cerr << to_string(h);
if(sizeof...(t))
cerr << ", ";
DBG(t...);
}
#ifdef LOCAL
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 42
#endif
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin >> n;
int ans = 0;
int l = sz(to_string(n));
if (l & 1) {
for (int i = 1; i <= l - 2; i += 2) {
ans += 9*pow(10, i - 1);
}
ans += n % (int)(pow(10, l - 1)) + 1;
} else {
for (int i = 1; i <= l - 1; i += 2) {
ans += 9*pow(10, i - 1);
}
}
cout << ans << "\n";
return 0;
}
