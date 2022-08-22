#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
const ll INF = 1LL << 60;
const ll MOD = 1000000007;
template <class T>
bool chmax(T &a, const T &b) {
return (a < b) ? (a = b, 1) : 0;
}
template <class T>
bool chmin(T &a, const T &b) {
return (b < a) ? (a = b, 1) : 0;
}
template <class C>
void print(const C &c, std::ostream &os = std::cout) {
std::copy(std::begin(c), std::end(c), std::ostream_iterator<typename C::value_type>(os, " "));
os << std::endl;
}
int main() {
int n;
cin >> n;
if (n / 10 == 0) {
cout << n << "\n";
} else if (n / 100 == 0) {
cout << 9 << "\n";
} else if (n / 1000 == 0) {
cout << n - 90 << "\n";
} else if (n / 10000 == 0) {
cout << 909 << "\n";
} else if (n / 100000 == 0) {
cout << n - 9000 - 90 << "\n";
} else {
cout << 99999 - 9000 - 90 << "\n";
}
return 0;
}
