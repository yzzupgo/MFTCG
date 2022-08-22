#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l, sum_l;
cin >> n >> l;
sum_l = n * (2 * l + n - 1) / 2;
if (n + l - 1 < 0)
sum_l -= n + l - 1;
else
sum_l -= max(0, l);
cout << sum_l << endl;
}
