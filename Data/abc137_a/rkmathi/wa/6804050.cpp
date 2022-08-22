#include <iostream>
#include <string>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int a = A + B;
int b = A - B;
if (a > b) {
int c = A * B;
cout << max(a, c);
} else {
int c = a * b;
cout << max(b, c);
}
return 0;
}
