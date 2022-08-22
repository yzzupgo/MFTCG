#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = std::pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;
using vvi = vector<vi>;
using vs = vector<string>;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)((x).size())
#define arrsz(x) (int) (sizeof((x))/sizeof((x)[0]))
#define LSOne(S) (S & (-S))
#define isBitSet(S,i) ((S >> i) & 1)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
template<typename T>
void output_vector(const vector<T> &v, int start = -1, int end = -1) {
if (start < 0) start = 0;
if (end < 0) end = int(v.size());
for (int i = start; i < end; i++)
cout << v[i] << " ";
cout << endl;
}
void setIn(string s) { freopen(s.c_str(),"r",stdin); }
void setOut(string s) { freopen(s.c_str(),"w",stdout); }
void unsyncIO() { ios_base::sync_with_stdio(0); cin.tie(0); }
void setIO(string s = "") {
unsyncIO();
if (sz(s)) { setIn(s+".in"), setOut(s+".out"); }
}
int main()
{
int x, y;
cin >> x >> y;
if ((4 * x - y) % 2 == 0 && (4 * x - y) >= 0)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
}
