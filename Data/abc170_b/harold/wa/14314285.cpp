#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define rep(i,m,n) for (lli i = m; i < (n); i++)
#define repe(i,m,n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define _GLIBCXX_DEBUG
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
const lli MOD = 1000000007;
const double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define pb push_back
#define eb emplace_back
#define mp make_pair
#pragma GCC optimize("Ofast")
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using vvli = vector<vlli>;
using vs = vector<string>;
using vvs = vector<vs>;
using vb = vector<bool>;
using vvb = vector<vb>;
using ll = long long;
template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
for (T &x : vec)
is >> x;
return is;
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> &vec)
{
for (int i = 0; i < vec.size(); i++)
{
os << vec[i] << (i + 1 == vec.size() ? "" : "");
}
return os;
}
template <typename T>
bool chmax(T &a, const T &b)
{
if (a < b)
{
a = b;
return true;
}
return false;
}
template <typename T>
bool chmin(T &a, const T &b)
{
if (a > b)
{
a = b;
return true;
}
return false;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
lli a, b, c, x, y, h, k, n, w, ans = 0, tmp = 0, count = 0;
string s, t;
vector<pair<string, pair<lli, lli>>> pr;
cin >> x >> y;
set<lli> d;
tmp = x * 4;
if (y <= tmp && y % 2 == 0)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
}
