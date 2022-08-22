#include <iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (A >= 13) {
cout << B << endl;
return 0;
}
if (6 <= A && A<= 12) {
cout << B / 2 << endl;
return 0;
}
cout << 0 << endl;
return 0;
}
