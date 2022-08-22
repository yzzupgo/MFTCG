#include <iostream>
#include <string>
std::string check(int x, int y)
{
if(y % 2 == 0)
{
int t = (int)(0.5*y) - x;
if(t > 0 && (x-t) >= 0)
return "Yes";
}
return "No";
}
int main()
{
int x, y;
std::cin >> x >> y;
std::cout << check(x, y) << std::endl;
return 0;
}
