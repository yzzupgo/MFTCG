#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
typedef int64_t ll;
int main () {
int x, y;
cin >> x >> y;
bool flag = false;
for(int i = 0; i < x; ++i) {
if (y == ((x - i) * 2 + i * 4)) {
flag = true;
}
if (y == ((x - i) * 4 + i * 2)) {
flag = true;
}
}
if (flag) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
