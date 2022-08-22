#include <iostream>
using namespace std;
int x, y, cnt = 0, j;
int main()
{
cin >> x >> y;
for(int i = 1;i <= x;i++)
{
j = x - i;
if(2 * i + 4 * j == y)
{
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
