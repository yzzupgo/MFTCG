#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int n;
cin >> n;
double n2 = log10(n);
int digitNum = 1 + (int)n2;
int ret = 0;
switch (digitNum)
{
case 6:
n = 99999;
case 5:
ret += n - 9999;
n = 999;
goto three;
case 4:
n = 999;
three:
case 3:
ret += n - 99;
n = 9;
case 2:
n = 9;
case 1:
ret += n;
break;
default:
return 0;
}
cout << ret << endl;
return 0;
}
