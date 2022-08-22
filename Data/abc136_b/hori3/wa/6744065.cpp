#include <cstdio>
int main() {
int n;
std::scanf("%d", &n);
if (n < 10) {
std::printf("%d\n", n);
}
else if (n < 100) {
std::printf("%d\n", 9);
}
else if (n < 1000) {
std::printf("%d\n", n - 90);
}
else if (n < 10000) {
std::printf("%d\n", 909);
}
else if (n <= 100000) {
std::printf("%d\n", n - 9090);
}
return 0;
}
