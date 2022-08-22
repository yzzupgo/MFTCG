#include <iostream>
using namespace std;
typedef long long ll;
int main() {
int X, Y;
cin >> X >> Y;
int m = (Y - 2 * X) / 2;
int n = (4 * X - Y) / 2;
if (m < 0 or n < 0) cout << "No" << endl;
else cout << "Yes" << endl;
}
