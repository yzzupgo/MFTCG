#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
string ans = "No";
cin >> X >> Y;
for (int i = 1; i < X + 1; i++) {
if (Y == 4 * (X - i) + 2 * i) {
ans = "Yes";
break;
}
}
cout << ans << endl;
}
