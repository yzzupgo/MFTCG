#include <bits/stdc++.h>
int main() {
int X, Y;
std::cin >> X >> Y;
for (int i = 0; i <= X; ++i) {
const int j = X - i;
if ((i * 2 + j * 4) == Y) {
std::cout << "Yes" << std::endl;
return 0;
}
}
std::cout << "No" << std::endl;
return 0;
}
