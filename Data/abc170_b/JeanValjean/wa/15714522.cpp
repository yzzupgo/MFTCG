#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
string ans = "No";
cin >> X >> Y;
for (int i = 0; i < X; i++) {
if (X == 1 && Y == 2) {
ans = "Yes";
break;
}
if (Y == 4 * (X - i) + 2 * i) {
ans = "Yes";
break;
}
}
cout << ans << endl;
}
