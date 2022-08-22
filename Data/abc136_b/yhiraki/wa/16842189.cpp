#include <iostream>
int main() {
int n;
std::cin >> n;
int keta = 1;
int ans = 0;
while (keta * 10 <= n) {
ans += keta * 10 - keta;
keta *= 100;
}
if (n - keta > 0)
ans += n - keta + 1;
std::cout << ans << std::endl;
}
