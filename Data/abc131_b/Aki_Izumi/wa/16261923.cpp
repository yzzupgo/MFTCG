#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tl3;
const int BIG_NUM = 1e9;
const ll INF = 1000000000000000000;
const ll MOD = 1e9 + 7;
int main() {
int n, l;
cin >> n >> l;
ll sum = 0;
for (int i = 0; i < n; i++) {
sum += l - i;
}
int ans = BIG_NUM;
for (int i = 0; i < n; i++) {
int a = sum - (l - i);
if (abs(sum - ans) > abs(sum - a)) {
ans = a;
}
}
cout << ans << endl;
}
