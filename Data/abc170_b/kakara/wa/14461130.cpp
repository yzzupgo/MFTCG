#include<iostream>
using namespace std;
int main() {
int X, Y;
int turu, kame;
bool flag = false;
cin >> X >> Y;
for (int i = 0; i <= 100; i++) {
turu = i;
kame = X - i;
if (turu * 2 + kame * 4 == Y) {
flag = true;
}
}
if (flag) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
