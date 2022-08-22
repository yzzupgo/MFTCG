#ifndef Local
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx")
#endif
#include <bits/stdc++.h>
using namespace std;
#define popCnt(x) (__builtin_popcountll(x))
#define sz(x) ((int)(x.size()))
#define all(v) begin(v), end(v)
typedef long long Long;
typedef long double Double;
template <class U, class V>
istream& operator>>(istream& is, pair<U, V>& p) {
is >> p.first >> p.second;
return is;
}
template <class T>
istream& operator>>(istream& is, vector<T>& v) {
for (auto& x : v) {
is >> x;
}
return is;
}
template <class T>
ostream& operator<<(ostream& os, vector<T>& v) {
for (auto& x : v) {
os << x << " ";
}
return os;
}
template <class T>
void ms_erase_one(multiset<T>& ms, const T value) {
ms.erase(ms.find(value));
}
int main() {
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifdef Local
freopen("test.in", "r", stdin);
#else
#define endl '\n'
#endif
int x, y;
cin >> x >> y;
int b = (y - 2 * x) / 2;
int a = x - b;
if (a >= 0 && b >= 0 && 2 * a + 4 * b == y) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
