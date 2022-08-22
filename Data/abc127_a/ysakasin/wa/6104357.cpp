#include <iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (A>= 13) {
} else if (A <= 5) {
A = 0;
} else {
A = A/2;
}
cout << A << endl;
}
