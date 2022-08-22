#include <bits/stdc++.h>
int main() {
int a, b;
std::cin >> a >> b;
std::cout << (a > 12 ? b : (a > 5 ? b / 2 : 0)) << "\n";
}
