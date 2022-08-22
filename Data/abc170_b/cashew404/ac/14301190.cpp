#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <queue>
#define rep(i,n) for (ll i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define P_B push_back
#define PO_B pop_back
#define E_B emplace_back
#define fi first
#define se second
#define debug(x) cout << #x << ": " << x << endl
using namespace std;
using ll = long long;
using Pii = pair<int,int>;
using Pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;
using VVI = vector<vector<int> >;
using VVL = vector<vector<ll> >;
void Main(){
ll x, y, a, b;
bool ans = true;
cin >> x >> y;
if(y%2 != 0) ans = false;
a = x*2 - y/2;
b = y/2 - x;
if(a < 0 || b < 0 || a > x || b > x) ans = false;
if(ans) cout << "Yes" << endl;
else cout << "No" << endl;
}
int main()
{
cin.tie(nullptr);
ios_base::sync_with_stdio(false);
cout << fixed << setprecision(15);
Main();
return 0;
}
