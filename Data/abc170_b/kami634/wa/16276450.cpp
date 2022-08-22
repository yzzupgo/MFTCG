#include <bits/stdc++.h>
#define ALL(obj) begin(obj), end(obj)
#define debug(x) cerr << #x << ": " << x << '\n'
using namespace std;
template <class T>
vector<T> make_vec(size_t a) {
return vector<T>(a);
}
template <class T, class... Ts>
auto make_vec(size_t a, Ts... ts) {
return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}
template <class T>
bool chmax(T &a, const T &b) {
if (a < b) {
a = b;
return 1;
}
return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
if (b < a) {
a = b;
return 1;
}
return 0;
}
using ll = long long;
using ull = unsigned long long;
const int INF = 1e9;
int main() {
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
if (i * 2 + (X - i) * 4 == Y) {
cout << "YES" << endl;
return 0;
}
}
cout << "NO" << endl;
return 0;
}
