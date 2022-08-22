#include <iostream>
#include <bits/stdc++.h>
int main() {
int a, b;
int mx = a + b;
mx = std::max(mx, a - b);
mx = std::max(mx, a * b);
std::cout << mx << std::endl;
return 0;
}
