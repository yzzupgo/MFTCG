#include <iostream>
using namespace std;
int main() {
int A, B,C;
cin >> A >> B;
if (A >= 13) {
C = B;
}
else if (A >= 6) {
C = B / 2;
}
else C = 0;
cout << C << endl;
}
