#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool flag = false;
for (int iTsuru = 0; iTsuru <= X; iTsuru++) {
if ((iTsuru * 2 + (X - iTsuru) * 4) == Y) {
flag = true;
break;
}
}
if (flag) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
