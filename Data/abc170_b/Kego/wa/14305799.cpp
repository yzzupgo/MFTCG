#include <iostream>
using namespace std;
int main(void) {
int x, y;
cin >> x >> y;
if (0 <= y && y <= 4 * x && y % 2 == 0) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
