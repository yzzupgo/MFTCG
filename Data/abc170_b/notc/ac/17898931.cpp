#include <iostream>
int main(void) {
int X, Y;
std::cin >> X >> Y;
if (Y % 2 == 0) {
if (Y <= 4 * X && 2 * X <= Y) {
std::cout << "Yes";
return 0;
}
}
std::cout << "No";
return 0;
}
