#include <iostream>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
if (a<6)
{
cout << "0" << endl;
}
else
{
if (a<14)
{
cout << (b / 2) << endl;
}
else
{
cout << b << endl;
}
}
return 0;
}
