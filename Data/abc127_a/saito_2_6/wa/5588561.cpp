#include <iostream>
#include <vector>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (A > 12) {
cout << B << endl;
}
else if (A > 6) {
cout << B / 2 << endl;
}
else {
cout << 0 << endl;
}
}
