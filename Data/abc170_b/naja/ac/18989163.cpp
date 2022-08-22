#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <limits>
#include<set>
#include <algorithm>
#include<math.h>
#include <stdexcept>
#include <map>
#include <iomanip>
#define rep(i,n) for(int i=0;i<n;i=i+1)
#define rep1(i,n) for(int i=1;i<n;i=i+1)
using ll = long long;
using namespace std;
const int mod = 1e9 + 7;
int main() {
int x, y; cin >> x >> y;
string ans = "No";
rep(i, x + 1)rep(j,x+1) {
if ((2 * i + 4 * j) == y and (i + j) == x) {
cout << "Yes" << endl;
return 0;
}
}
cout << ans << endl;
return 0;
}
