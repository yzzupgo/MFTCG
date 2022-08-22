#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a, b, x = 0, y = 0, z = 0; cin >> a >> b;
int sum = 0;
if (b > 100 || a > 100)
{
cout << "No" << endl;
}
if (b % 2 == 1)
{
printf("No\n");
return 0;
}
if (b % a == 0)
{
x = b / a;
sum = 4 * x;
if (sum == b)
{
printf("Yes\n");
return 0;
}
}
if (b == a * 2)
{
std::cout << "Yes" << endl;
return 0;
}
y = b / 2;
if (y > a)
{
z = y - a;
sum = 4 * z;
a = a - z;
for (int i = 0; i < a; ++i)
{
sum += 2;
}
if (sum == b)
{
printf("Yes\n");
return 0;
}
}
cout << "No" << endl;
return 0;
}
