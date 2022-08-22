#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int absmin = INT_MAX, ans = 0;
for (int i = 0; i < n; i++) {
ans += l + i;
absmin = min(abs(l + i), absmin);
}
cout << ans - absmin << endl;
return 0;
}
