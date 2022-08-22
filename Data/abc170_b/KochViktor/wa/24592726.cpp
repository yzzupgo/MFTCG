#include <iostream>
using namespace std;
int main() {
int x;
int y;
cin >> x >> y;
if (y > 4 * x) {
cout << "No";
} else if (y % 2 == 1) {
cout << "No";
} else if (y <= x) {
cout << "No";
} else {
cout << "Yes";
}
return 0;
}
