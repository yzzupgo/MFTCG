#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool res = false;
for (int i = 0; i <= x; i++) {
for (int j = 0; i + j <= x; j++) {
res = res || 2 * i + 4 * j == y;
}
}
cout << (res ? "Yes" : "No") << endl;
}
