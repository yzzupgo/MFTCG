#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
for (int j = 0; j <= X; j++) {
if ((2 * i + 4 * j) == Y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
