#include <iostream>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool exist = false;
for (int x = 0; x <= 100; x++) {
int y = X - x;
if (x >= 0 && y >= 0 && 2*x + 4*y == Y) {
exist = true;
break;
}
}
cout << ((exist)? "Yes": "No") << endl;
return 0;
}
