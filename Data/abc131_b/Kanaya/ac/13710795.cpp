#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
#include <iomanip>
#include <set>
#include <ctime>
#include <tuple>
#include <bitset>
#include <assert.h>
#include <deque>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define rep(i,n) for (ll i = 0; i < n; i++)
#define debugA() cerr << "AAAAA" << endl
#define debug_() cerr << "-------------" << endl
#define debug(x) cerr << #x << ": " << x << endl
#define debug_vec(v) \
for (int i = 0; i < v.size(); i++) \
{ \
cout << v[i] << " "; \
} \
cout << endl;
using Graph = vector<vector<int>>;
int main()
{
int n, m;
cin >> n >> m;
vector<int> vec(n);
int MIN = 1001001001;
int ans = 0;
int ret;
for (int i = 0; i < n; i++)
{
vec[i] = m + i;
if (MIN > abs(vec[i]))
{
MIN = min(MIN, abs(vec[i]));
ret = vec[i];
}
ans += vec[i];
}
cout << ans - ret << endl;
return 0;
}
