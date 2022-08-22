#include <iostream>
#include <vector>
constexpr float TAX = 1.08f;
constexpr float VAL = 206.0f;
int main() {
float N;
std::cin >> N;
float x = N * TAX;
if(x == VAL) {
std::cout << "so-so" << std::endl;
} else if(x > VAL) {
std::cout << ":(" << std::endl;
} else {
std::cout << "Yay!" << std::endl;
}
}
