#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int ans = 0;
for(int i = 1; i <= n; ++i)
{
if(i == 10 || i == 1000) i *= 10;
if(i <= n) ++ans;
}
cout << ans << endl;
}
