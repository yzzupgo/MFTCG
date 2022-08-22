#include <iostream>
using namespace std;
int pow10(int n)
{
if (n == 0)
{
return 1;
}
int ans = 1;
for (int i = 0; i < n; ++i)
{
ans *= 10;
}
return ans;
}
int main()
{
int N;
cin >> N;
int temp = N;
int keta = 0;
while(temp != 0)
{
temp /= 10;
keta++;
}
int ans = 0;
if (keta % 2 == 0)
{
keta -= 1;
while(keta > 0)
{
ans += pow10(keta-1) * 9;
keta -= 2;
}
}
else
{
ans += N - (pow10(keta-1) - 1);
keta -= 2;
while(keta > 0)
{
ans += pow10(keta-1) * 9;
keta -= 2;
}
}
cout << ans << endl;
return 0;
}
