#include<iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (A >= 13) {
cout << B;
}
else if (A <= 5) {
cout << 0;
}
else {
cout << B / 2;
}
}
