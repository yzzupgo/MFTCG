#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <cassert>
#include <bitset>
#include <tuple>
#include <stack>
using ll = long long;
#define MOD 1000000007
using namespace std;
int main() {
int x, y; cin >> x >> y;
if ((y-2*x)%2 == 0 && y <= 4*x && y-2*x >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
