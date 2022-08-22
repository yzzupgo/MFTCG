#include <bits/stdc++.h>
using ll = long long int;
int main() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(0); std::cout.tie(0);
ll x = 0, y = 0;
std::cin >> x >> y;
std::string r = "No";
for (ll c = 0; c <= x; ++c) {
for (ll t = 0; t <= x; ++t) {
if (y == (c << 1) + (t * 4)) {
r = "Yes";
break;
}
}
}
std::cout << r << std::endl;
return 0;
}
