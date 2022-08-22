#include <iostream>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for (int i = 0;i <= 100;i++) {
for (int j = 0;j <= 100;j++) {
if ((i + j == X) && (i*2 + j*4 == Y) && !(i == 0 && j == 0)) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
