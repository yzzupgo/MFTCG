#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int a[n];
int ans = INT_MAX;
bool min = false;
rep(i, n)
{
a[i] = l+i;
if (ans > abs(a[i]))
{
ans = abs(a[i]);
if (a[i] < 0)
{
min = true;
}
}
}
int sum = accumulate(a, a+n, 0);
if (min)
{
cout << sum+ans << endl;
}
else
{
cout << sum-ans << endl;
}
return 0;
}
