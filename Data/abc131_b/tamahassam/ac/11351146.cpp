#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#include<math.h>
#include<iomanip>
#include<functional>
using namespace std;
#define ll long long
using vt = ll;
#define rep(i,n) for (vt i = 0; i < (vt)(n); i++)
#define reps(i,s,n) for(vt i = (vt) (s); i < (vt) (n); i++)
#define all(v) v.begin(), v.end()
#define P pair<int, int>
const ll MOD = 1000000007;
int main() {
ll n, l;
cin >> n >> l;
ll yotei = n * (2 * l + n - 1) / 2;
ll sa = 1000000000;
ll ans = 1000000000;
reps(i, 1, n + 1) {
if (sa > abs(l + i - 1)) {
ans = i;
sa = abs(l + i - 1);
}
}
cout << yotei - (l + ans - 1);
return 0;
}
