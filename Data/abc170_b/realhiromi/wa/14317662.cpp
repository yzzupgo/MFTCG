#include <iostream>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
if ( y % 2 != 0) {
cout << "No";
return 0;
}
for (int c = y; c >=0; c--) {
int t = x - c;
if ((4*c+2*t) == y) {
cout << "Yes";
return 0;
}
}
cout << "No";
}
