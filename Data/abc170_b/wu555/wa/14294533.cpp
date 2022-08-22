#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <cassert>
#include <fstream>
#include <iomanip>
#include <stack>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll mod = 1e9 + 7;
const ll mmod = 998244353;
vector<ll> dx = {1, -1, 0, 0};
vector<ll> dy = {0, 0, 1, -1};
vector<vector<ll>> g;
vector<vector<ll>> par;
vector<vector<ll>> dp;
vector<ll> d;
int main() {
cin.tie(0);
ios_base::sync_with_stdio(0);
ll x, y;
cin >> x >> y;
for (int i = 0; i < x; ++i)
{
ll a = i;
ll b = x - i;
if (((x - i) * 4ll + i * 2ll) == y)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
