#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) {
cout << b << endl;
}
else if (6<=a<13) {
cout << b/2 << endl;
}
else if (a<6) {
cout << 0 << endl;
}
}
