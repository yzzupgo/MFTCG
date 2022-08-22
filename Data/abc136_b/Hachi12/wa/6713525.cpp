#include <iostream>
int main() {
int N;
std::cin >> N;
uint32_t res = 0;
for(int i = 0; i < N; ++i) {
if(i < 10) {++res;}
else if(i > 99 && i < 1000) {++res;}
else if(i > 9999 && i < 100000) {++res;}
}
std::cout << res << std::endl;
return 0;
}
