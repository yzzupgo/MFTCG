#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <cmath>
#include <climits>
#include <iomanip>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
const int INF = (1<<30)-1;
const ll LINF = 1e18;
#define rep(i,n) for (int i = 0; i < n; i++)
template<class T>
bool chmax(T &a, T b) {if (a < b) {a = b;return true;}else return false;}
template<class T>
bool chmin(T &a, T b) {if (a > b) {a = b;return true;}else return false;}
int main() {
int x, y; cin >> x >> y;
for (int i = 0; i <= x; i++) {
int j = x-i;
if (2*i + 4*j == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
