#include<iostream>
using namespace std;
int main () {
int A, B;
cin >> A >> B;
if (A >= 6 && A <= 12) B /= 2;
if (A < 6) B = 0;
cout << B << endl;
}
