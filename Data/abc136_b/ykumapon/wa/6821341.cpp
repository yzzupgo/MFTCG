#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int ans = 0;
for (int i = 1; i <= n; i++)
{
int dig = to_string(i).length();
if (dig % 2 == 0)
{
ans++;
}
}
cout << ans << endl;
}
