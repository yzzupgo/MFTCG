#include <cstdio>
#include <cstring>
#include <cmath>
#include <utility>
#include <iostream>
#include <functional>
#include <bitset>
#include <algorithm>
#include <vector>
#include <forward_list>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#define rep(i,s,g) for ((i) = (s); (i) < (g); ++(i))
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll MOD = 1e9 + 7;
const ll INF = (1ll << 60);
int main(void)
{
int n, l;
cin >> n >> l;
int ans = (2 * l + n - 1) * n / 2;
if (l > 0)
{
cout << ans - l << endl;
}
else if (l < 0 && l + n > 0)
{
cout << ans << endl;
}
else if (l < 0 && l + n - 1 < 0)
{
cout << ans - (l + n - 1) << endl;
}
}
