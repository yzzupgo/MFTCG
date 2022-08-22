#include <iostream>
using namespace std;
int main()
{
long long int X, Y;
bool flag = false;
cin >> X >> Y;
for (long long int i = 0;i <= X;i++)
{
if ((X - i) * 2 + i * 4 == Y)
{
flag = true;
break;
}
}
if (flag)
cout << "Yes";
else
cout << "No";
}
