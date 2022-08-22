#include<iostream>
int main() {
int n;
std::cin >> n;
if(n * 1.08 < 206) {
std:: cout << "Yay!" << std::endl;
} else if(n * 1.08 == 206) {
std::cout << "so-so" << std::endl;
} else {
std::cout << ":(" << std::endl;
}
}
