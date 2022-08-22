#include <iostream>
using namespace std;
int Digit(int num)
{
int digit = 0;
while (0 < num)
{
digit++;
num = num / 10;
}
return digit;
}
int main()
{
int n, ans = 0;
cin >> n;
for (int i = 0; i <= n; i++)
{
if (Digit(i) % 2 == 1)
{
ans++;
}
}
cout << ans << endl;
}
