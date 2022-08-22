#include <iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (A>= 13) {
} else if (A <= 5) {
B = 0;
} else {
B = B/2;
}
cout << B << endl;
}
