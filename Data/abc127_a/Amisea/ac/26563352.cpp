#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (b % 2 == 0) {
if (a >= 13) {
cout << b;
}
else if (a <= 5) {
cout << 0;
}
else if (a > 5 && a < 13) {
cout << b / 2;
}
}
return 0;
}
