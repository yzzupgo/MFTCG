#include <iostream>
using namespace std;
int a[6];
int main()
{
int x , y;
cin >> x >> y;
for(int i = 0 ; i <= x ; i++)
for(int j = 0 ; j <= x ; j++)
{
if(i + j == x && 2 * i + 3 * j == y)
{
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
return 0;
}
