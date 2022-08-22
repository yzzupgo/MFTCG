#include <iostream>
#include <string>
int main() {
int n;
std::cin >> n;
int cnt = 0;
for (int i = 1; i <= n; ++i)
if (std::to_string(i).length() % 2 != 0)
cnt++;
std::cout << cnt << std::endl;
}
