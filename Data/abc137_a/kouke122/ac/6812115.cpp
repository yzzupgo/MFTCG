#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int a = A + B;
int b = A - B;
int c = A * B;
if (a > b && a > c) {
cout << a << endl;
}
else if (b > a && b > c) {
cout << b << endl;
}
else if (c > a && c > b) {
cout << c << endl;
}
else if (a == b) {
cout << a << endl;
}
else if (a == c) {
cout << a << endl;
}
else if (b == c) {
cout << b << endl;
}
}
