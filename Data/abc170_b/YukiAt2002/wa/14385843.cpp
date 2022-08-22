#include <iostream>
int main() {
using namespace std;
int x, y;
cin >> x;
cin >> y;
if (y % 2 == 1) {
cout << "No";
}
else if (y / 2 < y) {
cout << "No";
}
else if (y / 4 > y) {
cout << "No";
}
else {
cout << "Yes";
}
return 0;
}
