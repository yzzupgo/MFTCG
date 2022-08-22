#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
int X, Y; cin >> X >> Y;
for (int i = 0; i <= X; ++i) {
int j = X - i;
if (i * 2 + j * 4 == Y) {
printf("%s\n", "Yes");
return 0;
}
}
printf("%s\n", "No");
return 0;
}
