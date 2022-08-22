#include <bits/stdc++.h>
using namespace std;
#define INF 10000
int main(void)
{
int n, l;
cin >> n >> l;
int m = INF;
int minus = 0;
int sum = 0;
for (int i = l; i < l + n; ++i)
{
sum += i;
if (m > abs(i))
{
m = abs(i);
minus = i;
}
}
cout << m << endl;
cout << sum - minus << endl;
return 0;
}
