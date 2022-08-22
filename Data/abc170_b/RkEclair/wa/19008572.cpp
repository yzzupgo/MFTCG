#include <iostream>
int main() {
using namespace std;
int X, Y;
cin >> X >> Y;
int cranes = 2 * X - Y / 2;
int turtles = Y / 2 - X;
cout << (((cranes >= 0 && turtles > 0) || (cranes > 0 && turtles >= 0)) ?
"Yes" : "No")
<< "\n";
return 0;
}
