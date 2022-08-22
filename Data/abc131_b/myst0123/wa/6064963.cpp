#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int n, l, sum = 0, min = 1e9;
cin >> n >> l;
for (int i = 1; i <= n; i++) {
int a = l + i - 1;
sum += a;
if (abs(a) < min) min = abs(a);
}
cout << sum - min << endl;
return 0;
}
