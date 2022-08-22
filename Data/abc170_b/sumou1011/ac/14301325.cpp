#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <complex>
#include <ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef int itn;
const ll LINF = 1e18;
const int INF = 1e9;
#define vvint(vec,n,m,l) vector<vector<int>> vec(n, vector<int>(m,l));
#define vvll(vec,n,m,l) vector<vector<ll>> vec(n,vector<ll>(m,l));
#define vint vector<int>
#define pint pair<int,int>
#define rep(i,a) for(ll i=0;i<(a);i++)
#define all(x) (x).begin(),(x).end()
#define debug system("pause")
#define ret return 0
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
using Graph = vector<vector<ll>>;
#define ketasitei setprecision(15)
const ll MOD = 1000000007;
const double PI = 3.1415926535897932;
int main(void)
{
cin.tie(0);
ios::sync_with_stdio(false);
ll x, y;
cin >> x >> y;
ll ans1, ans2;
ans2 = (y - 2 * x) / 2;
ans1 = (y - 4 * ans2) / 2;
if (ans2<0 || ans1 < 0 || ans1+ans2!=x || ans1*2+ans2*4!=y)
{
cout << "No" << endl;
}
else
{
cout << "Yes" << endl;
}
return 0;
}
