#include<iostream>
using namespace std;
int main()
{
int x, y;
cin >> x;
cin >> y;
for (int i = 0; i < y; i++)
for (int j = 0; j < y; j++)
{
if (2*i + 4*j == y)
{
if (i + j == x)
{
cout << "YES" << endl;
return 0;
}
}
}
cout << "NO" << endl;
return 0;
}
