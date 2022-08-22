#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
string ans = "Yes";
if (4 * X < Y||2 * X > Y) ans = "No";
cout << ans << endl;
}
