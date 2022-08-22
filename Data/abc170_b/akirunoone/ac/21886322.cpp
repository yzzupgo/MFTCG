#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <vector>
using namespace std;
using ll = int64_t;
template <class T>
istream& operator>>(istream& is, vector<T>& v) {
for (auto& a : v) cin >> a;
return is;
}
template <class T>
istream& operator>>(istream& is, vector<pair<T, T>>& v) {
for (auto& a : v) cin >> a.first >> a.second;
return is;
}
template <class T>
istream& operator>>(istream& is, vector<tuple<T, T, T>>& v) {
for (auto& a : v) {
T a1, a2, a3;
cin >> a1 >> a2 >> a3;
a = {a1, a2, a3};
}
return is;
}
template <class T>
ostream& operator<<(ostream& os, vector<T>& v) {
for (auto& a : v) os << a << " ";
os << endl;
return os;
}
template <class T>
inline bool chmax(T& a, T b) {
if (a < b) { a = b; return true; }
return false;
}
template <class T>
inline bool chmin(T& a, T b) {
if (a > b) { a = b; return true; }
return false;
}
#define all(v) begin(v), end(v)
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using veci = vector<int>;
using vecll = vector<ll>;
using Pi = pair<int, int>;
using Pll = pair<ll, ll>;
using Ti = tuple<int, int, int>;
int main() {
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
int j = X - i;
if (2 * i + 4 * j == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
