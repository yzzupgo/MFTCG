#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++)
{
for (int j = 0; j <= X; j++)
{
if (2 * i + 4 * j == Y && i + j == X)
{
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
