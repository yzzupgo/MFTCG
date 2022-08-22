#include <algorithm>
#include <cassert>
#include <climits>
#include <cstdio>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;
const int INF = 1e9;
const long long LINF = 1e18;
const double PI=3.14159265358979323846;
typedef priority_queue<int, vector<int>, greater<int>> priority_queue_asc;
int main() {
int X, Y;
cin >> X >> Y;
for (int a = 0; a <= 100; a++) {
for (int b = 0; b <= 100; b++) {
if ((a + b == X) && (2 * a + 4 * b == Y)) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
