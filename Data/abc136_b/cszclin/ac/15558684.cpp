#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <queue>
#include <cmath>
using namespace std;
int main() {
int n;
cin >> n;
int res = 0;
for (int i = 1; i <= n; i *= 100) {
res += min(n, i * 10 - 1) - i + 1;
}
cout << res << endl;
}
