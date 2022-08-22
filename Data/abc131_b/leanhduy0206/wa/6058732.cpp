#include <bits/stdc++.h>
using namespace std;
int main()
{
long L[1000],i;
long n,l,S = 0;
cin >> n >> l;
for (i = 1; i <= n; i++)
{
L[i] = l + i - 1;
S += L[i];
}
long minf = 9999999;
for (i = 1; i <= n; i++)
{
minf = min(minf,abs(S - L[i]));
}
cout << S - minf;
}
