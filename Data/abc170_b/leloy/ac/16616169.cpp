#include <iostream>
int main() {
int X, Y; std::cin >> X >> Y;
if (2*X <= Y and Y <= 4*X and Y % 2 == 0)
std::cout << "Yes\n";
else
std::cout << "No\n";
return 0;
}
