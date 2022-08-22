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
int n;
cin >> n;
int ans = 0;
for (int i = 1; i <= n; i++) {
int cnt = 0;
int num = i;
while (num > 0) {
cnt++;
num /= 10;
}
if (num % 2 == 1) {
ans++;
}
}
cout << ans << endl;
}
