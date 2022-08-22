#include <iostream>
int main() {
int n;
std::cin >> n;
int cnt = 0;
for (int i = 1; i <= n; ++i) {
int j = i;
int keta = 0;
while (j > 0) {
j /= 10;
keta++;
}
if (keta % 2 != 0)
cnt++;
}
std::cout << cnt << std::endl;
}
