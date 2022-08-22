#include <bits/stdc++.h>
using namespace std;
int main () {
int x, y;
cin >> x >> y;
if (x * 4 < y) cout << "No" << endl;
else if (y % 2 == 1) cout << "No" << endl;
else cout << "Yes" << endl;
}
