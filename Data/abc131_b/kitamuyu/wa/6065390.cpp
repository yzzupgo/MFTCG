#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int sum = 0;
int a[n + 1];
if (l >= 0)
{
for (int i = 2; i <= n; i++)
{
sum += l + i - 1;
}
}
else if (l > -(n + 1) && l < 0)
{
for (int i = 1; i <= n; i++)
{
sum += l + i - 1;
}
}
else
{
for (int i = 1; i < n; i++)
{
sum += l + i - 1;
}
}
cout << sum << endl;
return 0;
}
