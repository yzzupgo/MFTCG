#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l, sum, tmp;
cin >> n >> l;
for (int i = 1; i <= n; i++) {
sum += (l + i - 1);
}
if (l < 0 && n < l * (-1)) {
sum -= (l + n -1);
}
if (l > 0) {
sum -= (l +1 -1);
}
cout << sum << endl;
return 0;
}
