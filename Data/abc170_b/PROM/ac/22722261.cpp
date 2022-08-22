#include <iostream>
using namespace std;
typedef long long ll;
int main() {
int X, Y;
cin >> X >> Y;
if ((2 * X <= Y and Y <= 4 * X) and Y % 2 == 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
