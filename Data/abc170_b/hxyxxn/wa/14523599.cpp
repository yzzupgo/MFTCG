#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
static const auto __ = [] {
ios::sync_with_stdio(false);
cin.tie(nullptr);
return nullptr;
}();
bool solve() {
int x, y;
cin >> x >> y;
return 2 * x <= y && y <= 4 * x;
}
int main(int argc, char* argv[]) {
cout << (solve() ? "Yes" : "No") << '\n';
return 0;
}
