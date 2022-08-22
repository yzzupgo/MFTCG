#include<iostream>
#include<cstdio>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>
#include<limits>
#include<bitset>
#include<functional>
#include<type_traits>
#include<queue>
#include<stack>
#include<array>
#include<random>
#include<utility>
#include<cstdlib>
#include<ctime>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ALL(obj) (obj).begin(), (obj).end()
#define ALLr(obj) (obj).rbegin(), (obj).rend()
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,s,n) for(int i=s;i<n;i++)
const int INF = 1e11;
const double EPS = 1e-11;
int divRoundUp(const int& a, const int& b) { return (a + b - 1) / b; }
int roundOff(const double& a) { return (int)(a + 0.5); }
int sgn(const ld& r) { return (r > EPS) - (r < -EPS); }
int sgn(const ld& a, const ld& b) { return sgn(a - b); }
using namespace std;
inline void Main() {
int a, b; cin >> a >> b;
int ans = 0;
if (a >= 13) {
ans = b;
}
else if (6 <= a && a <= 12) {
ans = b / 2;
}
cout << ans << endl;
}
signed main() {
cin.tie(0);
ios::sync_with_stdio(false);
Main();
return 0;
}
