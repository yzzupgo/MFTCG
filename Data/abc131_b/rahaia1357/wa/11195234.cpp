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
int x = 9999;
for (int i = 0; i < n; i++)
{
if (x > abs(l + i))
{
x = l + i;
}
}
cout << ans - x << endl;
}
