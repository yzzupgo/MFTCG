#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
int a, b;
int count = 0;
int digit = 0;
cin >> a;
b = a;
while (true)
{
digit++;
if (b < 10)
{
break;
}
b /= 10;
}
for (size_t i = 1; i <= digit; i+=2)
{
if (digit == i)
{
if (i == 1)
{
count += a;
}
else
{
count += a - pow(10, i - 1) + 1;
cout << a - pow(10, i - 1) + 1 << endl;
}
}
else
{
if (i == 1)
{
count += 9;
}
else
{
count += pow(10, i) - pow(10, i - 1);
}
}
}
cout << count << endl;
return 0;
}
