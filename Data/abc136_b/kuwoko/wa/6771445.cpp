#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <climits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
typedef pair<int, int> ii;
typedef long long int64;
const int INF = 1 << 29;
const int MOD = 1e9 + 7;
int main() {
int n, ans = 0;
cin >> n;
for (int i = 1; i < n; ++i) {
string str = to_string(i);
ans += str.size() % 2 != 0;
}
cout << ans << endl;
return 0;
}
