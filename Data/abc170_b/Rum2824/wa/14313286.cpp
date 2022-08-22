#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
for (int i = 1; i <= X; i++)
{
int turu = 2 * i;
int kame = 4 * (X - i);
if (turu + kame == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
