#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool res = false;
for (int i=0; i<=100; i++) {
for (int j=0; j<=100; j++) {
if (x == i+j && y == 2*i+4*j) {
res = true;
}
}
}
if (res) cout << "Yes" << endl;
else cout << "No" << endl;
}
