#include <bits/stdc++.h>
int main() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(0); std::cout.tie(0);
int x = 0, y = 0;
std::cin >> x >> y;
std::string r = "No";
for (int i = 0; i <= x; ++i) {
const int t = x - i;
if ((i * 2) + (t * 4) == y) {
r = "Yes";
break;
}
}
std::cout << r << std::endl;
return 0;
}
