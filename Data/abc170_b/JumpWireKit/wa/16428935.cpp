#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool correct = false;
for(int kame = 0; kame <= X; kame++) {
for(int turu = kame + 1; turu <= X; turu++) {
if((kame * 4 + turu * 2) == Y) {
correct = true;
break;
}
}
}
cout << (correct ? "Yes" : "No") << endl;
return 0;
}
