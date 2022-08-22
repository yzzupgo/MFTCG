#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
for(int i =0; i <= 100; i++)
{
for(int j = 0; j <= 100; j++)
{
if(i+j == x && 2*i + 4*j == y)
{
cout << "Yes";
return 0;
}
}
}
cout << "No";
}
