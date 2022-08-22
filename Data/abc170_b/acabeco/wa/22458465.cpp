#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#define ll long long
using namespace std;
bool Solve(int X, int Y)
{
for (int i = 0; i <= X; i++)
{
for (int j = i + 1; j <= X; j++)
{
if (i * 2 + j * 4 == Y)
return true;
}
}
return false;
}
int main()
{
int X, Y;
cin >> X >> Y;
if (Solve(X, Y))cout << "Yes" << endl;
else cout << "No" << endl;
}
