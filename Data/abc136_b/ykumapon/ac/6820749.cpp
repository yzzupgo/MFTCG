#include <bits/stdc++.h>
using namespace std;
int GetDigit(int num)
{
int digit = 0;
while (num != 0)
{
num /= 10;
digit++;
}
return digit;
}
int main()
{
int n;
cin >> n;
int ans = 0;
for (int i = 1; i <= n; i++)
{
int dig = GetDigit(i);
if (dig == 1 || dig == 3 || dig == 5)
{
ans++;
}
}
cout << ans << endl;
}
