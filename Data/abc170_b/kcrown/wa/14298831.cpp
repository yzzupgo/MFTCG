#include <iostream>
using namespace std;
int main() {
int x, y, tmp;
cin >> x >> y;
tmp = 4 * x - y;
if (tmp > 0 && tmp % 2 == 0) {
cout << "yes" << endl;
}
else {
cout << "no" << endl;
}
return 0;
}
