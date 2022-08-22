#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n, k; cin >> n >> k;
int temp = k, sum = 0;
for (int i = 0; i < n; ++i)
{
if (temp == 0)
{
break;
}
if (k % 4 == 0)
{
temp = temp - 4;
sum = sum + 4;
}
else
{
temp = temp - 2;
sum += 2;
}
}
if (sum == k)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
