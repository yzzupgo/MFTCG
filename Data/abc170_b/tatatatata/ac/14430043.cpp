#include <iostream>
int main()
{
int X,Y;
std::cin >> X >> Y;
for (int a=0,b=X;a<=X;a++,b=b-1)
{
if (Y==4*b+2*a)
{
std::cout << "Yes" << std::endl;
return 0;
}
}
std::cout << "No" << std::endl;
}
