#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)n; i++)
int main()
{
int n, l;
cin >> n >> l;
int min = 1000;
int sum = 0;
rep(i, n)
{
if (min > abs(l + i))
min = abs(l + i);
sum += l + i;
}
if (l + n > 0)
cout << sum - min << endl;
else
cout << sum + min << endl;
return 0;
}
