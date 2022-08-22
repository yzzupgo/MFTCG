#include <iostream>
int main() {
int n;
std::cin >> n;
if(n * 108 < 20600) {
std::cout << "Yay!";
} else if(n * 108 == 20600) {
std::cout << "so-so";
} else {
std::cout << ":(";
}
}
