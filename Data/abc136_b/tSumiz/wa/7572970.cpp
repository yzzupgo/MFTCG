#include <iostream>
#include <string>
using namespace std;
int main()
{
int n;
cin >> n;
int digits = 0;
for (int i = 1; i <= n; i++)
{
if (i <= 9)
digits += 1;
if (i >= 100 && i <= 999)
digits += 1;
if (i >= 10000 && i <= 99999)
digits += 1;
if (i >= 1000000 && i <= 9999999)
digits += 1;
}
digits += 1;
int divi10 = n / 10;
return 0;
}
