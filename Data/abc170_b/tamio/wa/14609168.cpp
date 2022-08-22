#include <iostream>
int main()
{
int X,Y;
std::cin >> X >> Y;
for(int a=0,b=X;a<=X;a=a+1,b=b-1)
{
if(Y==2*a+4*b)
{std::cout << "Yes" << std::endl;}
else{std::cout << "No" << std::endl;}
}
}
