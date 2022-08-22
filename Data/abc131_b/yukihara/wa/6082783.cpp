#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int max = l + n - 1;
int min = max - (n - 1);
int ans = 0;
if (min < 0 && max > 0) {
for (int m = max; m > min; m--) {
ans += m;
}
cout << ans << endl;
return 0;
}
else if (min >= 0) {
for (int m = max; m >= min; m--) {
ans += m;
}
ans -= min;
cout << ans << endl;
return 0;
}
else if (max <= 0) {
for (int m = max; m > min; m--) {
ans += m;
}
ans + max;
cout << ans << endl;
return 0;
}
}
