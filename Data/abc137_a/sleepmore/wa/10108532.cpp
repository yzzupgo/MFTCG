#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B;
cin >> A >> B;
if (A <= 0 && A >= -100 && B <= 100 && B >= 1) {
cout << A + B << endl;
}
if (A <= 100 && A >= 1 && B <= 0 && B >= -100) {
cout << A - B << endl;
}
if (A <= 100 && A >= 3 && B <= 100 && B >= 3) {
cout << A * B << endl;
}
if (A <= 0 && A >= -100 && B <= 0 && B >= -100) {
cout << A * B << endl;
}
if (A == 0 && B == 0) {
cout << A + B << A - B << A * B << endl;
}
if (A == 1 && B == 1) {
cout << A + B << endl;
}
if (A == 2 && B == 2) {
cout << A + B << A * B << endl;
}
}
