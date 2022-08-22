#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
for (int j = 0; i+j <= X; j++) {
if(i*2+j*4 == Y && i+j == X){cout << "Yes" << endl;return 0;}
}
}
cout << "No" << endl;
}
