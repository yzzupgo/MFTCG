#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
int n;
int num;
int ans=0;
int i;
cin >> n;
num = to_string(n).length();
for (i = 1; i < num; i += 2)
{
ans += 9 * (int)(pow(10, i-1) + 0.5);
}
if (num % 2 != 0)
{
n -= (int)(pow(10, num - 1) + 0.5);
}
cout << ans + n + 1;
return 0;
}
