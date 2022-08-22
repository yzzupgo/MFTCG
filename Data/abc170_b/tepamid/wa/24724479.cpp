#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <random>
#include <set>
#include <queue>
#ifdef TEPAMID
#define debug(x) cerr << #x << " = " << x << endl;
#define debug_v(v) \
{ \
cerr << #v << " = "; \
for (auto x : v) \
cerr << x << " "; \
cerr << endl; \
}
#define debug_vp(v) \
{ \
cerr << #v << " = "; \
for (auto [x, y] : v) \
cerr << x << "," << y << " "; \
cerr << endl; \
}
#else
#define debug(x) 0;
#define debug_v(x) 0;
#define debug_vp(x) 0;
#endif
using namespace std;
#define fo(i,n) for (int i = 0; i < n; ++i)
#define foback(i,n) for (int i = n - 1; i >= 0; --i)
#define fo1(i,n) for (ll i = 1; i <= n; ++i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define makeunique(x) sort(all(x)), (x).resize(unique(all(x)) - (x).begin())
typedef long long ll;
void fastio()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
}
void one();
int main()
{
fastio();
int t = 1;
fo(i, t)
{
one();
}
return 0;
}
void one () {
int naims, nlegs;
cin >> naims >> nlegs;
for(int ncrane=0; ncrane<=1000; ncrane++) {
int n = (nlegs - 2*ncrane);
if ( n % 4 == 0) {
cout << "Yes\n";
return;
}
}
cout << "No\n";
}
