#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int ans = 0;
for(int i = 0; i < n; ++i) ans += l + i;
if(l >= 0) ans -= l;
else ans -= n + l - 1;
cout << ans << endl;
}
