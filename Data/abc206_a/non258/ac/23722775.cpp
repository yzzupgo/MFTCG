#include<iostream>
int main() {
int n;
std::cin >> n;
int result = n * 1.08;
if(result < 206) {
std:: cout << "Yay!" << std::endl;
} else if(result == 206) {
std::cout << "so-so" << std::endl;
} else {
std::cout << ":(" << std::endl;
}
}
