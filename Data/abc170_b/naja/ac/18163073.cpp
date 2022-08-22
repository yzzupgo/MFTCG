#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>
#include <limits>
#include<set>
#include <algorithm>
#include<math.h>
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using namespace std;
int main() {
int x, y; cin >> x >> y;
string ans = "No";
rep(i, x+1)rep(j, x+1) {
if ((2 * i + 4 * j) == y && (i + j) == x)ans="Yes";
}
cout << ans << endl;
}
