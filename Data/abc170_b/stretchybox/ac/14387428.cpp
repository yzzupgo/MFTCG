#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> P;
constexpr ll INF = 1e16;
constexpr ll INM = 114514;
constexpr ll MOD = 1e9 + 7;
constexpr ld EPS = 1e-12;
constexpr ll dx[4] = {1, 0, -1, 0};
constexpr ll dy[4] = {0, 1, 0, -1};
void IOS() { ios::sync_with_stdio(false), cin.tie(0); }
template <typename T>
void dump(T x) { cout << x << endl; }
void dumpf(ld x, ll t) { cout << setprecision(t) << fixed << x << endl; }
template <typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val) {
fill((T *)array, (T *)(array + N), val);
}
vector<string> split(const string &s, char delim) {
vector<string> elems;
string item;
for (char ch : s) {
if (ch == delim) {
if (!item.empty())
elems.push_back(item);
item.clear();
} else {
item += ch;
}
}
if (!item.empty())
elems.push_back(item);
return elems;
}
int main() {
IOS();
ll x, y;
cin >> x >> y;
if ((y - 2 * x) % 2 == 0 && (y - 2 * x) / 2 >= 0 && (4 * x - y) % 2 == 0 && (4 * x - y) / 2 >= 0) {
dump("Yes");
} else {
dump("No");
}
}
