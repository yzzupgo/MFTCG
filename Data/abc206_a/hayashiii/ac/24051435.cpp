#include <iostream>
int main() {
int n;
std::cin >> n;
if(n * 108 / 100 < 206) {
std::cout << "Yay!";
} else if(n * 108 / 100 == 206) {
std::cout << "so-so";
} else {
std::cout << ":(";
}
}
