#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int C = B/2;
if (A >= 13){
cout << B << endl;
}
if (6 <= A <= 12) {
cout << C << endl;
}
if (A <= 5) {
cout << "0" << endl;
}
}
