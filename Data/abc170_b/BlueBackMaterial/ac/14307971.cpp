#include <iostream>
int main()
{
int X, Y;
std::cin >> X >> Y;
if (X * 2 <= Y && X * 4 >= Y && Y % 2 == 0) {
std::cout << "Yes";
}
else {
std::cout << "No";
}
}
