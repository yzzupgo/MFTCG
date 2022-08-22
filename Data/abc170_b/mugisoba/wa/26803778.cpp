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
if (tmp / -2 < 0) {
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}
