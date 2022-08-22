#include<iostream>
int main(void) {
int n;
std::cin >> n;
n *= 1.08;
if(n > 206) {
std::cout << ":(" << std::endl;
} else if(n == 206) {
std::cout << "so-so" << std::endl;
} else {
std::cout << "Yey!" << std::endl;
}
}
