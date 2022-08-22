#include <iostream>
int main() {
int a;
std::cin >> a;
if(1.08 * a < 206) {
std::cout << "Yay!" << std::endl;
} else if(1.08 * a == 206) {
std::cout << "so-so" << std::endl;
} else {
std::cout << ":(" << std::endl;
}
}
