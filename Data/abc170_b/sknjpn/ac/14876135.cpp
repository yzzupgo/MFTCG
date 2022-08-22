#include <iostream>
int main()
{
int x, y;
std::cin >> x >> y;
for (int crane = 0; crane <= x; ++crane)
{
if (crane * 2 + (x - crane) * 4 == y)
{
std::cout << "Yes" << std::endl;
return 0;
}
}
std::cout << "No" << std::endl;
return 0;
}
