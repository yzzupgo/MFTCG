#include <iostream>
int main(void)
{
int x, y;
std::cin >> x >> y;
for (int i = 0; i <= x; i++)
{
if (4 * i + 2 * (x - i) == y)
{
std::cout << "Yes\n";
return (0);
}
}
std::cout << "No\n";
return (0);
}
