#include <algorithm>
#include <iostream>
#include <cstring>
#include <math.h>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <iomanip>
using namespace std;
#define pb push_back
typedef long long ll;
typedef long double ld;
#define si(x) (int)x.size()
#define all(x) x.begin(), x.end()
int x, y;
void solve (){
cin >> x >> y;
cout << (x * 2 == y || y % x == 0 and x > 1 ? "No" : "Yes");
}
int main () {
ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
int tc = 1;
while (tc --) {
solve();
}
return 0;
}
