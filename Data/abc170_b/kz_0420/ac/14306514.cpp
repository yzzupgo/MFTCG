#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <array>
#include <complex>
#include <string>
#include <utility>
#include <map>
#include <queue>
#include <list>
#include <functional>
#include <numeric>
#include <stack>
#include <tuple>
using namespace std;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 100000000;
const long long LINF = 1000000000000000000;
const long long MOD = 998244353;
const double EPS = 1e-6;
using pii = std::pair<int, int>;
using ll = long long;
using pLL = std::pair<ll, ll>;
#define SORT(v) std::sort(v.begin(), v.end())
#define RSORT(v) std::sort(v.rbegin(), v.rend())
constexpr auto PI = 3.14159265358979323846264338327950L;
int needleX[4] = { -1,0,1,0 };
int needleY[4] = { 0,1,0,-1 };
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int X,Y;
cin >> X >> Y;
int a = (4 * X - Y);
if (a % 2 != 0) {
cout << "No" << endl;
return 0;
}
a /= 2;
int b = X - a;
if (a>=0&&b>=0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
