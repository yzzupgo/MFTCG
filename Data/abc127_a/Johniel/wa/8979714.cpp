#include <bits/stdc++.h>
#define each(i,c) for (auto& i : c)
#define unless(cond) if (!(cond))
using namespace std;
typedef long long int lli;
typedef unsigned long long ull;
typedef complex<double> point;
template<typename P, typename Q> ostream& operator << (ostream& os, pair<P, Q> p) { os << "(" << p.first << "," << p.second << ")"; return os; }
template<typename P, typename Q> istream& operator >> (istream& is, pair<P, Q>& p) { is >> p.first >> p.second; return is; }
template<typename T> ostream& operator << (ostream& os, vector<T> v) { os << "("; each (i, v) os << i << ","; os << ")"; return os; }
template<typename T> istream& operator >> (istream& is, vector<T>& v) { each (i, v) is >> i; return is; }
template<typename T> inline T setmax(T& a, T b) { return a = std::max(a, b); }
template<typename T> inline T setmin(T& a, T b) { return a = std::min(a, b); }
int main(int argc, char *argv[])
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int a, b;
while (cin >> a >> b) {
if (13 <= a) cout << b << endl;
if (6 <= a < 13)cout << b/2 << endl;
if (a < 6)cout << 0 << endl;
}
return 0;
}
