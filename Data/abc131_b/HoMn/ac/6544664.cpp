#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int absmin = INT_MAX, ans = 0, min = l;
for (int i = 0; i < n; i++) {
ans += l + i;
if (absmin > abs(l + i)) {
absmin = abs(l + i);
min = l + i;
}
}
cout << ans - min << endl;
return 0;
}
