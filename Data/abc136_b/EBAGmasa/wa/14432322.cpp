#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void){
int N;
std::cin >> N;
int result = 0;
int digit = 1;
int tmp = 1;
while (N >= tmp) {
if (digit % 2 == 1) {
if (N >= tmp * 10) {
result += tmp * 10 - tmp;
} else {
result += N % tmp + 1;
}
}
tmp *= 10;
digit += 1;
}
std::cout << result << std::endl;
}
