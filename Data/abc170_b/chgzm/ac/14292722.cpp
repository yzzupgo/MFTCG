#include <bits/stdc++.h>
using ll = int64_t;
int main() {
int X, Y;
std::cin >> X >> Y;
for (int i = 0; i <= 200; ++i) {
for (int j = 0; j <= 200; ++j) {
if ((i + j) == X && ((i * 2 + j * 4) == Y)) {
std::cout << "Yes" << std::endl;
return 0;
}
}
}
std::cout << "No" << std::endl;
return 0;
}
