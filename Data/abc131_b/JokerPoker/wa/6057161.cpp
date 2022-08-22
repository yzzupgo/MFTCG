#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int ans = n;
for (int i = 0; i < n; i++) {
if (abs(l + i) < abs(ans)) {
ans = l + i;
}
}
cout << l * n + (n - 1) * n / 2 - ans << endl;
return 0;
}
