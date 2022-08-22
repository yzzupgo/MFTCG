#include <bits/stdc++.h>
int main(void)
{
int X, Y;
std::cin >> X >> Y;
int a,b;
a = (4 * X - Y);
b = (Y - 2 * X);
if((a >= 0) && ( b >= 0)) {
if ((a % 2 == 0) && (b % 2 == 0)) {
std::cout << "Yes" << std::endl;
}
std::cout << "No" << std::endl;
}
else {
std::cout << "No" << std::endl;
}
return 0;
}
