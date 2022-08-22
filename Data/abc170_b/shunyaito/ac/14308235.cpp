#include <iostream>
using namespace std;
int main()
{
int nX, nY;
cin >> nX;
cin >> nY;
bool isFlg = false;
for (int i = 1; i < nX + 1; i++)
{
if (nY == (2 * i + 4 * (nX - i)))
{
isFlg = true;
}
if (nY == (4 * i + 2 * (nX - i)))
{
isFlg = true;
}
}
if (isFlg)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
}
