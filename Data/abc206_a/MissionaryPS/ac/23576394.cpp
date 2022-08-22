#include <iostream>
void funcA() {
int n;
std::cin >> n;
n *= 1.08;
if(n < 206) {
std::cout << "Yay!";
} else if(n == 206) {
std::cout << "so-so";
} else {
std::cout << ":(";
}
}
int main(void) {
funcA();
return 0;
}
