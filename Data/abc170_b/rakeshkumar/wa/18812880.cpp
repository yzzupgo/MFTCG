#include <bits/stdc++.h>
int main() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(0); std::cout.tie(0);
int x = 0, y = 0;
std::cin >> x >> y;
std::string r = "Yes";
if (y < (x << 1) || y > (x * 4))
r = "No";
std::cout << r << std::endl;
return 0;
}
