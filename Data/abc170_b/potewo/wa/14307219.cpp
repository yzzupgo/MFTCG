#include <bits/stdc++.h>
using namespace std;
int X, Y;
int main() {
cin >> X >> Y;
int t = Y - (4 * X);
if (t % 2 == 0 && t / 2 < X) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
