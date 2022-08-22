#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using P = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep2(i,x,n) for (int i = x; i < (n); i++)
#define all(n) begin(n), end(n)
const int INF = 1e9;
const long long llINF = 1LL << 60;
#define endl '\n'
#define yn(a) cout << ((a) ? "yes" : "no") << endl
#define YN(a) cout << ((a) ? "YES" : "NO") << endl
void Solve() {
int a, b;
cin >> a >> b;
if (a >= 13)
cout << b << endl;
else if (6 <= a && a <= 12)
cout << b / 2 << endl;
else
cout << 0 << endl;
auto f = []() {};
}
int main() {
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(15);
Solve();
return 0;
}
