#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
int x, y;
cin >> x;
cin >> y;
for (int i = 0; i <= x; i ++)
{
for (int j = 0; j <= y; j ++)
{
if ( (i + j == x) && (2*i + 4*j == y))
{
cout <<"Yes"; return 0;
}
}
}
cout <<"No"; return 0;
}
