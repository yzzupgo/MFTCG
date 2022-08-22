#include <iostream>
#include <math.h>
using namespace std;
int main()
{
string s;
cin >> s;
int digits = s.size();
int count = digits / 2 * 2 - 1,
ret = 0, digitCount = 9;
for (int i = 1; i <= count; i = i + 2)
{
ret = ret + digitCount;
digitCount *= 100;
}
if (digits % 2 == 1)
{
ret = ret + stoi(s) - pow(10, digits - 1);
}
cout << ret << endl;
return 0;
}
