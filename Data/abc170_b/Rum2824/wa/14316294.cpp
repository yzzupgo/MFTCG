#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
for (int i = 1; i <= X; i++)
{
if (2 * i + 4 * (X - i) || 4 * i + 2 * (X - i))
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
