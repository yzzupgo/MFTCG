#include <iostream>
#include <vector>
constexpr float TAX = 1.08f;
constexpr int VAL = 206;
int main() {
float N;
std::cin >> N;
int x = static_cast<int>(N * TAX);
if(x == VAL) {
std::cout << "so-so" << std::endl;
} else if(x > VAL) {
std::cout << ":(" << std::endl;
} else {
std::cout << "Yay!" << std::endl;
}
}
