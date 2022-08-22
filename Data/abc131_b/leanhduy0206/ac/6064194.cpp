#include <bits/stdc++.h>
using namespace std;
int main()
{
long L[1000],i;
long n,l,S = 0,dem;
cin >> n >> l;
long minf = 99999999;
for (i = 1; i <= n; i++)
{
L[i] = l + i - 1;
S += L[i];
minf = min(minf,abs(L[i]));
if (minf == abs(L[i])) dem = i;
}
cout << S - L[dem];
}
