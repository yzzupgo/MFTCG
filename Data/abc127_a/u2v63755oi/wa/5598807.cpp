#include<iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (a < 6) {
b = 0;
cout << b << endl;
}
else if (a >= 6 || a <= 12) {
b = b / 2;
cout << b << endl;
}
else {
cout << b;
}
return 0;
}
