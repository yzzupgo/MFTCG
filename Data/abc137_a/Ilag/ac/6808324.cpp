#include <iostream>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
int A = a + b;
int B = a - b;
int C = a * b;
if (A > B) {
if (A > C) cout << A << endl;
else cout << C << endl;
} else if (B > A) {
if (B > C) cout << B << endl;
else cout << C << endl;
} else if (C > A) {
if (C > B) cout << C << endl;
else cout << B << endl;
} else cout << A << endl;
}
