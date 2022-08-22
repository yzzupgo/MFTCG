#include <iostream>
using namespace std;
int main() {
int x, y, tmp, tmp2;
cin >> x >> y;
tmp = 4 * x - y;
tmp2 = y - 2 * x;
if (tmp % 2 == 0 && tmp2 % 2 == 0 && tmp >= 0 && tmp2 >=0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
