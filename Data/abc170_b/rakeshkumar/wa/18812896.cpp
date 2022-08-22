#include <bits/stdc++.h>
int main() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(0); std::cout.tie(0);
int x = 0, y = 0;
std::cin >> x >> y;
std::string r = "Yes";
if (x * 2 > y)
r = "No";
if (x * 4 < y)
r = "No";
std::cout << r << std::endl;
return 0;
}
