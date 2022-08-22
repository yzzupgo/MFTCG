#include <iostream>
int main () {
int n;
std::cin >> n;
if(n < 10) {
std::cout << n << std::endl;
}
else if (n < 100){
std::cout << 9 << std::endl;
}
else if (n < 1000) {
std::cout << n - 90 << std::endl;
}
else if (n < 10000) {
std::cout << 909 << std::endl;
}
else if (n < 100000) {
std::cout << n - 9090 << std::endl;
}
else{
std::cout << 90909 << std::endl;
}
}
