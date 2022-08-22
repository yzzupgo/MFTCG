#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l, sum;
cin >> n >> l;
for (int i = 1; i <= n; i++) {
sum += (l + i - 1);
}
if (l < 0 && n <= l * (-1)) {
sum -= (l + n -1);
}
if (l > 0) {
sum -= l;
}
cout << sum << endl;
return 0;
}
