#include<iostream>
int main() {
int x, y;
std::cin >> x >> y;
if ((y - 2 * x) % 2) {
std::cout << "No\n";
return 0;
}
int b = (y - 2 * x) / 2, a = x - b;
if (a < 0 or b < 0) {
std::cout << "No\n";
return 0;
}
std::cout << "Yes\n";
}
