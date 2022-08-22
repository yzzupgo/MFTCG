#include <algorithm>
#include <iostream>
#include <vector>
using std::make_pair;
using std::pair;
using std::max;
using std::min;
using std::sort;
using std::cin;
using std::cout;
using std::vector;
int main() {
int x, y;
cin >> x >> y;
bool f = false;
for (int turtle = 0; turtle <= x; turtle++) {
if (turtle * 2 + (x - turtle) * 4 == y) f = true;
}
cout << (f ? "Yes\n" : "No\n");
return 0;
}
