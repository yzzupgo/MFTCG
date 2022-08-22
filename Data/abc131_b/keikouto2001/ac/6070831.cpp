#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int ans = 0;
for(int i = 0; i < n; ++i) ans += l + i;
if(l >= 0) ans -= l;
else if(n + l - 1 < 0) ans -= n + l - 1;
cout << ans << endl;
}
