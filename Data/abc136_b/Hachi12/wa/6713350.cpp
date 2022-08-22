#include <iostream>
int main() {
int N;
std::cin >> N;
uint32_t res = 0;
if(N > 0 && N < 100) {
res += std::min(N, 9);
} else if(N > 99 && N < 10000) {
res += 9;
int buf = ((N / 100) -1) * 100;
res += std::min(900, buf + (N - (buf+100)));
} else if(N > 9999 && N <= 100000) {
res += 9;
int buf = ((N / 100) -1) * 100;
res += std::min(900, buf + (N - (buf+100)) + 1);
buf = ((N / 10000) - 1) * 10000;
res += std::min(buf + (N - (buf+10000) + 1), 90000);
}
std::cout << res << std::endl;
return 0;
}
