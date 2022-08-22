#include <iostream>
#include <string>
std::string check(int x, int y)
{
float two_t = y - 2*x;
if(two_t == (int)two_t)
{
int t = two_t * 0.5;
if(t > x)
return "No";
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
