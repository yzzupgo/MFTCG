#include <bits/stdc++.h>
int main() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(0); std::cout.tie(0);
int x = 0, y = 0;
std::cin >> x >> y;
std::string r = "No";
for (int c = 0; c <= x; ++c) {
for (int t = 0; t <= x; ++t) {
if (y == (c << 1) + (t * 4)) {
r = "Yes";
break;
}
}
}
std::cout << r << std::endl;
return 0;
}
