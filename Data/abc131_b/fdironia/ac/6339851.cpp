#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int s = 0;
for (int i = 0; i < n; i++) {
s += l + i;
}
int ans = 0;
for (int i = 0; i < n; i++) {
int cur = 0;
for (int j = 0; j < n; j++) {
if (j != i) {
cur += l + j;
}
}
if (abs(cur - s) < abs(ans - s)) {
ans = cur;
}
}
cout << ans << endl;
return 0;
}
