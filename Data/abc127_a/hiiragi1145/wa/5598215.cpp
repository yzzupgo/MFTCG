#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int C = B/2;
int D = 0;
if (A >= 13){
cout << B << endl;
}
else if (6 <= A <= 12) {
cout << C << endl;
}
else if (0 <= A <= 5) {
cout << D << endl;
}
}
