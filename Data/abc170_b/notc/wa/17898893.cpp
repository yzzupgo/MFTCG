#include <iostream>
int main(void) {
int X, Y;
std::cin >> X >> Y;
int chicken = Y / 2;
int trutle = Y / 4;
if (trutle <= X && X <= chicken) {
std::cout << "Yes";
return 0;
}
std::cout << "No";
return 0;
}
