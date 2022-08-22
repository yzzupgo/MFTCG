#include <iostream>
#include <string>
std::string check(int x, int y)
{
int t = 0.5*y - x;
if(t > x)
return "No";
return "Yes";
}
int main()
{
int x, y;
std::cin >> x >> y;
std::cout << check(x, y) << std::endl;
return 0;
}
