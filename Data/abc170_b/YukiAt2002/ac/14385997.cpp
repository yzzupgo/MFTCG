#include <iostream>
int main() {
using namespace std;
int x, y;
cin >> x;
cin >> y;
if (y % 2 != 0) {
cout << "No";
}
else if (y > x * 4) {
cout << "No";
}
else if (y < x * 2) {
cout << "No";
}
else {
cout << "Yes";
}
return 0;
}
