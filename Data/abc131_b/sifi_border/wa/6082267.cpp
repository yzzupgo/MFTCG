#include "bits/stdc++.h"
using namespace std;
void solve(void)
{
int n, l;
cin >> n >> l;
int sum = 0, m = 1<<10;
for (int i = 0; i < n; i++)
{
int x = i + l;
if (abs(x) < m)
{
m = x;
}
sum += x;
}
cout << sum - m << endl;
}
int main()
{
solve();
return 0;
}
