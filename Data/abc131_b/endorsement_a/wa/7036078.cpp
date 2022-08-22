#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int n, l;
int sum = 0;
cin >> n >> l;
if (l > 0)
{
for (int i = 1; i < n; i++)
{
sum += l + i;
}
cout << sum << endl;
}
else
{
if (l+n < 0)
{
for (int i = 0; i < n - 1; i++)
{
if (l + i != 0)
{
sum += l + i;
}
}
cout << sum << endl;
}
else
{
for (int i = 0; i < n; i++)
{
if (l + i != 0)
{
sum += l + i;
}
}
cout << sum << endl;
}
}
return 0;
}
