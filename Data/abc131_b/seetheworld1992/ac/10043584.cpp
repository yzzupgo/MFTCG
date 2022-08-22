#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l; cin >> n >> l;
vector<int> c(n + 1);
int absMinIndex;
int tmp = 10000;
for (int i = 1; i <= n ; i++) {
c[i] = l + i - 1;
if (abs(c[i]) <= tmp) {
tmp = abs(c[i]);
absMinIndex = i;
}
}
int ans = 0;
for (int i = 1; i <= n; i++) {
if (i != absMinIndex) ans += c[i];
}
cout << ans << endl;
return 0;
}
