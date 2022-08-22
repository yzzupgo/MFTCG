#include <iostream>
int main() {
double n;
std::cin >> n;
std::cout << (static_cast<int>(n * 1.08) < 206 ? "Yay!" : "so-so") << std::endl;
return 0;
}
