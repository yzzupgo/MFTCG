#include <iostream>
using namespace std;
int main(void)
{
int X, Y;
cin >> X >> Y;
int turu, kame;
for(int turu = 0; turu <= X; turu++)
{
for(int kame = 0; kame <= X; kame++)
{
int legs = 2 * turu + 4 * kame;
if((legs == Y) && ((kame + turu) == X))
{
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
