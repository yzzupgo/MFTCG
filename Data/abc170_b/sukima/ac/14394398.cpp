#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if (y % 2 == 1) {
cout << "No" << endl;
return 0;
}
if (x * 2 <= y && y <= x * 4) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
