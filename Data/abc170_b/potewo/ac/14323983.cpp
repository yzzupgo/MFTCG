#include <bits/stdc++.h>
using namespace std;
int X, Y;
int main() {
cin >> X >> Y;
int t = (4 * X) - Y;
if (t % 2 == 0 && t / 2 <= X && t >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
