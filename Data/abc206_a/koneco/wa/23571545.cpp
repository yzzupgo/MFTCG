#include <iostream>
int main() {
int N;
std::cin >> N;
if(N < 191) {
std::cout << "Yay!" << std::endl;
} else if(191 < N) {
std::cout << ":(" << std::endl;
} else {
std::cout << "so - so" << std::endl;
}
return 0;
}
