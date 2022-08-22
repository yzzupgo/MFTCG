#include <iostream>
#include <vector>
#include <algorithm>
#define For(index,max) for(int index = 0; index < max; index++)
#define Out(x) cout << x << endl;
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (auto numT = 1; numT <= x; numT++) {
auto legsCount = numT * 2 + (x - numT) * 4;
if (legsCount == y) {
Out("Yes");
return 0;
}
}
Out("No");
}
