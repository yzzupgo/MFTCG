#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
#define int long long
int cnt[10];
signed main() {
ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int x, y; cin >> x >> y; int flag = 0;
if (y % 2 != 0) flag = 1;
else {
int mm = y / 2; int mi;
if (y % 4 != 0) {
y -= 2;
mi = y / 4 + 1;
}
else mi = y / 4;
if (x<mi || x>mm) flag = 1;
}
if (flag == 0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
