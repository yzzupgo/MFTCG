#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int sum = 0;
int d = l + n - 1;
for (int i = 1; i <= d; i++)
sum += i;
if (d * l <= 0)
{
cout << sum << endl;
return 0;
}
int v = sum - l;
if (l < 0)
v = sum - d;
cout << v << endl;
}
