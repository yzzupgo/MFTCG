#include <iostream>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
int Kame = 0;
int Turu = 0;
bool ok = false;
for (Kame = 0; Kame < X; Kame++)
{
Turu = X - Kame;
if (Kame * 4 + Turu * 2 == Y)
ok = true;
}
if (ok)
cout << "Yes";
else
cout << "No";
return 0;
}
