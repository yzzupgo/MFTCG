#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <iomanip>
#include <map>
#include <stdio.h>
#include <queue>
#define rep(i,n) for (int i=0;i<(n);++i)
#define REP(i,n) for (int i=0;i<=(n);++i)
#define all(x) (x).begin(), (x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
typedef long long ll;
const int INF = 10000000;
int main() {
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; ++i) {
if(2 * i + 4 * (x - i) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
