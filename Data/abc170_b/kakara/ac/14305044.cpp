#include<iostream>
using namespace std;
int main() {
int X, Y;
int kame, turu;
bool flag = false;
cin >> X >> Y;
for (int i = 0; i < 101; i++) {
for (int j = 0; j < 101; j++) {
turu = i;
kame = j;
if (i * 2 + j * 4 == Y && i + j == X) {
flag = true;
}
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
