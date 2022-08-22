#include <iostream>
using namespace std;
int main(void) {
int x, y;
bool ans = false;
cin >> x >> y;
for (int i = 0; i < x; i++) {
int k = x - i;
if (i * 4 + k * 2 == y ) {
ans = true;
}
}
if (ans) {
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
