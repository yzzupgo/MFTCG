#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
int main()
{
int x, y;
bool flag = false;
std::cin >> x >> y;
for (int i = 0; i <= x; i++)
{
for (int j = 0; j <= x; j++)
{
if (2 * i + 4 * j == y && i + j == x)
flag = true;
}
}
if (flag)
std::cout << "Yes\n";
else
std::cout << "No\n";
return 0;
}
