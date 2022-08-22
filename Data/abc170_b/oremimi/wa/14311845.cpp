#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int X, Y;
cin >> X >> Y;
if (Y % 2 == 1 || 4 * X <= Y) {
cout << "No" << endl;
return 0;
}
for (int i = 0; i <= X; i++) {
for (int j = 0; j <= X - i; j++) {
if ((2 * i + 4 * j) == Y || (4 * i + 2 * j) == Y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
