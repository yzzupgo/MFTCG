#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int res = 0;
if (l > 0) {
for (int i = 2; i <= n; i++) {
res += l + i - 1;
}
cout << res << endl;
}
if (l <= 0 && l + n - 1 >= 0) {
for (int i = 1; i <= n; i++) {
res += l + i - 1;
}
cout << res << endl;
}
if (l + n - 1 < 0) {
for (int i = 1; i <= n - 1; i++) {
res += l + i - 1;
}
cout << res << endl;
}
}
