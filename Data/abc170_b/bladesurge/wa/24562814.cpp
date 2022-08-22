#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if (2*x == y) cout << "Yes" << endl;
else if (2*x > y) cout << "No" << endl;
else {
if ((y-2*x)/2 < x) cout << "Yes" << endl;
else cout << "No" << endl;
}
}
