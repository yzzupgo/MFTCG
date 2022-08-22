#include <iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (A > 0 && B > 0)
{
if (A + B > A * B)
{
cout << (A + B) << endl;
} else {
cout << (A * B) << endl;
}
} else if (A > 0 && B == 0) {
cout << A << endl;
} else if (A > 0 && B < 0) {
cout << (A - B) << endl;
} else if (A == 0 && B > 0) {
cout << B << endl;
} else if (A == 0 && B == 0) {
cout << 0 << endl;
} else if (A == 0 && B < 0) {
cout << (A - B) << endl;
} else if (A < 0 && B > 0) {
cout << (A + B) << endl;
} else if (A < 0 && B == 0) {
cout << A << endl;
} else if (A < 0 && B < 0) {
if (A - B > A * B)
{
cout << (A - B) << endl;
} else {
cout << (A * B) << endl;
}
}
return 0;
}
