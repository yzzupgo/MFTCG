#include <iostream>
#include <cstdint>
using namespace std;
int main() {
int64_t X;
int64_t Y;
cin >> X >> Y;
auto tmp = Y - 4 * X;
if (tmp % -2 != 0) {
cout << "No" << endl;
return 0;
}
auto t = tmp / -2;
if (t < 0) {
cout << "No" << endl;
return 0;
}
auto k = X - t;
if (k < 0) {
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}
